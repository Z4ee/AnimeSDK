#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkRoom;
class AkRoomAwareObject;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define AKROOMAWAREMANAGER_OBJECTENTEREDROOM_1_OFFSET UNITYSDK_OFFSET(0x18BD2E10)
#define AKROOMAWAREMANAGER_OBJECTENTEREDROOM_OFFSET UNITYSDK_OFFSET(0x18BD3610)
#define AKROOMAWAREMANAGER_OBJECTEXITEDROOM_1_OFFSET UNITYSDK_OFFSET(0x18BD4580)
#define AKROOMAWAREMANAGER_OBJECTEXITEDROOM_OFFSET UNITYSDK_OFFSET(0x18BD3720)
#define AKROOMAWAREMANAGER_REGISTERROOMAWAREOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0x18BD3310)
#define AKROOMAWAREMANAGER_REGISTERROOMAWAREOBJECT_OFFSET UNITYSDK_OFFSET(0x18BD4260)
#define AKROOMAWAREMANAGER_UNREGISTERROOMAWAREOBJECT_OFFSET UNITYSDK_OFFSET(0x18BD4320)
#define AKROOMAWAREMANAGER_UPDATEROOMAWAREOBJECTS_OFFSET UNITYSDK_OFFSET(0x18BD4620)
#define AKROOMAWAREMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BD48F0)

inline static constexpr unsigned int AkRoomAwareManager_TypeDefinitionIndex = 34585;

class AkRoomAwareManager : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::AkRoomAwareObject*>** StaticGet_m_RoomAwareObjects()
	{
		return (::System::Collections::Generic::HashSet_1<::AkRoomAwareObject*>**)Il2CppClass::FromTypeDefinitionIndex(AkRoomAwareManager_TypeDefinitionIndex)->GetStaticField(0x30DA0);
	}
	static ::System::Collections::Generic::HashSet_1<::AkRoomAwareObject*>** StaticGet_m_RoomAwareObjectToUpdate()
	{
		return (::System::Collections::Generic::HashSet_1<::AkRoomAwareObject*>**)Il2CppClass::FromTypeDefinitionIndex(AkRoomAwareManager_TypeDefinitionIndex)->GetStaticField(0x30DA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER__CCTOR_OFFSET))();
	}

	static ::System::Void RegisterRoomAwareObject(::AkRoomAwareObject* roomAwareObject)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_REGISTERROOMAWAREOBJECT_OFFSET))(roomAwareObject);
	}

	static ::System::Void UnregisterRoomAwareObject(::AkRoomAwareObject* roomAwareObject)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_UNREGISTERROOMAWAREOBJECT_OFFSET))(roomAwareObject);
	}

	static ::System::Void RegisterRoomAwareObjectForUpdate(::AkRoomAwareObject* roomAwareObject)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_REGISTERROOMAWAREOBJECTFORUPDATE_OFFSET))(roomAwareObject);
	}

	static ::System::Void ObjectEnteredRoom(::UnityEngine::Collider* collider, ::AkRoom* room)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_OBJECTENTEREDROOM_OFFSET))(collider, room);
	}

	static ::System::Void ObjectEnteredRoom_1(::AkRoomAwareObject* roomAwareObject, ::AkRoom* room)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_OBJECTENTEREDROOM_1_OFFSET))(roomAwareObject, room);
	}

	static ::System::Void ObjectExitedRoom(::UnityEngine::Collider* collider, ::AkRoom* room)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_OBJECTEXITEDROOM_OFFSET))(collider, room);
	}

	static ::System::Void ObjectExitedRoom_1(::AkRoomAwareObject* roomAwareObject, ::AkRoom* room)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_OBJECTEXITEDROOM_1_OFFSET))(roomAwareObject, room);
	}

	static ::System::Void UpdateRoomAwareObjects()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_UPDATEROOMAWAREOBJECTS_OFFSET))();
	}
};
