#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xF603370)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x652D10)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x652D70)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463A20)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x652DD0)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF6034A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int WaitingSlotMoveToSlotTaskInstanceData_TypeDefinitionIndex = 62307;

	struct alignas(1) WaitingSlotMoveToSlotTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotMoveToSlotTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3D8E0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x6113B88E; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_WaitingSlotMoveToSlotTaskInstanceData__CopyAssign(::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
