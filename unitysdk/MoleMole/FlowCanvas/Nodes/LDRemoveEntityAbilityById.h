#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEENTITYABILITYBYID_INVOKE_OFFSET UNITYSDK_OFFSET(0x13693AC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEENTITYABILITYBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x13693D90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveEntityAbilityById_TypeDefinitionIndex = 41152;

	class LDRemoveEntityAbilityById : public ::FlowCanvas::Nodes::CallableActionNode_2<::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::Int32>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEENTITYABILITYBYID__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity, ::System::Collections::Generic::List_1<::System::Int32>* abilityIDList)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEENTITYABILITYBYID_INVOKE_OFFSET))(this, entity, abilityIDList);
		}
	};
}
