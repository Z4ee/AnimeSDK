#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"

class Class_2_AC26CDA148317D2B;
namespace RPG::Client { class AccountSettings; }
namespace RPG::Client { class AudioSettings; }
namespace RPG::Client { class GraphicsSettings; }
namespace RPG::Client { class LanguageSettings; }
namespace RPG::Client { class OtherSettings; }
namespace RPG::Client { class PushMessageSettings; }
namespace System { class String; }

#define RPG_CLIENT_SETTINGSPREFS_GET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0xA475EA0)
#define RPG_CLIENT_SETTINGSPREFS_GET_AUDIOS_OFFSET UNITYSDK_OFFSET(0xA475A80)
#define RPG_CLIENT_SETTINGSPREFS_GET_GRAPHICS_OFFSET UNITYSDK_OFFSET(0xA475200)
#define RPG_CLIENT_SETTINGSPREFS_GET_HOTKEYS_OFFSET UNITYSDK_OFFSET(0xA474AC0)
#define RPG_CLIENT_SETTINGSPREFS_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0xA475C20)
#define RPG_CLIENT_SETTINGSPREFS_GET_OTHER_OFFSET UNITYSDK_OFFSET(0xA476070)
#define RPG_CLIENT_SETTINGSPREFS_GET_PUSHMESSAGE_OFFSET UNITYSDK_OFFSET(0xA476210)
#define RPG_CLIENT_SETTINGSPREFS_SET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0xA475F90)
#define RPG_CLIENT_SETTINGSPREFS_SET_AUDIOS_OFFSET UNITYSDK_OFFSET(0xA475B40)
#define RPG_CLIENT_SETTINGSPREFS_SET_GRAPHICS_OFFSET UNITYSDK_OFFSET(0xA4759A0)
#define RPG_CLIENT_SETTINGSPREFS_SET_HOTKEYS_OFFSET UNITYSDK_OFFSET(0xA475DC0)
#define RPG_CLIENT_SETTINGSPREFS_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0xA475CE0)
#define RPG_CLIENT_SETTINGSPREFS_SET_OTHER_OFFSET UNITYSDK_OFFSET(0xA476130)
#define RPG_CLIENT_SETTINGSPREFS_SET_PUSHMESSAGE_OFFSET UNITYSDK_OFFSET(0xA476300)
#define RPG_CLIENT_SETTINGSPREFS__CTOR_OFFSET UNITYSDK_OFFSET(0xA4755A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SettingsPrefs_TypeDefinitionIndex = 48005;

	class SettingsPrefs : public ::RPG::Client::PrefGroup
	{
	public:
		::RPG::Client::AccountSettings* _DefaultAccountSettings; // 0x20
		::Class_2_AC26CDA148317D2B* _DefaultHotkeysSettings; // 0x28
		::RPG::Client::GraphicsSettings* _DefaultGraphicsSettings; // 0x30
		::RPG::Client::PushMessageSettings* _DefaultPushMessageSettings; // 0x38
		::RPG::Client::OtherSettings* _DefaultOtherSettings; // 0x40
		::RPG::Client::LanguageSettings* _DefaultLanguageSettings; // 0x48
		::RPG::Client::AudioSettings* _DefaultAudioSettings; // 0x50

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS__CTOR_OFFSET))(this, name);
		}

		::RPG::Client::GraphicsSettings* get_Graphics()
		{
			return ((::RPG::Client::GraphicsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_GRAPHICS_OFFSET))(this);
		}

		::System::Void set_Graphics(::RPG::Client::GraphicsSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GraphicsSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_GRAPHICS_OFFSET))(this, value);
		}

		::RPG::Client::AudioSettings* get_Audios()
		{
			return ((::RPG::Client::AudioSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_AUDIOS_OFFSET))(this);
		}

		::System::Void set_Audios(::RPG::Client::AudioSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_AUDIOS_OFFSET))(this, value);
		}

		::RPG::Client::LanguageSettings* get_Language()
		{
			return ((::RPG::Client::LanguageSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_LANGUAGE_OFFSET))(this);
		}

		::System::Void set_Language(::RPG::Client::LanguageSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LanguageSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_LANGUAGE_OFFSET))(this, value);
		}

		::Class_2_AC26CDA148317D2B* get_Hotkeys()
		{
			return ((::Class_2_AC26CDA148317D2B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_HOTKEYS_OFFSET))(this);
		}

		::System::Void set_Hotkeys(::Class_2_AC26CDA148317D2B* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_AC26CDA148317D2B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_HOTKEYS_OFFSET))(this, value);
		}

		::RPG::Client::AccountSettings* get_Account()
		{
			return ((::RPG::Client::AccountSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_ACCOUNT_OFFSET))(this);
		}

		::System::Void set_Account(::RPG::Client::AccountSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AccountSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_ACCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::OtherSettings* get_Other()
		{
			return ((::RPG::Client::OtherSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_OTHER_OFFSET))(this);
		}

		::System::Void set_Other(::RPG::Client::OtherSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OtherSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_OTHER_OFFSET))(this, value);
		}

		::RPG::Client::PushMessageSettings* get_PushMessage()
		{
			return ((::RPG::Client::PushMessageSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_PUSHMESSAGE_OFFSET))(this);
		}

		::System::Void set_PushMessage(::RPG::Client::PushMessageSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PushMessageSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_PUSHMESSAGE_OFFSET))(this, value);
		}
	};
}
