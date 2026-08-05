#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE933EE0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x60A1B0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x60A210)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463A20)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x60A270)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE934010)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PlayerAvatarDistanceConditionInstanceData_TypeDefinitionIndex = 70703;

	struct alignas(1) PlayerAvatarDistanceConditionInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(PlayerAvatarDistanceConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x3AC00);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x62557CF0; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData Create()
		{
			return ((::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_PlayerAvatarDistanceConditionInstanceData__CopyAssign(::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PlayerAvatarDistanceConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
