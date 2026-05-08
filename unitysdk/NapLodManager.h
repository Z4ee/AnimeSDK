#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/NapLodController_NapLODLevel.h"

class NapLodController;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MdbComponent; }

#define NAPLODMANAGER_APPLYAVATARBODYLEVEL_OFFSET UNITYSDK_OFFSET(0x112CCB80)
#define NAPLODMANAGER_APPLYAVATARFACELEVEL_OFFSET UNITYSDK_OFFSET(0x112CCE40)
#define NAPLODMANAGER_GET_AVATARBODYLEVEL_OFFSET UNITYSDK_OFFSET(0x112CCB00)
#define NAPLODMANAGER_GET_AVATARFACELEVEL_OFFSET UNITYSDK_OFFSET(0x112CCDC0)
#define NAPLODMANAGER_REGISTERAVATARLODCONTROLLER_OFFSET UNITYSDK_OFFSET(0x112CCF90)
#define NAPLODMANAGER_SET_AVATARBODYLEVEL_OFFSET UNITYSDK_OFFSET(0x112CCB10)
#define NAPLODMANAGER_SET_AVATARFACELEVEL_OFFSET UNITYSDK_OFFSET(0x112CCDD0)
#define NAPLODMANAGER_UNREGISTERAVATARLODCONTROLLER_OFFSET UNITYSDK_OFFSET(0x112CD1B0)
#define NAPLODMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x112CD380)

inline static constexpr unsigned int NapLodManager_TypeDefinitionIndex = 61266;

class NapLodManager : public ::Foundation::Singleton_1<::NapLodManager*>
{
public:
	::System::Collections::Generic::List_1<::NapLodController*>* allAvatarBodyControllers; // 0x10
	::System::Collections::Generic::List_1<::NapLodController*>* allAvatarFaceControllers; // 0x18
	::System::Collections::Generic::HashSet_1<::UnityEngine::MdbComponent*>* allMdb; // 0x20
	::NapLodController_NapLODLevel avatarBodyLevel; // 0x28
	::NapLodController_NapLODLevel avatarFaceLevel; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODMANAGER__CTOR_OFFSET))(this);
	}

	::NapLodController_NapLODLevel get_AvatarBodyLevel()
	{
		return ((::NapLodController_NapLODLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODMANAGER_GET_AVATARBODYLEVEL_OFFSET))(this);
	}

	::System::Void set_AvatarBodyLevel(::NapLodController_NapLODLevel value)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodController_NapLODLevel))((::PBYTE)hIl2Cpp + NAPLODMANAGER_SET_AVATARBODYLEVEL_OFFSET))(this, value);
	}

	::NapLodController_NapLODLevel get_AvatarFaceLevel()
	{
		return ((::NapLodController_NapLODLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODMANAGER_GET_AVATARFACELEVEL_OFFSET))(this);
	}

	::System::Void set_AvatarFaceLevel(::NapLodController_NapLODLevel value)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodController_NapLODLevel))((::PBYTE)hIl2Cpp + NAPLODMANAGER_SET_AVATARFACELEVEL_OFFSET))(this, value);
	}

	::System::Void ApplyAvatarBodyLevel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODMANAGER_APPLYAVATARBODYLEVEL_OFFSET))(this);
	}

	::System::Void ApplyAvatarFaceLevel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODMANAGER_APPLYAVATARFACELEVEL_OFFSET))(this);
	}

	::System::Void RegisterAvatarLodController(::NapLodController* controller)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodController*))((::PBYTE)hIl2Cpp + NAPLODMANAGER_REGISTERAVATARLODCONTROLLER_OFFSET))(this, controller);
	}

	::System::Void UnregisterAvatarLodController(::NapLodController* controller)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodController*))((::PBYTE)hIl2Cpp + NAPLODMANAGER_UNREGISTERAVATARLODCONTROLLER_OFFSET))(this, controller);
	}
};
