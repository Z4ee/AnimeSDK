#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeGameplay { class ActorContext; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA1FFA0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA1FF80)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1E508720)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA1FF10)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA1FEB0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA20020)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA1FFA0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA1FF80)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA1FFB0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA20080)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E508930)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int SendGraphEventTaskInstanceData_TypeDefinitionIndex = 40862;

	struct alignas(4) SendGraphEventTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(SendGraphEventTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B4A0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x77637BC0; // 0x0
		::UnrealTypes::TObjectHandle_1<::StateTreeGameplay::ActorContext*> Actor; // 0x10
		::Foundation::Unreal::FGameplayTag EventTag; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::SendGraphEventTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::SendGraphEventTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::SendGraphEventTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::SendGraphEventTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::SendGraphEventTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::SendGraphEventTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::SendGraphEventTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::SendGraphEventTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::SendGraphEventTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::SendGraphEventTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::SendGraphEventTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::SendGraphEventTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_SendGraphEventTaskInstanceData__CopyAssign(::StateTreeGameplay::SendGraphEventTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::SendGraphEventTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_SENDGRAPHEVENTTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
