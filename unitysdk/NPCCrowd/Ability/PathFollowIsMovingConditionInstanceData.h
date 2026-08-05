#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE933CC0)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x60A0A0)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x60A100)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463A20)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x60A160)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE933DF0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowIsMovingConditionInstanceData_TypeDefinitionIndex = 75182;

	struct alignas(1) PathFollowIsMovingConditionInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(PathFollowIsMovingConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x3ABE0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x264DDADD; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData Create()
		{
			return ((::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_PathFollowIsMovingConditionInstanceData__CopyAssign(::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PathFollowIsMovingConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
