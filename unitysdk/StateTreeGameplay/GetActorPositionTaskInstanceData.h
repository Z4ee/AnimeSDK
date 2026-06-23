#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeGameplay { class ActorContext; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x879F00)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x879EE0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A0E5560)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x879E70)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x879E10)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x879F90)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x879F00)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x879EE0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x879F20)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x879FF0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E57A0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int GetActorPositionTaskInstanceData_TypeDefinitionIndex = 64949;

	struct alignas(4) GetActorPositionTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(GetActorPositionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B530);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xB258B0B8; // 0x0
		::UnrealTypes::TObjectHandle_1<::StateTreeGameplay::ActorContext*> Actor; // 0x10
		::UnityEngine::Vector3 Position; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::GetActorPositionTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::GetActorPositionTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::GetActorPositionTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::GetActorPositionTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::GetActorPositionTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::GetActorPositionTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::GetActorPositionTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::GetActorPositionTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::GetActorPositionTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::GetActorPositionTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::GetActorPositionTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::GetActorPositionTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_GetActorPositionTaskInstanceData__CopyAssign(::StateTreeGameplay::GetActorPositionTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::GetActorPositionTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_GETACTORPOSITIONTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
