#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_7.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEATTRIBUTENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A80F50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEATTRIBUTENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A811D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDChangeAttributeNode_TypeDefinitionIndex = 91277;

	class LDChangeAttributeNode : public ::FlowCanvas::Nodes::CallableFunctionNode_7<::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEATTRIBUTENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::BaseProperty PropertyType, ::System::String* CustomPropertyType, ::MoleMole::Config::PropertyModifyFunction PropertyModifyFunction, ::System::Single Amount, ::System::Single Percentage)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEATTRIBUTENODE_INVOKE_OFFSET))(this, entity, PropertyType, CustomPropertyType, PropertyModifyFunction, Amount, Percentage);
		}
	};
}
