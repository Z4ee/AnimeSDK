#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/HackerGameCliParamType.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B01730)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B01880)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardEvent_TypeDefinitionIndex = 42790;

	class ChessboardEvent : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::MoleMole::HackerGameCliParamType, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::HackerGameCliParamType type, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackerGameCliParamType, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENT_INVOKE_OFFSET))(this, type, value);
		}
	};
}
