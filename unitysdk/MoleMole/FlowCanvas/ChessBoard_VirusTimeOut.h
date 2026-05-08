#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"

namespace MoleMole::DefenseScene { class DefenseSceneVirusChessEntity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTIMEOUT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x16E3F4D0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTIMEOUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E3F580)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTIMEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x16E3F530)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_VirusTimeOut_TypeDefinitionIndex = 60552;

	class ChessBoard_VirusTimeOut : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::MoleMole::DefenseScene::DefenseSceneVirusChessEntity*>
	{
	public:
		static ::System::String** StaticGet_StaticEventName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChessBoard_VirusTimeOut_TypeDefinitionIndex)->GetStaticField(0x322D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTIMEOUT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTIMEOUT__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_VIRUSTIMEOUT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
