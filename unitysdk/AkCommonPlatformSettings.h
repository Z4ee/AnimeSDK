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

#define AKCOMMONPLATFORMSETTINGS_GET_AKCOMMUNICATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A5DE0F0)
#define AKCOMMONPLATFORMSETTINGS_GET_AKINITIALIZATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A5DD290)
#define AKCOMMONPLATFORMSETTINGS_GET_AKSPATIALAUDIOINITSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A5DDE30)
#define AKCOMMONPLATFORMSETTINGS_GET_CALLBACKMANAGERINITIALIZATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A5DDF50)
#define AKCOMMONPLATFORMSETTINGS_GET_INITIALLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1A5DE000)
#define AKCOMMONPLATFORMSETTINGS_GET_RENDERDURINGFOCUSLOSS_OFFSET UNITYSDK_OFFSET(0x1A5DE060)
#define AKCOMMONPLATFORMSETTINGS_GET_SOUNDBANKPATH_OFFSET UNITYSDK_OFFSET(0x1A5DE090)
#define AKCOMMONPLATFORMSETTINGS_GET_SOUNDBANKPERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1A5DE030)
#define AKCOMMONPLATFORMSETTINGS_GET_USEASYNCOPEN_OFFSET UNITYSDK_OFFSET(0x1A5DE0C0)
#define AKCOMMONPLATFORMSETTINGS_SETNUMREFILLSINVOICE_OFFSET UNITYSDK_OFFSET(0x1A5DE1E0)
#define AKCOMMONPLATFORMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5DE2F0)
#define AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_AKCOMMUNICATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A5DE470)
#define AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_AKINITIALIZATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A5DE300)
#define AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_AKSPATIALAUDIOINITSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A5DE390)
#define AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_CALLBACKMANAGERINITIALIZATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A5DE420)
#define AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_SETNUMREFILLSINVOICE_OFFSET UNITYSDK_OFFSET(0x1A5DE500)

inline static constexpr unsigned int AkCommonPlatformSettings_TypeDefinitionIndex = 40398;

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

	::System::Void SetNumRefillsInVoice(::System::UInt16 numRefills)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_SETNUMREFILLSINVOICE_OFFSET))(this, numRefills);
	}

	::AkInitializationSettings* __iFixBaseProxy_get_AkInitializationSettings()
	{
		return ((::AkInitializationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_AKINITIALIZATIONSETTINGS_OFFSET))(this);
	}

	::AkSpatialAudioInitSettings* __iFixBaseProxy_get_AkSpatialAudioInitSettings()
	{
		return ((::AkSpatialAudioInitSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_AKSPATIALAUDIOINITSETTINGS_OFFSET))(this);
	}

	::AkCallbackManager_InitializationSettings* __iFixBaseProxy_get_CallbackManagerInitializationSettings()
	{
		return ((::AkCallbackManager_InitializationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_CALLBACKMANAGERINITIALIZATIONSETTINGS_OFFSET))(this);
	}

	::AkCommunicationSettings* __iFixBaseProxy_get_AkCommunicationSettings()
	{
		return ((::AkCommunicationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_AKCOMMUNICATIONSETTINGS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_SetNumRefillsInVoice(::System::UInt16 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_SETNUMREFILLSINVOICE_OFFSET))(this, P0);
	}
};
