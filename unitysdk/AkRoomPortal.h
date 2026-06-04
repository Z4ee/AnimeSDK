#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkRoomPortal_State.h"
#include "unitysdk/AkTriggerHandler.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkRoom;
class AkRoom_PriorityList;
class AkTransform;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class GameObject; }

#define AKROOMPORTAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B45E5C0)
#define AKROOMPORTAL_CLOSEPORTAL_OFFSET UNITYSDK_OFFSET(0x1B45E8F0)
#define AKROOMPORTAL_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B45EA10)
#define AKROOMPORTAL_FILLROOMLIST_OFFSET UNITYSDK_OFFSET(0x1B45ED80)
#define AKROOMPORTAL_FINDOVERLAPPINGROOMS_OFFSET UNITYSDK_OFFSET(0x1B45E400)
#define AKROOMPORTAL_GETID_OFFSET UNITYSDK_OFFSET(0x1B45E140)
#define AKROOMPORTAL_GETROOM_OFFSET UNITYSDK_OFFSET(0x1B45D8E0)
#define AKROOMPORTAL_GET_BACKROOMID_OFFSET UNITYSDK_OFFSET(0x1B45D680)
#define AKROOMPORTAL_GET_BACKROOM_OFFSET UNITYSDK_OFFSET(0x1B45C560)
#define AKROOMPORTAL_GET_FRONTROOMID_OFFSET UNITYSDK_OFFSET(0x1B45D3A0)
#define AKROOMPORTAL_GET_FRONTROOM_OFFSET UNITYSDK_OFFSET(0x1B45C500)
#define AKROOMPORTAL_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B45E110)
#define AKROOMPORTAL_GET_PORTALACTIVE_OFFSET UNITYSDK_OFFSET(0x1B45D340)
#define AKROOMPORTAL_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1B45E940)
#define AKROOMPORTAL_ISROOMACTIVE_OFFSET UNITYSDK_OFFSET(0x1B45D610)
#define AKROOMPORTAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B45EA90)
#define AKROOMPORTAL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B45EBE0)
#define AKROOMPORTAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B45EB80)
#define AKROOMPORTAL_OPEN_OFFSET UNITYSDK_OFFSET(0x1B45E990)
#define AKROOMPORTAL_OVERLAPS_OFFSET UNITYSDK_OFFSET(0x1B45C5C0)
#define AKROOMPORTAL_SETBACKROOM_OFFSET UNITYSDK_OFFSET(0x1B45F130)
#define AKROOMPORTAL_SETFRONTROOM_OFFSET UNITYSDK_OFFSET(0x1B45F090)
#define AKROOMPORTAL_SETROOMPORTAL_OFFSET UNITYSDK_OFFSET(0x1B45D950)
#define AKROOMPORTAL_SETROOM_OFFSET UNITYSDK_OFFSET(0x1B45EFF0)
#define AKROOMPORTAL_SET_PORTALACTIVE_OFFSET UNITYSDK_OFFSET(0x1B45D350)
#define AKROOMPORTAL_START_OFFSET UNITYSDK_OFFSET(0x1B45E7D0)
#define AKROOMPORTAL_UPDATEOVERLAPPINGROOMS_OFFSET UNITYSDK_OFFSET(0x1B45F240)
#define AKROOMPORTAL_UPDATEROOMPORTAL_OFFSET UNITYSDK_OFFSET(0x1B45C8B0)
#define AKROOMPORTAL_UPDATEROOMS_OFFSET UNITYSDK_OFFSET(0x1B45E1B0)
#define AKROOMPORTAL_UPDATESOUNDENGINEROOMIDS_OFFSET UNITYSDK_OFFSET(0x1B45F1D0)
#define AKROOMPORTAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B45F290)
#define AKROOMPORTAL___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B45F470)
#define AKROOMPORTAL___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B45F490)
#define AKROOMPORTAL___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B45F500)
#define AKROOMPORTAL___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0x1B45F480)

