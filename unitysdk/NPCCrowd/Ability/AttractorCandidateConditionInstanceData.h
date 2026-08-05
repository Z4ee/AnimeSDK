#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE92D370)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x608530)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x608590)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463A20)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6085F0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE92D4A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorCandidateConditionInstanceData_TypeDefinitionIndex = 81152;

	struct alignas(1) AttractorCandidateConditionInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(AttractorCandidateConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x3AB60);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x156BCC06; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::AttractorCandidateConditionInstanceData Create()
		{
			return ((::NPCCrowd::Ability::AttractorCandidateConditionInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::AttractorCandidateConditionInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorCandidateConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorCandidateConditionInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorCandidateConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorCandidateConditionInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorCandidateConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::AttractorCandidateConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorCandidateConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::AttractorCandidateConditionInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorCandidateConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_AttractorCandidateConditionInstanceData__CopyAssign(::NPCCrowd::Ability::AttractorCandidateConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorCandidateConditionInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
