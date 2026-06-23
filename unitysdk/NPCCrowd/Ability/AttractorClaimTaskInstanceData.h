#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD40D1B0)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x591E30)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x591E90)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x4105E0)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x591EF0)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD40D2E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorClaimTaskInstanceData_TypeDefinitionIndex = 41316;

	struct alignas(1) AttractorClaimTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(AttractorClaimTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x45510);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x2E1F892F; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::AttractorClaimTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::AttractorClaimTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::AttractorClaimTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorClaimTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorClaimTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorClaimTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorClaimTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorClaimTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::AttractorClaimTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorClaimTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::AttractorClaimTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorClaimTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_AttractorClaimTaskInstanceData__CopyAssign(::NPCCrowd::Ability::AttractorClaimTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorClaimTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
