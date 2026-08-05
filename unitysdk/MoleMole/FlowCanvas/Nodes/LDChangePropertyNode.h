#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEPROPERTYNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1298B5C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEPROPERTYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1298B730)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDChangePropertyNode_TypeDefinitionIndex = 89803;

	class LDChangePropertyNode : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEPROPERTYNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* propKey, ::System::Single val)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEPROPERTYNODE_INVOKE_OFFSET))(this, entity, propKey, val);
		}
	};
}
