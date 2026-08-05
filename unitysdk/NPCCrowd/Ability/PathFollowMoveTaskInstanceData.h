#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x952C920)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x464670)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x4646D0)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463A20)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x464730)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x952CA50)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowMoveTaskInstanceData_TypeDefinitionIndex = 58158;

	struct alignas(1) PathFollowMoveTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(PathFollowMoveTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x51180);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x5CCF964; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::PathFollowMoveTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::PathFollowMoveTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::PathFollowMoveTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PathFollowMoveTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::PathFollowMoveTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PathFollowMoveTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::PathFollowMoveTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PathFollowMoveTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::PathFollowMoveTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PathFollowMoveTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::PathFollowMoveTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PathFollowMoveTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_PathFollowMoveTaskInstanceData__CopyAssign(::NPCCrowd::Ability::PathFollowMoveTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PathFollowMoveTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
