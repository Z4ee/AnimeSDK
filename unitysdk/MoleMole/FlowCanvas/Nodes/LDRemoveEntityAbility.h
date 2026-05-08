#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEENTITYABILITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x170C90B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEENTITYABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x170C9300)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveEntityAbility_TypeDefinitionIndex = 53974;

	class LDRemoveEntityAbility : public ::FlowCanvas::Nodes::CallableActionNode_2<::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEENTITYABILITY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity, ::System::Collections::Generic::List_1<::System::String*>* abilityNameList)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEENTITYABILITY_INVOKE_OFFSET))(this, entity, abilityNameList);
		}
	};
}
