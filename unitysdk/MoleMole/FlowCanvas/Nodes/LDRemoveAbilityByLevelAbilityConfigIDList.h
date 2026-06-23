#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEABILITYBYLEVELABILITYCONFIGIDLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x130097F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEABILITYBYLEVELABILITYCONFIGIDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x13009C70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveAbilityByLevelAbilityConfigIDList_TypeDefinitionIndex = 75091;

	class LDRemoveAbilityByLevelAbilityConfigIDList : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Collections::Generic::List_1<::System::Int32>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEABILITYBYLEVELABILITYCONFIGIDLIST__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* abilityIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEABILITYBYLEVELABILITYCONFIGIDLIST_INVOKE_OFFSET))(this, abilityIdList);
		}
	};
}
