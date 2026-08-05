#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xF850CB0)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x669A50)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x669AB0)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463A20)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x669B10)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF850DE0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorFindTaskInstanceData_TypeDefinitionIndex = 64223;

	struct alignas(1) AttractorFindTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(AttractorFindTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x40E00);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xA671C8EA; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::AttractorFindTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::AttractorFindTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::AttractorFindTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorFindTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorFindTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorFindTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorFindTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorFindTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::AttractorFindTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorFindTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::AttractorFindTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorFindTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_AttractorFindTaskInstanceData__CopyAssign(::NPCCrowd::Ability::AttractorFindTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorFindTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
