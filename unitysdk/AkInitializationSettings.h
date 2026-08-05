#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkDeviceSettings;
class AkInitSettings;
class AkMusicSettings;
class AkPlatformInitSettings;
class AkStreamMgrSettings;
class AkUnityPlatformSpecificSettings;

#define AKINITIALIZATIONSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F8C0730)
#define AKINITIALIZATIONSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F8C0610)
#define AKINITIALIZATIONSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F8C06C0)
#define AKINITIALIZATIONSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1F8C0550)
#define AKINITIALIZATIONSETTINGS_GET_DEVICESETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8BBCF0)
#define AKINITIALIZATIONSETTINGS_GET_INITSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8BBEB0)
#define AKINITIALIZATIONSETTINGS_GET_MUSICSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8BC070)
#define AKINITIALIZATIONSETTINGS_GET_PLATFORMSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8BBF90)
#define AKINITIALIZATIONSETTINGS_GET_STREAMMGRSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8BBDD0)
#define AKINITIALIZATIONSETTINGS_GET_UNITYPLATFORMSPECIFICSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8BC150)
#define AKINITIALIZATIONSETTINGS_GET_USEASYNCOPEN_OFFSET UNITYSDK_OFFSET(0x1F8C0D20)
#define AKINITIALIZATIONSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1F8C0560)
#define AKINITIALIZATIONSETTINGS_SET_DEVICESETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8C0A00)
#define AKINITIALIZATIONSETTINGS_SET_INITSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8C0AA0)
#define AKINITIALIZATIONSETTINGS_SET_MUSICSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8C0BE0)
#define AKINITIALIZATIONSETTINGS_SET_PLATFORMSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8C0B40)
#define AKINITIALIZATIONSETTINGS_SET_STREAMMGRSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8C0960)
#define AKINITIALIZATIONSETTINGS_SET_UNITYPLATFORMSPECIFICSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8C0C80)
#define AKINITIALIZATIONSETTINGS_SET_USEASYNCOPEN_OFFSET UNITYSDK_OFFSET(0x1F8BC230)
#define AKINITIALIZATIONSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8C08E0)
#define AKINITIALIZATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C0540)

inline static constexpr unsigned int AkInitializationSettings_TypeDefinitionIndex = 33609;

class AkInitializationSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkInitializationSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkInitializationSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_streamMgrSettings(::AkStreamMgrSettings* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkStreamMgrSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_STREAMMGRSETTINGS_OFFSET))(this, value);
	}

	::AkStreamMgrSettings* get_streamMgrSettings()
	{
		return ((::AkStreamMgrSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_STREAMMGRSETTINGS_OFFSET))(this);
	}

	::System::Void set_deviceSettings(::AkDeviceSettings* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkDeviceSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_DEVICESETTINGS_OFFSET))(this, value);
	}

	::AkDeviceSettings* get_deviceSettings()
	{
		return ((::AkDeviceSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_DEVICESETTINGS_OFFSET))(this);
	}

	::System::Void set_initSettings(::AkInitSettings* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkInitSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_INITSETTINGS_OFFSET))(this, value);
	}

	::AkInitSettings* get_initSettings()
	{
		return ((::AkInitSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_INITSETTINGS_OFFSET))(this);
	}

	::System::Void set_platformSettings(::AkPlatformInitSettings* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_PLATFORMSETTINGS_OFFSET))(this, value);
	}

	::AkPlatformInitSettings* get_platformSettings()
	{
		return ((::AkPlatformInitSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_PLATFORMSETTINGS_OFFSET))(this);
	}

	::System::Void set_musicSettings(::AkMusicSettings* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkMusicSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_MUSICSETTINGS_OFFSET))(this, value);
	}

	::AkMusicSettings* get_musicSettings()
	{
		return ((::AkMusicSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_MUSICSETTINGS_OFFSET))(this);
	}

	::System::Void set_unityPlatformSpecificSettings(::AkUnityPlatformSpecificSettings* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkUnityPlatformSpecificSettings*))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_UNITYPLATFORMSPECIFICSETTINGS_OFFSET))(this, value);
	}

	::AkUnityPlatformSpecificSettings* get_unityPlatformSpecificSettings()
	{
		return ((::AkUnityPlatformSpecificSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_UNITYPLATFORMSPECIFICSETTINGS_OFFSET))(this);
	}

	::System::Void set_useAsyncOpen(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_SET_USEASYNCOPEN_OFFSET))(this, value);
	}

	::System::Boolean get_useAsyncOpen()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZATIONSETTINGS_GET_USEASYNCOPEN_OFFSET))(this);
	}
};
