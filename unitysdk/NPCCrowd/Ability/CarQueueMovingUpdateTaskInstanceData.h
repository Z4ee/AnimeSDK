#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x125FF7F0)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x7B1F80)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x7B1FE0)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463A20)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x7B2040)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x125FF920)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueMovingUpdateTaskInstanceData_TypeDefinitionIndex = 61783;

	struct alignas(1) CarQueueMovingUpdateTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CarQueueMovingUpdateTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x43140);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x2A03D6F5; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_CarQueueMovingUpdateTaskInstanceData__CopyAssign(::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CarQueueMovingUpdateTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
