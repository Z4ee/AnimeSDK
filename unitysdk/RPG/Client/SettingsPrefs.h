#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"

class Class_2_25BC0526D5698F50;
namespace RPG::Client { class AccountSettings; }
namespace RPG::Client { class AudioSettings; }
namespace RPG::Client { class GraphicsSettings; }
namespace RPG::Client { class LanguageSettings; }
namespace RPG::Client { class OtherSettings; }
namespace RPG::Client { class PushMessageSettings; }
namespace System { class String; }

#define RPG_CLIENT_SETTINGSPREFS_GET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF7C200)
#define RPG_CLIENT_SETTINGSPREFS_GET_AUDIOS_OFFSET UNITYSDK_OFFSET(0x1AF7BDE0)
#define RPG_CLIENT_SETTINGSPREFS_GET_GRAPHICS_OFFSET UNITYSDK_OFFSET(0x1AF7B530)
#define RPG_CLIENT_SETTINGSPREFS_GET_HOTKEYS_OFFSET UNITYSDK_OFFSET(0x1AF7AC90)
#define RPG_CLIENT_SETTINGSPREFS_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1AF7BF80)
#define RPG_CLIENT_SETTINGSPREFS_GET_OTHER_OFFSET UNITYSDK_OFFSET(0x1AF7C3D0)
#define RPG_CLIENT_SETTINGSPREFS_GET_PUSHMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AF7C570)
#define RPG_CLIENT_SETTINGSPREFS_SET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF7C2F0)
#define RPG_CLIENT_SETTINGSPREFS_SET_AUDIOS_OFFSET UNITYSDK_OFFSET(0x1AF7BEA0)
#define RPG_CLIENT_SETTINGSPREFS_SET_GRAPHICS_OFFSET UNITYSDK_OFFSET(0x1AF7BD00)
#define RPG_CLIENT_SETTINGSPREFS_SET_HOTKEYS_OFFSET UNITYSDK_OFFSET(0x1AF7C120)
#define RPG_CLIENT_SETTINGSPREFS_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1AF7C040)
#define RPG_CLIENT_SETTINGSPREFS_SET_OTHER_OFFSET UNITYSDK_OFFSET(0x1AF7C490)
#define RPG_CLIENT_SETTINGSPREFS_SET_PUSHMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AF7C660)
#define RPG_CLIENT_SETTINGSPREFS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF7B900)

namespace RPG::Client
{
	inline static constexpr unsigned int SettingsPrefs_TypeDefinitionIndex = 59501;

	class SettingsPrefs : public ::RPG::Client::PrefGroup
	{
	public:
		::RPG::Client::AccountSettings* _DefaultAccountSettings; // 0x20
		::RPG::Client::LanguageSettings* _DefaultLanguageSettings; // 0x28
		::RPG::Client::GraphicsSettings* _DefaultGraphicsSettings; // 0x30
		::Class_2_25BC0526D5698F50* _DefaultHotkeysSettings; // 0x38
		::RPG::Client::OtherSettings* _DefaultOtherSettings; // 0x40
		::RPG::Client::AudioSettings* _DefaultAudioSettings; // 0x48
		::RPG::Client::PushMessageSettings* _DefaultPushMessageSettings; // 0x50

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GraphicsSettings* get_Graphics()
		{
			return ((::RPG::Client::GraphicsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_GRAPHICS_OFFSET))(this);
		}

		::System::Void set_Graphics(::RPG::Client::GraphicsSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GraphicsSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_GRAPHICS_OFFSET))(this, a1);
		}

		::RPG::Client::AudioSettings* get_Audios()
		{
			return ((::RPG::Client::AudioSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_AUDIOS_OFFSET))(this);
		}

		::System::Void set_Audios(::RPG::Client::AudioSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_AUDIOS_OFFSET))(this, a1);
		}

		::RPG::Client::LanguageSettings* get_Language()
		{
			return ((::RPG::Client::LanguageSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_LANGUAGE_OFFSET))(this);
		}

		::System::Void set_Language(::RPG::Client::LanguageSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LanguageSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_LANGUAGE_OFFSET))(this, a1);
		}

		::Class_2_25BC0526D5698F50* get_Hotkeys()
		{
			return ((::Class_2_25BC0526D5698F50*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_HOTKEYS_OFFSET))(this);
		}

		::System::Void set_Hotkeys(::Class_2_25BC0526D5698F50* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_25BC0526D5698F50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_HOTKEYS_OFFSET))(this, a1);
		}

		::RPG::Client::AccountSettings* get_Account()
		{
			return ((::RPG::Client::AccountSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_ACCOUNT_OFFSET))(this);
		}

		::System::Void set_Account(::RPG::Client::AccountSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AccountSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_ACCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::OtherSettings* get_Other()
		{
			return ((::RPG::Client::OtherSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_OTHER_OFFSET))(this);
		}

		::System::Void set_Other(::RPG::Client::OtherSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OtherSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_OTHER_OFFSET))(this, a1);
		}

		::RPG::Client::PushMessageSettings* get_PushMessage()
		{
			return ((::RPG::Client::PushMessageSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_GET_PUSHMESSAGE_OFFSET))(this);
		}

		::System::Void set_PushMessage(::RPG::Client::PushMessageSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PushMessageSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGSPREFS_SET_PUSHMESSAGE_OFFSET))(this, a1);
		}
	};
}
