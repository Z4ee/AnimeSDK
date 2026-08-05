#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xF765170)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x6664D0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x666530)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463A20)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x666590)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7652A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CheckIsFollowingConditionInstanceData_TypeDefinitionIndex = 46455;

	struct alignas(1) CheckIsFollowingConditionInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CheckIsFollowingConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B1A0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xC6CC2EE4; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData Create()
		{
			return ((::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_CheckIsFollowingConditionInstanceData__CopyAssign(::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CheckIsFollowingConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
