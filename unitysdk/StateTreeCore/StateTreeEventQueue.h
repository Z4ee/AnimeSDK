#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeEvent.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/NativeStructList_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEEVENTQUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA5D250)
#define STATETREECORE_STATETREEEVENTQUEUE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x3B5460)
#define STATETREECORE_STATETREEEVENTQUEUE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x3B5310)
#define STATETREECORE_STATETREEEVENTQUEUE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E277370)
#define STATETREECORE_STATETREEEVENTQUEUE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA5D260)
#define STATETREECORE_STATETREEEVENTQUEUE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B56F0)
#define STATETREECORE_STATETREEEVENTQUEUE_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x3B5FF0)
#define STATETREECORE_STATETREEEVENTQUEUE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define STATETREECORE_STATETREEEVENTQUEUE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA5D300)
#define STATETREECORE_STATETREEEVENTQUEUE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA5D2E0)
#define STATETREECORE_STATETREEEVENTQUEUE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x3B5390)
#define STATETREECORE_STATETREEEVENTQUEUE_RESET_OFFSET UNITYSDK_OFFSET(0xA5D2F0)
#define STATETREECORE_STATETREEEVENTQUEUE_SENDEVENT_OFFSET UNITYSDK_OFFSET(0xA5D220)
#define STATETREECORE_STATETREEEVENTQUEUE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEVENTQUEUE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x3B5460)
#define STATETREECORE_STATETREEEVENTQUEUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E277750)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeEventQueue_TypeDefinitionIndex = 30925;

	struct alignas(8) StateTreeEventQueue
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeEventQueue_TypeDefinitionIndex)->GetStaticField(0x25580);
		}
		// static const ::System::Int32 MaxActiveEvents = 0x40; // 0x0
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeEvent> _events; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE__CCTOR_OFFSET))();
		}

		/*
		::System::Void SendEvent(::Foundation::Unreal::FGameplayTag& tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_SENDEVENT_OFFSET))(this, tag);
		}
		*/

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_CLEAR_OFFSET))(this);
		}

		/*
		::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeEvent> GetEvents()
		{
			return ((::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeEvent>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_GETEVENTS_OFFSET))(this);
		}
		*/

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeEventQueue Create(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeEventQueue(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_CREATE_OFFSET))(allocator);
		}

		::StateTreeCore::StateTreeEventQueue DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeEventQueue(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeEventQueue CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeEventQueue(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeEventQueue MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeEventQueue(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeEventQueue& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeEventQueue&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeEventQueue& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeEventQueue&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeEventQueue__CopyAssign(::StateTreeCore::StateTreeEventQueue& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeEventQueue&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEVENTQUEUE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
