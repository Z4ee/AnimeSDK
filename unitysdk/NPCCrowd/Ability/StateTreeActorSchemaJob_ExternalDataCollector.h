#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Object; }

#define NPCCROWD_ABILITY_STATETREEACTORSCHEMAJOB_EXTERNALDATACOLLECTOR_COLLECTEXTERNALDATA_OFFSET UNITYSDK_OFFSET(0x6DB3C0)
#define NPCCROWD_ABILITY_STATETREEACTORSCHEMAJOB_EXTERNALDATACOLLECTOR_GET_ISBOUND_OFFSET UNITYSDK_OFFSET(0x4BFE90)
#define NPCCROWD_ABILITY_STATETREEACTORSCHEMAJOB_EXTERNALDATACOLLECTOR_STATETREECORE_IEXTERNALDATACOLLECTOR_COLLECTEXTERNALDATA_OFFSET UNITYSDK_OFFSET(0x6DB400)
#define NPCCROWD_ABILITY_STATETREEACTORSCHEMAJOB_EXTERNALDATACOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int StateTreeActorSchemaJob_ExternalDataCollector_TypeDefinitionIndex = 51857;

	struct alignas(4) StateTreeActorSchemaJob_ExternalDataCollector
	{
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> _contextObject; // 0x10

		::System::Void _ctor(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> contextObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREEACTORSCHEMAJOB_EXTERNALDATACOLLECTOR__CTOR_OFFSET))(this, contextObject);
		}

		::System::Boolean get_IsBound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREEACTORSCHEMAJOB_EXTERNALDATACOLLECTOR_GET_ISBOUND_OFFSET))(this);
		}

		/*
		::System::Boolean CollectExternalData(::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTree& stateTree, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> externalDataDescs, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView> outDataViews)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTree&, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREEACTORSCHEMAJOB_EXTERNALDATACOLLECTOR_COLLECTEXTERNALDATA_OFFSET))(this, context, stateTree, externalDataDescs, outDataViews);
		}
		*/

		/*
		::System::Boolean StateTreeCore_IExternalDataCollector_CollectExternalData(::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTree& stateTree, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> externalDataDescs, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView> outDataViews)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTree&, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREEACTORSCHEMAJOB_EXTERNALDATACOLLECTOR_STATETREECORE_IEXTERNALDATACOLLECTOR_COLLECTEXTERNALDATA_OFFSET))(this, context, stateTree, externalDataDescs, outDataViews);
		}
		*/
	};
}
