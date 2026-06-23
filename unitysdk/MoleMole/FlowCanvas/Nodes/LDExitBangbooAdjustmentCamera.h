#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITBANGBOOADJUSTMENTCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D39950)
#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITBANGBOOADJUSTMENTCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D39AB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDExitBangbooAdjustmentCamera_TypeDefinitionIndex = 72448;

	class LDExitBangbooAdjustmentCamera : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITBANGBOOADJUSTMENTCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITBANGBOOADJUSTMENTCAMERA_INVOKE_OFFSET))(this);
		}
	};
}
