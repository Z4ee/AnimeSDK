#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBDD3AB0)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x50B130)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x50B190)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x4B6FE0)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x50B1F0)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDD3BE0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int DebugLogTaskInstanceData_TypeDefinitionIndex = 59050;

	struct alignas(1) DebugLogTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(DebugLogTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x44BD0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x64746FD4; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::DebugLogTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::DebugLogTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::DebugLogTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DebugLogTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::DebugLogTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DebugLogTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::DebugLogTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DebugLogTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::DebugLogTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DebugLogTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::DebugLogTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DebugLogTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_DebugLogTaskInstanceData__CopyAssign(::NPCCrowd::Ability::DebugLogTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DebugLogTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
