#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/TargetUIOperation.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDHANDLETARGETUINODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1160C830)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHANDLETARGETUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1160C990)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHandleTargetUINode_TypeDefinitionIndex = 64171;

	class LDHandleTargetUINode : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Boolean, ::MoleMole::FlowCanvas::Nodes::TargetUIOperation>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHANDLETARGETUINODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::FlowCanvas::Nodes::TargetUIOperation operation)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::TargetUIOperation))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHANDLETARGETUINODE_INVOKE_OFFSET))(this, operation);
		}
	};
}
