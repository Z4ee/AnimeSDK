#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_7.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASEHPNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x192475A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASEHPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19247860)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_DecreaseHpNode_TypeDefinitionIndex = 67535;

	class LD_DecreaseHpNode : public ::FlowCanvas::Nodes::CallableFunctionNode_7<::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASEHPNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::PropertyModifyFunction PropertyModifyFunction, ::System::Single Amount, ::System::Single Percentage, ::System::Boolean IgnoreInvincible, ::System::Boolean IgnoreLifeLock)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASEHPNODE_INVOKE_OFFSET))(this, entity, PropertyModifyFunction, Amount, Percentage, IgnoreInvincible, IgnoreLifeLock);
		}
	};
}
