#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xFF837D0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x694CB0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x694D10)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x4105E0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x694D70)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF83900)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueStoppingUpdateTaskInstanceData_TypeDefinitionIndex = 80591;

	struct alignas(1) CarQueueStoppingUpdateTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CarQueueStoppingUpdateTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3CF90);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x1AE9287F; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_CarQueueStoppingUpdateTaskInstanceData__CopyAssign(::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CarQueueStoppingUpdateTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
