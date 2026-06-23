#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x5EC570)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE00DED0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x5EC510)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x5EC580)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x5EC570)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x3E1930)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x5EC5E0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE00E000)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorUseTaskInstanceData_TypeDefinitionIndex = 42566;

	struct alignas(4) AttractorUseTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(AttractorUseTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4A230);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x567DB98C; // 0x0
		::System::Int32 attractorHandler; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::AttractorUseTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::AttractorUseTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::AttractorUseTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorUseTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorUseTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorUseTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorUseTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorUseTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::AttractorUseTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorUseTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::AttractorUseTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorUseTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_AttractorUseTaskInstanceData__CopyAssign(::NPCCrowd::Ability::AttractorUseTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorUseTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
