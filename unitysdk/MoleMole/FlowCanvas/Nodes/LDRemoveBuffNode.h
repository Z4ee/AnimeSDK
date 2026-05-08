#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUFFNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x149974D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUFFNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14997670)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveBuffNode_TypeDefinitionIndex = 77726;

	class LDRemoveBuffNode : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUFFNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Int32 BuffId, ::System::Int32 StackCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUFFNODE_INVOKE_OFFSET))(this, entity, BuffId, StackCount);
		}
	};
}
