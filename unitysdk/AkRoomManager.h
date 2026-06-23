#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkRoom;
class AkRoomPortal;
class AkSurfaceReflector;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKROOMMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1E63E1A0)
#define AKROOMMANAGER_REGISTERPORTALUPDATE_OFFSET UNITYSDK_OFFSET(0x1E63E7A0)
#define AKROOMMANAGER_REGISTERPORTAL_OFFSET UNITYSDK_OFFSET(0x1E63E3C0)
#define AKROOMMANAGER_REGISTERREFLECTOR_OFFSET UNITYSDK_OFFSET(0x1E63E5B0)
#define AKROOMMANAGER_REGISTERROOMUPDATE_OFFSET UNITYSDK_OFFSET(0x1E63E8A0)
#define AKROOMMANAGER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x1E63E3A0)
#define AKROOMMANAGER_UNREGISTERPORTAL_OFFSET UNITYSDK_OFFSET(0x1E63E500)
#define AKROOMMANAGER_UNREGISTERREFLECTOR_OFFSET UNITYSDK_OFFSET(0x1E63E6F0)
#define AKROOMMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E63EBC0)
#define AKROOMMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E63E220)

inline static constexpr unsigned int AkRoomManager_TypeDefinitionIndex = 33074;

class AkRoomManager : public ::System::Object
{
public:
	static ::AkRoomManager** StaticGet_m_Instance()
	{
		return (::AkRoomManager**)Il2CppClass::FromTypeDefinitionIndex(AkRoomManager_TypeDefinitionIndex)->GetStaticField(0x273B0);
	}
	::System::Collections::Generic::List_1<::AkRoomPortal*>* m_PortalsToUpdate; // 0x10
	::System::Collections::Generic::List_1<::AkRoomPortal*>* m_Portals; // 0x18
	::System::Collections::Generic::List_1<::AkSurfaceReflector*>* m_Reflectors; // 0x20
	::System::Collections::Generic::List_1<::AkSurfaceReflector*>* m_ReflectorsToUpdate; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void Init()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOMMANAGER_INIT_OFFSET))();
	}

	static ::System::Void Terminate()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOMMANAGER_TERMINATE_OFFSET))();
	}

	static ::System::Void RegisterPortal(::AkRoomPortal* portal)
	{
		return ((::System::Void(*)(::AkRoomPortal*))((::PBYTE)hIl2Cpp + AKROOMMANAGER_REGISTERPORTAL_OFFSET))(portal);
	}

	static ::System::Void UnregisterPortal(::AkRoomPortal* portal)
	{
		return ((::System::Void(*)(::AkRoomPortal*))((::PBYTE)hIl2Cpp + AKROOMMANAGER_UNREGISTERPORTAL_OFFSET))(portal);
	}

	static ::System::Void RegisterReflector(::AkSurfaceReflector* reflector)
	{
		return ((::System::Void(*)(::AkSurfaceReflector*))((::PBYTE)hIl2Cpp + AKROOMMANAGER_REGISTERREFLECTOR_OFFSET))(reflector);
	}

	static ::System::Void UnregisterReflector(::AkSurfaceReflector* reflector)
	{
		return ((::System::Void(*)(::AkSurfaceReflector*))((::PBYTE)hIl2Cpp + AKROOMMANAGER_UNREGISTERREFLECTOR_OFFSET))(reflector);
	}

	static ::System::Void RegisterPortalUpdate(::AkRoomPortal* portal)
	{
		return ((::System::Void(*)(::AkRoomPortal*))((::PBYTE)hIl2Cpp + AKROOMMANAGER_REGISTERPORTALUPDATE_OFFSET))(portal);
	}

	static ::System::Void RegisterRoomUpdate(::AkRoom* room)
	{
		return ((::System::Void(*)(::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMMANAGER_REGISTERROOMUPDATE_OFFSET))(room);
	}

	static ::System::Void Update()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOMMANAGER_UPDATE_OFFSET))();
	}
};
