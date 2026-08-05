#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12994D10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE_ISCOULDOUTCALL_OFFSET UNITYSDK_OFFSET(0x12994FD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12995020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE__INVOKE_B__0_0_OFFSET UNITYSDK_OFFSET(0x12995040)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE___BASE_ISCOULDOUTCALL_OFFSET UNITYSDK_OFFSET(0x129950E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDResetEntityBehaviorTreeNode_TypeDefinitionIndex = 81177;

	class LDResetEntityBehaviorTreeNode : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Boolean, ::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE_INVOKE_OFFSET))(this, entity);
		}

		::System::Boolean IsCouldOutCall(::FlowCanvas::FlowOutput* flow)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE_ISCOULDOUTCALL_OFFSET))(this, flow);
		}

		::System::Void _Invoke_b__0_0(::System::UInt32 u, ::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE__INVOKE_B__0_0_OFFSET))(this, u, b);
		}

		::System::Boolean __base_IsCouldOutCall(::FlowCanvas::FlowOutput* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETENTITYBEHAVIORTREENODE___BASE_ISCOULDOUTCALL_OFFSET))(this, P0);
		}
	};
}
