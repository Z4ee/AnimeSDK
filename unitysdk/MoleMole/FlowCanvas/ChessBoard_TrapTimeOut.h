#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"

namespace MoleMole::DefenseScene { class DefenseSceneTrapChessEntity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_TRAPTIMEOUT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x19115CF0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_TRAPTIMEOUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19115DA0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_TRAPTIMEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x19115D50)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_TrapTimeOut_TypeDefinitionIndex = 69380;

	class ChessBoard_TrapTimeOut : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::MoleMole::DefenseScene::DefenseSceneTrapChessEntity*>
	{
	public:
		static ::System::String** StaticGet_StaticEventName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChessBoard_TrapTimeOut_TypeDefinitionIndex)->GetStaticField(0x37550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_TRAPTIMEOUT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_TRAPTIMEOUT__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_TRAPTIMEOUT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
