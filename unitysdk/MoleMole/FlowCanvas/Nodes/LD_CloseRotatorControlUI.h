#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLOSEROTATORCONTROLUI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1780DE60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLOSEROTATORCONTROLUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1780DFC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CloseRotatorControlUI_TypeDefinitionIndex = 52787;

	class LD_CloseRotatorControlUI : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLOSEROTATORCONTROLUI__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single delaySeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLOSEROTATORCONTROLUI_INVOKE_OFFSET))(this, delaySeconds);
		}
	};
}
