#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD887CF0)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x5A2810)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x5A2870)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463A20)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x5A28D0)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD887E20)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowIgnoreBlockConditionInstanceData_TypeDefinitionIndex = 54978;

	struct alignas(1) PathFollowIgnoreBlockConditionInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(PathFollowIgnoreBlockConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x51BD0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xC1583E78; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData Create()
		{
			return ((::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_PathFollowIgnoreBlockConditionInstanceData__CopyAssign(::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PathFollowIgnoreBlockConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
