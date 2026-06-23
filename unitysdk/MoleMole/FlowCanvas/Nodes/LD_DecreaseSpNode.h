#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_6.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASESPNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x11612540)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASESPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11612750)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_DecreaseSpNode_TypeDefinitionIndex = 80608;

	class LD_DecreaseSpNode : public ::FlowCanvas::Nodes::CallableFunctionNode_6<::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASESPNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::PropertyModifyFunction PropertyModifyFunction, ::System::Single Amount, ::System::Single Percentage, ::System::Boolean IgnoreRatio)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASESPNODE_INVOKE_OFFSET))(this, entity, PropertyModifyFunction, Amount, Percentage, IgnoreRatio);
		}
	};
}
