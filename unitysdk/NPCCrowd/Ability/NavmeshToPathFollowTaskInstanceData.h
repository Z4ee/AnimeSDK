#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xFF90FB0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x694F50)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x694FB0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x4105E0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x695010)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF910E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavmeshToPathFollowTaskInstanceData_TypeDefinitionIndex = 64288;

	struct alignas(1) NavmeshToPathFollowTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(NavmeshToPathFollowTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3CFF0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x19F17F52; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_NavmeshToPathFollowTaskInstanceData__CopyAssign(::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NavmeshToPathFollowTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
