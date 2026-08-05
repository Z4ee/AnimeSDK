#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeGameplay { class ActorContext; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x90B890)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x90B870)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1E829B30)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA3DBC0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA3DB60)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA3DCA0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x90B890)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x90B870)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA3DC30)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA3DD00)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E829D70)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int MoveToPositionTaskInstanceData_TypeDefinitionIndex = 66426;

	struct alignas(4) MoveToPositionTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(MoveToPositionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x512B0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xDA20A785; // 0x0
		::UnrealTypes::TObjectHandle_1<::StateTreeGameplay::ActorContext*> Actor; // 0x10
		::UnityEngine::Vector3 TargetPosition; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::MoveToPositionTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::MoveToPositionTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::MoveToPositionTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::MoveToPositionTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::MoveToPositionTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::MoveToPositionTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::MoveToPositionTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::MoveToPositionTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::MoveToPositionTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::MoveToPositionTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::MoveToPositionTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::MoveToPositionTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_MoveToPositionTaskInstanceData__CopyAssign(::StateTreeGameplay::MoveToPositionTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::MoveToPositionTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_MOVETOPOSITIONTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
