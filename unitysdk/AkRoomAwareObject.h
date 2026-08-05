#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkRoom;
class AkRoom_PriorityList;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }

#define AKROOMAWAREOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F87D480)
#define AKROOMAWAREOBJECT_ENTEREDROOM_OFFSET UNITYSDK_OFFSET(0x1F87DAD0)
#define AKROOMAWAREOBJECT_EXITEDROOM_OFFSET UNITYSDK_OFFSET(0x1F87CF90)
#define AKROOMAWAREOBJECT_GETAKROOMAWAREOBJECTFROMCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1F87D380)
#define AKROOMAWAREOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F87DA10)
#define AKROOMAWAREOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F87D7A0)
#define AKROOMAWAREOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F87D6A0)
#define AKROOMAWAREOBJECT_SETGAMEOBJECTINHIGHESTPRIORITYACTIVEANDENABLEDROOM_OFFSET UNITYSDK_OFFSET(0x1F87DAA0)
#define AKROOMAWAREOBJECT_SETGAMEOBJECTINROOM_OFFSET UNITYSDK_OFFSET(0x1F87D8B0)
#define AKROOMAWAREOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F87DC50)
#define AKROOMAWAREOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F87DB50)

inline static constexpr unsigned int AkRoomAwareObject_TypeDefinitionIndex = 33804;

class AkRoomAwareObject : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::AkRoomAwareObject*>** StaticGet_ColliderToRoomAwareObjectMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::AkRoomAwareObject*>**)Il2CppClass::FromTypeDefinitionIndex(AkRoomAwareObject_TypeDefinitionIndex)->GetStaticField(0x28B80);
	}
	::UnityEngine::Collider* m_Collider; // 0x18
	::AkRoom_PriorityList* roomPriorityList; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT__CCTOR_OFFSET))();
	}

	static ::AkRoomAwareObject* GetAkRoomAwareObjectFromCollider(::UnityEngine::Collider* collider)
	{
		return ((::AkRoomAwareObject*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_GETAKROOMAWAREOBJECTFROMCOLLIDER_OFFSET))(collider);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_ONDESTROY_OFFSET))(this);
	}

	::System::Void SetGameObjectInHighestPriorityActiveAndEnabledRoom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_SETGAMEOBJECTINHIGHESTPRIORITYACTIVEANDENABLEDROOM_OFFSET))(this);
	}

	::System::Void SetGameObjectInRoom(::AkRoom* room)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_SETGAMEOBJECTINROOM_OFFSET))(this, room);
	}

	::System::Void EnteredRoom(::AkRoom* room)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_ENTEREDROOM_OFFSET))(this, room);
	}

	::System::Void ExitedRoom(::AkRoom* room)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_EXITEDROOM_OFFSET))(this, room);
	}
};
