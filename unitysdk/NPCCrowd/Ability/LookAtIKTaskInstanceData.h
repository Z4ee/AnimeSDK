#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x113624F0)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x7329B0)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x732A10)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x4105E0)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x732A70)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x11362620)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int LookAtIKTaskInstanceData_TypeDefinitionIndex = 68983;

	struct alignas(1) LookAtIKTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(LookAtIKTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4DB00);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x1E89F9; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::LookAtIKTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::LookAtIKTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::LookAtIKTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::LookAtIKTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::LookAtIKTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::LookAtIKTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::LookAtIKTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::LookAtIKTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::LookAtIKTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::LookAtIKTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::LookAtIKTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::LookAtIKTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_LookAtIKTaskInstanceData__CopyAssign(::NPCCrowd::Ability::LookAtIKTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::LookAtIKTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
