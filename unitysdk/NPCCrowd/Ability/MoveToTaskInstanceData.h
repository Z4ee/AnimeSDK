#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x68DAB0)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xF4EAD30)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x304470)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x68DA50)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x68DAC0)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x68DAB0)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x383610)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x68DB20)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF4EAE60)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int MoveToTaskInstanceData_TypeDefinitionIndex = 47175;

	struct alignas(4) MoveToTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(MoveToTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x40C70);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x15D3589F; // 0x0
		::System::Boolean turnFlag; // 0x10
		::System::Single lastSpeedScale; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::MoveToTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::MoveToTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::MoveToTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::MoveToTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::MoveToTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::MoveToTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::MoveToTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::MoveToTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::MoveToTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::MoveToTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::MoveToTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::MoveToTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_MoveToTaskInstanceData__CopyAssign(::NPCCrowd::Ability::MoveToTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::MoveToTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