inline static constexpr unsigned int AkRoomPortal_TypeDefinitionIndex = 41329;

class AkRoomPortal : public ::AkTriggerHandler
{
public:
	// static const ::System::Int32 MAX_ROOMS_PER_PORTAL = 0x2; // 0x0
	::AkRoomPortal_State initialState; // 0x30
	::System::Boolean active; // 0x34
	::System::Collections::Generic::List_1<::System::Int32>* closePortalTriggerList; // 0x38
	::Il2CppArray<::AkRoom*>* rooms; // 0x40
	::Il2CppArray<::AkRoom_PriorityList*>* roomList; // 0x48
	::AkTransform* portalTransform; // 0x50
	::UnityEngine::BoxCollider* portalCollider; // 0x58
	::System::Boolean portalSet; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL__CTOR_OFFSET))(this);
	}

	::System::Boolean get_portalActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_GET_PORTALACTIVE_OFFSET))(this);
	}

	::System::Void set_portalActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKROOMPORTAL_SET_PORTALACTIVE_OFFSET))(this, a1);
	}

	::System::UInt64 get_frontRoomID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_GET_FRONTROOMID_OFFSET))(this);
	}

	::System::UInt64 get_backRoomID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_GET_BACKROOMID_OFFSET))(this);
	}

	::AkRoom* GetRoom(::System::Int32 a1)
	{
		return ((::AkRoom*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKROOMPORTAL_GETROOM_OFFSET))(this, a1);
	}

	::AkRoom* get_frontRoom()
	{
		return ((::AkRoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_GET_FRONTROOM_OFFSET))(this);
	}

	::AkRoom* get_backRoom()
	{
		return ((::AkRoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_GET_BACKROOM_OFFSET))(this);
	}

	::System::Void SetRoomPortal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_SETROOMPORTAL_OFFSET))(this);
	}

	::System::Void UpdateRoomPortal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_UPDATEROOMPORTAL_OFFSET))(this);
	}

	::System::Boolean Overlaps(::AkRoom* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_OVERLAPS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_GET_ISVALID_OFFSET))(this);
	}

	::System::UInt64 GetID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_GETID_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_AWAKE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_START_OFFSET))(this);
	}

	::System::Void HandleEvent(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_HANDLEEVENT_OFFSET))(this, a1);
	}

	::System::Void ClosePortal(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_CLOSEPORTAL_OFFSET))(this, a1);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_ONDISABLE_OFFSET))(this);
	}

	::System::Boolean IsRoomActive(::AkRoom* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_ISROOMACTIVE_OFFSET))(this, a1);
	}

	::System::Void Open()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_OPEN_OFFSET))(this);
	}

	::System::Void Close()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_CLOSE_OFFSET))(this);
	}

	::System::Void FindOverlappingRooms(::Il2CppArray<::AkRoom_PriorityList*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::AkRoom_PriorityList*>*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_FINDOVERLAPPINGROOMS_OFFSET))(this, a1);
	}

	::System::Void FillRoomList(::UnityEngine::Vector3 a1, ::AkRoom_PriorityList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::AkRoom_PriorityList*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_FILLROOMLIST_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateRooms()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_UPDATEROOMS_OFFSET))(this);
	}

	::System::Void SetRoom(::System::Int32 a1, ::AkRoom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_SETROOM_OFFSET))(this, a1, a2);
	}

	::System::Void SetFrontRoom(::AkRoom* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_SETFRONTROOM_OFFSET))(this, a1);
	}

	::System::Void SetBackRoom(::AkRoom* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_SETBACKROOM_OFFSET))(this, a1);
	}

	::System::Void UpdateSoundEngineRoomIDs()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_UPDATESOUNDENGINEROOMIDS_OFFSET))(this);
	}

	::System::Void UpdateOverlappingRooms()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_UPDATEOVERLAPPINGROOMS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL___IFIXBASEPROXY_AWAKE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL___IFIXBASEPROXY_START_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}
};
