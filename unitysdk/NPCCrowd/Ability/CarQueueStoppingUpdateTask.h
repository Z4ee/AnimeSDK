#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeCrowdTaskBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NPCCrowd::Ability { class VirtualProxy_CarQueueStoppingUpdateTask; }
namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x652070)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_CREATE_OFFSET UNITYSDK_OFFSET(0x157A8450)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x824B90)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x157A7310)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0x157A7A70)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x824560)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x824BB0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x824550)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_LINK_OFFSET UNITYSDK_OFFSET(0x157A71B0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x652070)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_RESET_OFFSET UNITYSDK_OFFSET(0x463850)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x8249C0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x824AC0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x824A40)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x824940)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x824840)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x8246C0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x824640)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x8247C0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x824740)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x8245C0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x8248C0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x8244D0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_TICK_OFFSET UNITYSDK_OFFSET(0x157A73B0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x824C10)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x157A88E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueStoppingUpdateTask_TypeDefinitionIndex = 46871;

	struct alignas(4) CarQueueStoppingUpdateTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CarQueueStoppingUpdateTask_TypeDefinitionIndex)->GetStaticField(0x47580);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xE47D60C; // 0x0
		::NPCCrowd::Ability::StateTreeCrowdTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathfollowDataHandle; // 0x36

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK__CCTOR_OFFSET))();
		}

		static ::System::Boolean Link(::NPCCrowd::Ability::CarQueueStoppingUpdateTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::CarQueueStoppingUpdateTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_LINK_OFFSET))(self, linker);
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::CarQueueStoppingUpdateTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::CarQueueStoppingUpdateTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::CarQueueStoppingUpdateTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::CarQueueStoppingUpdateTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		static ::NPCCrowd::Ability::NPCEntityNativeData GetNativeData(::System::UInt32 entityId, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap)
		{
			return ((::NPCCrowd::Ability::NPCEntityNativeData(*)(::System::UInt32, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GETNATIVEDATA_OFFSET))(entityId, entityMap);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_CarQueueStoppingUpdateTask* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_CarQueueStoppingUpdateTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::CarQueueStoppingUpdateTask Create()
		{
			return ((::NPCCrowd::Ability::CarQueueStoppingUpdateTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::CarQueueStoppingUpdateTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CarQueueStoppingUpdateTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::CarQueueStoppingUpdateTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CarQueueStoppingUpdateTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::CarQueueStoppingUpdateTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CarQueueStoppingUpdateTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::CarQueueStoppingUpdateTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CarQueueStoppingUpdateTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::CarQueueStoppingUpdateTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CarQueueStoppingUpdateTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_CarQueueStoppingUpdateTask__CopyAssign(::NPCCrowd::Ability::CarQueueStoppingUpdateTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CarQueueStoppingUpdateTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
