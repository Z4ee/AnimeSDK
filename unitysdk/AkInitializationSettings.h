#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkDeviceSettings;
class AkInitSettings;
class AkMusicSettings;
class AkPlatformInitSettings;
class AkStreamMgrSettings;
class AkUnityPlatformSpecificSettings;

#define AKINITIALIZATIONSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B43B230)
#define AKINITIALIZATIONSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B43B110)
#define AKINITIALIZATIONSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B43B1C0)
#define AKINITIALIZATIONSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B43AFD0)
#define AKINITIALIZATIONSETTINGS_GET_DEVICESETTINGS_OFFSET UNITYSDK_OFFSET(0x1B427460)
#define AKINITIALIZATIONSETTINGS_GET_INITSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B427690)
#define AKINITIALIZATIONSETTINGS_GET_MUSICSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B427870)
#define AKINITIALIZATIONSETTINGS_GET_PLATFORMSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B427780)
#define AKINITIALIZATIONSETTINGS_GET_STREAMMGRSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B427550)
#define AKINITIALIZATIONSETTINGS_GET_UNITYPLATFORMSPECIFICSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B427A80)
#define AKINITIALIZATIONSETTINGS_GET_USEASYNCOPEN_OFFSET UNITYSDK_OFFSET(0x1B43BAD0)
#define AKINITIALIZATIONSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B43B020)
#define AKINITIALIZATIONSETTINGS_SET_DEVICESETTINGS_OFFSET UNITYSDK_OFFSET(0x1B43B530)
#define AKINITIALIZATIONSETTINGS_SET_INITSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B43B650)
#define AKINITIALIZATIONSETTINGS_SET_MUSICSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B43B890)
#define AKINITIALIZATIONSETTINGS_SET_PLATFORMSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B43B770)
#define AKINITIALIZATIONSETTINGS_SET_STREAMMGRSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B43B410)
#define AKINITIALIZATIONSETTINGS_SET_UNITYPLATFORMSPECIFICSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B43B9B0)
#define AKINITIALIZATIONSETTINGS_SET_USEASYNCOPEN_OFFSET UNITYSDK_OFFSET(0x1B427B70)
#define AKINITIALIZATIONSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B41DF60)
#define AKINITIALIZATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B43AFC0)

inline static constexpr unsigned int AkInitializationSettings_TypeDefinitionIndex = 41129;

class AkInitializationSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkInitializationSettings* a1)
	{
		return ((::System::IntPtr(*)(::AkInitializationSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_streamMgrSettings(::AkStreamMgrSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkStreamMgrSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_STREAMMGRSETTINGS_OFFSET))(this, a1);
	}

	::AkStreamMgrSettings* get_streamMgrSettings()
	{
		return ((::AkStreamMgrSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_STREAMMGRSETTINGS_OFFSET))(this);
	}

	::System::Void set_deviceSettings(::AkDeviceSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkDeviceSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_DEVICESETTINGS_OFFSET))(this, a1);
	}

	::AkDeviceSettings* get_deviceSettings()
	{
		return ((::AkDeviceSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_DEVICESETTINGS_OFFSET))(this);
	}

	::System::Void set_initSettings(::AkInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkInitSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_INITSETTINGS_OFFSET))(this, a1);
	}

	::AkInitSettings* get_initSettings()
	{
		return ((::AkInitSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_INITSETTINGS_OFFSET))(this);
	}

	::System::Void set_platformSettings(::AkPlatformInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_PLATFORMSETTINGS_OFFSET))(this, a1);
	}

	::AkPlatformInitSettings* get_platformSettings()
	{
		return ((::AkPlatformInitSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_PLATFORMSETTINGS_OFFSET))(this);
	}

	::System::Void set_musicSettings(::AkMusicSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkMusicSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_MUSICSETTINGS_OFFSET))(this, a1);
	}

	::AkMusicSettings* get_musicSettings()
	{
		return ((::AkMusicSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_MUSICSETTINGS_OFFSET))(this);
	}

	::System::Void set_unityPlatformSpecificSettings(::AkUnityPlatformSpecificSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkUnityPlatformSpecificSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_UNITYPLATFORMSPECIFICSETTINGS_OFFSET))(this, a1);
	}

	::AkUnityPlatformSpecificSettings* get_unityPlatformSpecificSettings()
	{
		return ((::AkUnityPlatformSpecificSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_UNITYPLATFORMSPECIFICSETTINGS_OFFSET))(this);
	}

	::System::Void set_useAsyncOpen(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_USEASYNCOPEN_OFFSET))(this, a1);
	}

	::System::Boolean get_useAsyncOpen()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_USEASYNCOPEN_OFFSET))(this);
	}
};
