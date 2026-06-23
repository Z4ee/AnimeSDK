#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKENTITYHAVEAPPLYBUFFNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x161D2330)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKENTITYHAVEAPPLYBUFFNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x161D24B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCheckEntityHaveApplyBuffNode_TypeDefinitionIndex = 83284;

	class LDCheckEntityHaveApplyBuffNode : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKENTITYHAVEAPPLYBUFFNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* Entity, ::System::Int32 BuffId)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKENTITYHAVEAPPLYBUFFNODE_INVOKE_OFFSET))(this, Entity, BuffId);
		}
	};
}
