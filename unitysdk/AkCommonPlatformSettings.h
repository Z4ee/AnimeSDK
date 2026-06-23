#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBasePlatformSettings.h"

class AkCallbackManager_InitializationSettings;
class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;
class AkCommunicationSettings;
class AkInitializationSettings;
class AkSpatialAudioInitSettings;
namespace System { class String; }

#define AKCOMMONPLATFORMSETTINGS_GET_AKCOMMUNICATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E48D960)
#define AKCOMMONPLATFORMSETTINGS_GET_AKINITIALIZATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E48C600)
#define AKCOMMONPLATFORMSETTINGS_GET_AKSPATIALAUDIOINITSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E48D6A0)
#define AKCOMMONPLATFORMSETTINGS_GET_CALLBACKMANAGERINITIALIZATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E48D7B0)
#define AKCOMMONPLATFORMSETTINGS_GET_INITIALLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1E48D870)
#define AKCOMMONPLATFORMSETTINGS_GET_RENDERDURINGFOCUSLOSS_OFFSET UNITYSDK_OFFSET(0x1E48D8D0)
#define AKCOMMONPLATFORMSETTINGS_GET_SOUNDBANKPATH_OFFSET UNITYSDK_OFFSET(0x1E48D900)
#define AKCOMMONPLATFORMSETTINGS_GET_SOUNDBANKPERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1E48D8A0)
#define AKCOMMONPLATFORMSETTINGS_GET_USEASYNCOPEN_OFFSET UNITYSDK_OFFSET(0x1E48D930)
#define AKCOMMONPLATFORMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E48DA40)

inline static constexpr unsigned int AkCommonPlatformSettings_TypeDefinitionIndex = 33069;

class AkCommonPlatformSettings : public ::AkBasePlatformSettings
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS__CTOR_OFFSET))(this);
	}

	::AkInitializationSettings* get_AkInitializationSettings()
	{
		return ((::AkInitializationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_AKINITIALIZATIONSETTINGS_OFFSET))(this);
	}

	::AkSpatialAudioInitSettings* get_AkSpatialAudioInitSettings()
	{
		return ((::AkSpatialAudioInitSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_AKSPATIALAUDIOINITSETTINGS_OFFSET))(this);
	}

	::AkCallbackManager_InitializationSettings* get_CallbackManagerInitializationSettings()
	{
		return ((::AkCallbackManager_InitializationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_CALLBACKMANAGERINITIALIZATIONSETTINGS_OFFSET))(this);
	}

	::System::String* get_InitialLanguage()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_INITIALLANGUAGE_OFFSET))(this);
	}

	::System::String* get_SoundBankPersistentDataPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_SOUNDBANKPERSISTENTDATAPATH_OFFSET))(this);
	}

	::System::Boolean get_RenderDuringFocusLoss()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_RENDERDURINGFOCUSLOSS_OFFSET))(this);
	}

	::System::String* get_SoundbankPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_SOUNDBANKPATH_OFFSET))(this);
	}

	::System::Boolean get_UseAsyncOpen()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_USEASYNCOPEN_OFFSET))(this);
	}

	::AkCommunicationSettings* get_AkCommunicationSettings()
	{
		return ((::AkCommunicationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_AKCOMMUNICATIONSETTINGS_OFFSET))(this);
	}
};
