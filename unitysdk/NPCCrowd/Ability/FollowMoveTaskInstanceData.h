#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x463B40)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x325570)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x114DF4C0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x7321B0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x732210)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x463B40)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x325570)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463B50)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x732270)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x114DF5F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FollowMoveTaskInstanceData_TypeDefinitionIndex = 86981;

	struct alignas(4) FollowMoveTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FollowMoveTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x49430);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xE9D8AE8F; // 0x0
		::System::Single lastDistance; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::FollowMoveTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::FollowMoveTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::FollowMoveTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FollowMoveTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FollowMoveTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FollowMoveTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FollowMoveTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FollowMoveTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::FollowMoveTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FollowMoveTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::FollowMoveTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FollowMoveTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_FollowMoveTaskInstanceData__CopyAssign(::NPCCrowd::Ability::FollowMoveTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FollowMoveTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
