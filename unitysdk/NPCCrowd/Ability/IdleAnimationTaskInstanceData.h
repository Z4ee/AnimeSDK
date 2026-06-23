#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x5EC570)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xFFAA1C0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x696190)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x6961F0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x5EC570)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x3E1930)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x696250)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFAA2F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int IdleAnimationTaskInstanceData_TypeDefinitionIndex = 73014;

	struct alignas(4) IdleAnimationTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(IdleAnimationTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x41A00);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xB6BA800D; // 0x0
		::System::Int32 montageHandler; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::IdleAnimationTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::IdleAnimationTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::IdleAnimationTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::IdleAnimationTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::IdleAnimationTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::IdleAnimationTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::IdleAnimationTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::IdleAnimationTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::IdleAnimationTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::IdleAnimationTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::IdleAnimationTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::IdleAnimationTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_IdleAnimationTaskInstanceData__CopyAssign(::NPCCrowd::Ability::IdleAnimationTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::IdleAnimationTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
