#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkRoom;
class AkRoomPortal;
class AkSurfaceReflector;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKROOMMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1DAAEFB0)
#define AKROOMMANAGER_REGISTERPORTALUPDATE_OFFSET UNITYSDK_OFFSET(0x1DAAF780)
#define AKROOMMANAGER_REGISTERPORTAL_OFFSET UNITYSDK_OFFSET(0x1DAAF1A0)
#define AKROOMMANAGER_REGISTERREFLECTOR_OFFSET UNITYSDK_OFFSET(0x1DAAF490)
#define AKROOMMANAGER_REGISTERROOMUPDATE_OFFSET UNITYSDK_OFFSET(0x1DAAC5B0)
#define AKROOMMANAGER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x1DAAF150)
#define AKROOMMANAGER_UNREGISTERPORTAL_OFFSET UNITYSDK_OFFSET(0x1DAAF3C0)
#define AKROOMMANAGER_UNREGISTERREFLECTOR_OFFSET UNITYSDK_OFFSET(0x1DAAF6B0)
#define AKROOMMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DAAFA70)
#define AKROOMMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAF0B0)

inline static constexpr unsigned int AkRoomManager_TypeDefinitionIndex = 43658;

class AkRoomManager : public ::System::Object
{
public:
	static ::AkRoomManager** StaticGet_m_Instance()
	{
		return (::AkRoomManager**)Il2CppClass::FromTypeDefinitionIndex(AkRoomManager_TypeDefinitionIndex)->GetStaticField(0x135A0);
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

	static ::System::Void RegisterPortal(::AkRoomPortal* a1)
	{
		return ((::System::Void(*)(::AkRoomPortal*))((::PBYTE)hIl2Cpp + AKROOMMANAGER_REGISTERPORTAL_OFFSET))(a1);
	}

	static ::System::Void UnregisterPortal(::AkRoomPortal* a1)
	{
		return ((::System::Void(*)(::AkRoomPortal*))((::PBYTE)hIl2Cpp + AKROOMMANAGER_UNREGISTERPORTAL_OFFSET))(a1);
	}

	static ::System::Void RegisterReflector(::AkSurfaceReflector* a1)
	{
		return ((::System::Void(*)(::AkSurfaceReflector*))((::PBYTE)hIl2Cpp + AKROOMMANAGER_REGISTERREFLECTOR_OFFSET))(a1);
	}

	static ::System::Void UnregisterReflector(::AkSurfaceReflector* a1)
	{
		return ((::System::Void(*)(::AkSurfaceReflector*))((::PBYTE)hIl2Cpp + AKROOMMANAGER_UNREGISTERREFLECTOR_OFFSET))(a1);
	}

	static ::System::Void RegisterPortalUpdate(::AkRoomPortal* a1)
	{
		return ((::System::Void(*)(::AkRoomPortal*))((::PBYTE)hIl2Cpp + AKROOMMANAGER_REGISTERPORTALUPDATE_OFFSET))(a1);
	}

	static ::System::Void RegisterRoomUpdate(::AkRoom* a1)
	{
		return ((::System::Void(*)(::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMMANAGER_REGISTERROOMUPDATE_OFFSET))(a1);
	}

	static ::System::Void Update()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOMMANAGER_UPDATE_OFFSET))();
	}
};
