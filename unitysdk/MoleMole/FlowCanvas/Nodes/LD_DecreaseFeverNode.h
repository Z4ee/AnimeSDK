#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASEFEVERNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x107D60D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASEFEVERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x107D62B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_DecreaseFeverNode_TypeDefinitionIndex = 69535;

	class LD_DecreaseFeverNode : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASEFEVERNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Single Amount, ::System::Single Percentage)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASEFEVERNODE_INVOKE_OFFSET))(this, entity, Amount, Percentage);
		}
	};
}
