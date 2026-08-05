#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/TargetArrowUIKind.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/TargetUIOperation.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETARROWUIVISIABLENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B1A40F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETARROWUIVISIABLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A4340)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetTargetArrowUIVisiableNode_TypeDefinitionIndex = 69346;

	class LDSetTargetArrowUIVisiableNode : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::MoleMole::FlowCanvas::Nodes::TargetUIOperation, ::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETARROWUIVISIABLENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::FlowCanvas::Nodes::TargetUIOperation operation, ::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind uiKind)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::TargetUIOperation, ::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETARROWUIVISIABLENODE_INVOKE_OFFSET))(this, operation, uiKind);
		}
	};
}
