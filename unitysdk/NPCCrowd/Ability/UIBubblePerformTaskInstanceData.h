#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x591FD0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD5C4310)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x5B2180)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x5B21E0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x591FD0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x3E1930)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x5B2240)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5C4440)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int UIBubblePerformTaskInstanceData_TypeDefinitionIndex = 43076;

	struct alignas(4) UIBubblePerformTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(UIBubblePerformTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4CF50);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xB6D16BA0; // 0x0
		::System::Single timer; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::UIBubblePerformTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::UIBubblePerformTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::UIBubblePerformTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::UIBubblePerformTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::UIBubblePerformTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::UIBubblePerformTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::UIBubblePerformTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::UIBubblePerformTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::UIBubblePerformTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::UIBubblePerformTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::UIBubblePerformTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::UIBubblePerformTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_UIBubblePerformTaskInstanceData__CopyAssign(::NPCCrowd::Ability::UIBubblePerformTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::UIBubblePerformTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
