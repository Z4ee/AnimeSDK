#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_5.h"
#include "unitysdk/MoleMole/Config/TargetValueModifyFunc.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETVALUENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1710E5C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETVALUENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1710E690)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetTargetValueNode_TypeDefinitionIndex = 52780;

	class LDSetTargetValueNode : public ::FlowCanvas::Nodes::CallableFunctionNode_5<::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::MoleMole::Config::TargetValueModifyFunc>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETVALUENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* source, ::MoleMole::Battle::Entity* target, ::System::Single Value, ::MoleMole::Config::TargetValueModifyFunc ModifyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::MoleMole::Config::TargetValueModifyFunc))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETVALUENODE_INVOKE_OFFSET))(this, source, target, Value, ModifyType);
		}
	};
}
