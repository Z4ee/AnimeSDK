#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD888600)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x5A2920)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x5A2980)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463A20)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x5A29E0)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD888730)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int SetStateMachineParamTaskInstanceData_TypeDefinitionIndex = 55610;

	struct alignas(1) SetStateMachineParamTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(SetStateMachineParamTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x51BE0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xA70078C8; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_SetStateMachineParamTaskInstanceData__CopyAssign(::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::SetStateMachineParamTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
