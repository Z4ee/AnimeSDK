#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x591FD0)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xFF839F0)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x694DC0)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x694E20)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x591FD0)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x3E1930)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x694E80)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF83B20)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int DelayTaskInstanceData_TypeDefinitionIndex = 58819;

	struct alignas(4) DelayTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(DelayTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3CFB0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xEFB41EB2; // 0x0
		::System::Single timer; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::DelayTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::DelayTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::DelayTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DelayTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::DelayTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DelayTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::DelayTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DelayTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::DelayTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DelayTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::DelayTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DelayTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_DelayTaskInstanceData__CopyAssign(::NPCCrowd::Ability::DelayTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DelayTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
