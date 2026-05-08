#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDADDENTITYABILITYNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x182075D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDENTITYABILITYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18207820)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAddEntityAbilityNode_TypeDefinitionIndex = 67754;

	class LDAddEntityAbilityNode : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDENTITYABILITYNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Collections::Generic::List_1<::System::String*>* abilityNameList)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDENTITYABILITYNODE_INVOKE_OFFSET))(this, entity, abilityNameList);
		}
	};
}
