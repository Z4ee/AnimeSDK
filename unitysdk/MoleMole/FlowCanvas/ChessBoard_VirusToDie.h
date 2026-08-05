#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"

namespace MoleMole::DefenseScene { class DefenseSceneVirusChessEntity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTODIE_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1B194B90)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTODIE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B194C40)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTODIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B194BF0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_VirusToDie_TypeDefinitionIndex = 51703;

	class ChessBoard_VirusToDie : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::MoleMole::DefenseScene::DefenseSceneVirusChessEntity*>
	{
	public:
		static ::System::String** StaticGet_StaticEventName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChessBoard_VirusToDie_TypeDefinitionIndex)->GetStaticField(0x42530);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTODIE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTODIE__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTODIE_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
