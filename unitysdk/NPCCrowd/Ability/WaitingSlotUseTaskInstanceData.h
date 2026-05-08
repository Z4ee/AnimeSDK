#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD23F050)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x58B820)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x58B880)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x4B6FE0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x58B8E0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD23F180)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int WaitingSlotUseTaskInstanceData_TypeDefinitionIndex = 51182;

	struct alignas(1) WaitingSlotUseTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotUseTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3D190);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x83B8EA69; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_WaitingSlotUseTaskInstanceData__CopyAssign(::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::WaitingSlotUseTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
