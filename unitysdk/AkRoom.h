#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerHandler.h"

class AkRoomAwareObject;
namespace AK::Wwise { class Event; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define AKROOM_EXIT_OFFSET UNITYSDK_OFFSET(0x1DAAB320)
#define AKROOM_GETAKROOMID_OFFSET UNITYSDK_OFFSET(0x1DAAAF10)
#define AKROOM_GETID_OFFSET UNITYSDK_OFFSET(0x1DAAB040)
#define AKROOM_GET_ROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x1DAAB120)
#define AKROOM_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1DAAD7F0)
#define AKROOM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DAACB70)
#define AKROOM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DAAB3E0)
#define AKROOM_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1DAAD3A0)
#define AKROOM_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1DAAD4B0)
#define AKROOM_POSTROOMTONE_OFFSET UNITYSDK_OFFSET(0x1DAAD5C0)
#define AKROOM_SET_ROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x1DAAB130)
#define AKROOM_TRYENTER_OFFSET UNITYSDK_OFFSET(0x1DAAB140)
#define AKROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAD840)

inline static constexpr unsigned int AkRoom_TypeDefinitionIndex = 43751;

class AkRoom : public ::AkTriggerHandler
{
public:
	static ::System::Int32* StaticGet__RoomCount_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AkRoom_TypeDefinitionIndex)->GetStaticField(0x7760);
	}
	static ::System::UInt64* StaticGet_INVALID_ROOM_ID()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(AkRoom_TypeDefinitionIndex)->GetStaticField(0x7768);
	}
	::System::Int32 priority; // 0x30
	::System::UInt32 reverbAuxBusID; // 0x34
	::System::Single reverbLevel; // 0x38
	::System::Single wallOcclusion; // 0x3C
	::AK::Wwise::Event* roomToneEvent; // 0x40
	::System::Single roomToneAuxSend; // 0x48
	::System::Collections::Generic::List_1<::AkRoomAwareObject*>* roomAwareObjectsEntered; // 0x50
	::System::Collections::Generic::List_1<::AkRoomAwareObject*>* roomAwareObjectsDetectedWhileDisabled; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM__CTOR_OFFSET))(this);
	}

	static ::System::UInt64 GetAkRoomID(::AkRoom* a1)
	{
		return ((::System::UInt64(*)(::AkRoom*))((::PBYTE)hIl2Cpp + AKROOM_GETAKROOMID_OFFSET))(a1);
	}

	static ::System::Int32 get_RoomCount()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKROOM_GET_ROOMCOUNT_OFFSET))();
	}

	static ::System::Void set_RoomCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKROOM_SET_ROOMCOUNT_OFFSET))(a1);
	}

	::System::Boolean TryEnter(::AkRoomAwareObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + AKROOM_TRYENTER_OFFSET))(this, a1);
	}

	::System::Void Exit(::AkRoomAwareObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + AKROOM_EXIT_OFFSET))(this, a1);
	}

	::System::UInt64 GetID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_GETID_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKROOM_ONTRIGGERENTER_OFFSET))(this, a1);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKROOM_ONTRIGGEREXIT_OFFSET))(this, a1);
	}

	::System::Void PostRoomTone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_POSTROOMTONE_OFFSET))(this);
	}

	::System::Void HandleEvent(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKROOM_HANDLEEVENT_OFFSET))(this, a1);
	}
};
