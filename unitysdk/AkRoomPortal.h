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

#define AKROOMPORTAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FB4A320)
#define AKROOMPORTAL_CLOSEPORTAL_OFFSET UNITYSDK_OFFSET(0x1FB4A520)
#define AKROOMPORTAL_CLOSE_OFFSET UNITYSDK_OFFSET(0x1FB4A550)
#define AKROOMPORTAL_FILLROOMLIST_OFFSET UNITYSDK_OFFSET(0x1FB4A740)
#define AKROOMPORTAL_FINDOVERLAPPINGROOMS_OFFSET UNITYSDK_OFFSET(0x1FB4A070)
#define AKROOMPORTAL_GETID_OFFSET UNITYSDK_OFFSET(0x1FB49D60)
#define AKROOMPORTAL_GETROOM_OFFSET UNITYSDK_OFFSET(0x1FB495C0)
#define AKROOMPORTAL_GET_BACKROOMID_OFFSET UNITYSDK_OFFSET(0x1FB49380)
#define AKROOMPORTAL_GET_BACKROOM_OFFSET UNITYSDK_OFFSET(0x1FB49580)
#define AKROOMPORTAL_GET_FRONTROOMID_OFFSET UNITYSDK_OFFSET(0x1FB49010)
#define AKROOMPORTAL_GET_FRONTROOM_OFFSET UNITYSDK_OFFSET(0x1FB49210)
#define AKROOMPORTAL_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1FB49D30)
#define AKROOMPORTAL_GET_PORTALACTIVE_OFFSET UNITYSDK_OFFSET(0x1FB48FF0)
#define AKROOMPORTAL_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1FB4A530)
#define AKROOMPORTAL_ISROOMACTIVE_OFFSET UNITYSDK_OFFSET(0x1FB49250)
#define AKROOMPORTAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FB4A560)
#define AKROOMPORTAL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1FB4A640)
#define AKROOMPORTAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FB4A5E0)
#define AKROOMPORTAL_OPEN_OFFSET UNITYSDK_OFFSET(0x1FB4A540)
#define AKROOMPORTAL_OVERLAPS_OFFSET UNITYSDK_OFFSET(0x1FB49FE0)
#define AKROOMPORTAL_SETBACKROOM_OFFSET UNITYSDK_OFFSET(0x1FB4ABB0)
#define AKROOMPORTAL_SETFRONTROOM_OFFSET UNITYSDK_OFFSET(0x1FB4AB40)
#define AKROOMPORTAL_SETROOMPORTAL_OFFSET UNITYSDK_OFFSET(0x1FB49600)
#define AKROOMPORTAL_SETROOM_OFFSET UNITYSDK_OFFSET(0x1FB4AAD0)
#define AKROOMPORTAL_SET_PORTALACTIVE_OFFSET UNITYSDK_OFFSET(0x1FB49000)
#define AKROOMPORTAL_START_OFFSET UNITYSDK_OFFSET(0x1FB4A4B0)
#define AKROOMPORTAL_UPDATEOVERLAPPINGROOMS_OFFSET UNITYSDK_OFFSET(0x1FB4AC40)
#define AKROOMPORTAL_UPDATEROOMPORTAL_OFFSET UNITYSDK_OFFSET(0x1FB49D70)
#define AKROOMPORTAL_UPDATEROOMS_OFFSET UNITYSDK_OFFSET(0x1FB49D90)
#define AKROOMPORTAL_UPDATESOUNDENGINEROOMIDS_OFFSET UNITYSDK_OFFSET(0x1FB4AC20)
#define AKROOMPORTAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4AC50)

inline static constexpr unsigned int AkRoomPortal_TypeDefinitionIndex = 33805;

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

	::System::Void set_portalActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKROOMPORTAL_SET_PORTALACTIVE_OFFSET))(this, value);
	}

	::System::UInt64 get_frontRoomID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_GET_FRONTROOMID_OFFSET))(this);
	}

	::System::UInt64 get_backRoomID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_GET_BACKROOMID_OFFSET))(this);
	}

	::AkRoom* GetRoom(::System::Int32 index)
	{
		return ((::AkRoom*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKROOMPORTAL_GETROOM_OFFSET))(this, index);
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

	::System::Boolean Overlaps(::AkRoom* room)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_OVERLAPS_OFFSET))(this, room);
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

	::System::Void HandleEvent(::UnityEngine::GameObject* in_gameObject)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_HANDLEEVENT_OFFSET))(this, in_gameObject);
	}

	::System::Void ClosePortal(::UnityEngine::GameObject* in_gameObject)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_CLOSEPORTAL_OFFSET))(this, in_gameObject);
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

	::System::Boolean IsRoomActive(::AkRoom* in_room)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_ISROOMACTIVE_OFFSET))(this, in_room);
	}

	::System::Void Open()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_OPEN_OFFSET))(this);
	}

	::System::Void Close()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_CLOSE_OFFSET))(this);
	}

	::System::Void FindOverlappingRooms(::Il2CppArray<::AkRoom_PriorityList*>* roomList)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::AkRoom_PriorityList*>*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_FINDOVERLAPPINGROOMS_OFFSET))(this, roomList);
	}

	::System::Void FillRoomList(::UnityEngine::Vector3 position, ::AkRoom_PriorityList* list)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::AkRoom_PriorityList*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_FILLROOMLIST_OFFSET))(this, position, list);
	}

	::System::Void UpdateRooms()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_UPDATEROOMS_OFFSET))(this);
	}

	::System::Void SetRoom(::System::Int32 in_roomIndex, ::AkRoom* in_room)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_SETROOM_OFFSET))(this, in_roomIndex, in_room);
	}

	::System::Void SetFrontRoom(::AkRoom* room)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_SETFRONTROOM_OFFSET))(this, room);
	}

	::System::Void SetBackRoom(::AkRoom* room)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMPORTAL_SETBACKROOM_OFFSET))(this, room);
	}

	::System::Void UpdateSoundEngineRoomIDs()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_UPDATESOUNDENGINEROOMIDS_OFFSET))(this);
	}

	::System::Void UpdateOverlappingRooms()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTAL_UPDATEOVERLAPPINGROOMS_OFFSET))(this);
	}
};
