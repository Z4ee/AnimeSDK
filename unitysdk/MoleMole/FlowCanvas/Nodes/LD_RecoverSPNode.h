#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_6.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECOVERSPNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1299FBA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECOVERSPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1299FDB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_RecoverSPNode_TypeDefinitionIndex = 51225;

	class LD_RecoverSPNode : public ::FlowCanvas::Nodes::CallableFunctionNode_6<::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECOVERSPNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::PropertyModifyFunction PropertyModifyFunction, ::System::Single Amount, ::System::Single Percentage, ::System::Boolean IgnoreRatio)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECOVERSPNODE_INVOKE_OFFSET))(this, entity, PropertyModifyFunction, Amount, Percentage, IgnoreRatio);
		}
	};
}
