#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DAE6D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAE7D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDExitSideScrollingCameraMode_TypeDefinitionIndex = 77074;

	class LDExitSideScrollingCameraMode : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODE_INVOKE_OFFSET))(this);
		}
	};
}
