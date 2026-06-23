#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_HACKERGAMERESETHOLLOWSYSTEMSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17E68B60)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMERESETHOLLOWSYSTEMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E68C60)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameResetHollowSystemState_TypeDefinitionIndex = 63895;

	class HackerGameResetHollowSystemState : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMERESETHOLLOWSYSTEMSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMERESETHOLLOWSYSTEMSTATE_INVOKE_OFFSET))(this);
		}
	};
}
