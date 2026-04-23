#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudioSettings_SpeakerModeType.h"
#include "unitysdk/RPG/Client/PrefGroup.h"

namespace System { class String; }

#define RPG_CLIENT_AUDIOSETTINGS_GET_BGMVOLUME_OFFSET UNITYSDK_OFFSET(0x9D64840)
#define RPG_CLIENT_AUDIOSETTINGS_GET_MASTERVOLUME_OFFSET UNITYSDK_OFFSET(0x9D64760)
#define RPG_CLIENT_AUDIOSETTINGS_GET_MUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x9D64C80)
#define RPG_CLIENT_AUDIOSETTINGS_GET_SFXVOLUME_OFFSET UNITYSDK_OFFSET(0x9D64920)
#define RPG_CLIENT_AUDIOSETTINGS_GET_SPEAKERMODE_OFFSET UNITYSDK_OFFSET(0x9D64AE0)
#define RPG_CLIENT_AUDIOSETTINGS_GET_VOVOLUME_OFFSET UNITYSDK_OFFSET(0x9D64A00)
#define RPG_CLIENT_AUDIOSETTINGS_SET_BGMVOLUME_OFFSET UNITYSDK_OFFSET(0x9D648B0)
#define RPG_CLIENT_AUDIOSETTINGS_SET_MASTERVOLUME_OFFSET UNITYSDK_OFFSET(0x9D647D0)
#define RPG_CLIENT_AUDIOSETTINGS_SET_MUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x9D64CF0)
#define RPG_CLIENT_AUDIOSETTINGS_SET_SFXVOLUME_OFFSET UNITYSDK_OFFSET(0x9D64990)
#define RPG_CLIENT_AUDIOSETTINGS_SET_SPEAKERMODE_OFFSET UNITYSDK_OFFSET(0x9D64BA0)
#define RPG_CLIENT_AUDIOSETTINGS_SET_VOVOLUME_OFFSET UNITYSDK_OFFSET(0x9D64A70)
#define RPG_CLIENT_AUDIOSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x9D646E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioSettings_TypeDefinitionIndex = 54751;

	class AudioSettings : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS__CTOR_OFFSET))(this, name);
		}

		::System::UInt32 get_MasterVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_GET_MASTERVOLUME_OFFSET))(this);
		}

		::System::Void set_MasterVolume(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_SET_MASTERVOLUME_OFFSET))(this, value);
		}

		::System::UInt32 get_BGMVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_GET_BGMVOLUME_OFFSET))(this);
		}

		::System::Void set_BGMVolume(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_SET_BGMVOLUME_OFFSET))(this, value);
		}

		::System::UInt32 get_SFXVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_GET_SFXVOLUME_OFFSET))(this);
		}

		::System::Void set_SFXVolume(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_SET_SFXVOLUME_OFFSET))(this, value);
		}

		::System::UInt32 get_VOVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_GET_VOVOLUME_OFFSET))(this);
		}

		::System::Void set_VOVolume(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_SET_VOVOLUME_OFFSET))(this, value);
		}

		::RPG::Client::AudioSettings_SpeakerModeType get_SpeakerMode()
		{
			return ((::RPG::Client::AudioSettings_SpeakerModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_GET_SPEAKERMODE_OFFSET))(this);
		}

		::System::Void set_SpeakerMode(::RPG::Client::AudioSettings_SpeakerModeType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioSettings_SpeakerModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_SET_SPEAKERMODE_OFFSET))(this, value);
		}

		::System::Boolean get_MuteOnLostFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_GET_MUTEONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void set_MuteOnLostFocus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_SET_MUTEONLOSTFOCUS_OFFSET))(this, value);
		}
	};
}
