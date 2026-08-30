#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudioSettings_SpeakerModeType.h"
#include "unitysdk/RPG/Client/PrefGroup.h"

namespace System { class String; }

#define RPG_CLIENT_AUDIOSETTINGS_GET_BGMVOLUME_OFFSET UNITYSDK_OFFSET(0x193B44B0)
#define RPG_CLIENT_AUDIOSETTINGS_GET_MASTERVOLUME_OFFSET UNITYSDK_OFFSET(0x193B4450)
#define RPG_CLIENT_AUDIOSETTINGS_GET_MUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x193B4690)
#define RPG_CLIENT_AUDIOSETTINGS_GET_SFXVOLUME_OFFSET UNITYSDK_OFFSET(0x193B4510)
#define RPG_CLIENT_AUDIOSETTINGS_GET_SPEAKERMODE_OFFSET UNITYSDK_OFFSET(0x193B45D0)
#define RPG_CLIENT_AUDIOSETTINGS_GET_VOVOLUME_OFFSET UNITYSDK_OFFSET(0x193B4570)
#define RPG_CLIENT_AUDIOSETTINGS_SET_BGMVOLUME_OFFSET UNITYSDK_OFFSET(0x193AB230)
#define RPG_CLIENT_AUDIOSETTINGS_SET_MASTERVOLUME_OFFSET UNITYSDK_OFFSET(0x193AB1C0)
#define RPG_CLIENT_AUDIOSETTINGS_SET_MUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x193ABC70)
#define RPG_CLIENT_AUDIOSETTINGS_SET_SFXVOLUME_OFFSET UNITYSDK_OFFSET(0x193AB2A0)
#define RPG_CLIENT_AUDIOSETTINGS_SET_SPEAKERMODE_OFFSET UNITYSDK_OFFSET(0x193AB380)
#define RPG_CLIENT_AUDIOSETTINGS_SET_VOVOLUME_OFFSET UNITYSDK_OFFSET(0x193AB310)
#define RPG_CLIENT_AUDIOSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x193B43D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioSettings_TypeDefinitionIndex = 59502;

	class AudioSettings : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_MasterVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_GET_MASTERVOLUME_OFFSET))(this);
		}

		::System::Void set_MasterVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_SET_MASTERVOLUME_OFFSET))(this, a1);
		}

		::System::UInt32 get_BGMVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_GET_BGMVOLUME_OFFSET))(this);
		}

		::System::Void set_BGMVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_SET_BGMVOLUME_OFFSET))(this, a1);
		}

		::System::UInt32 get_SFXVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_GET_SFXVOLUME_OFFSET))(this);
		}

		::System::Void set_SFXVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_SET_SFXVOLUME_OFFSET))(this, a1);
		}

		::System::UInt32 get_VOVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_GET_VOVOLUME_OFFSET))(this);
		}

		::System::Void set_VOVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_SET_VOVOLUME_OFFSET))(this, a1);
		}

		::RPG::Client::AudioSettings_SpeakerModeType get_SpeakerMode()
		{
			return ((::RPG::Client::AudioSettings_SpeakerModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_GET_SPEAKERMODE_OFFSET))(this);
		}

		::System::Void set_SpeakerMode(::RPG::Client::AudioSettings_SpeakerModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioSettings_SpeakerModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_SET_SPEAKERMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_MuteOnLostFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_GET_MUTEONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void set_MuteOnLostFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOSETTINGS_SET_MUTEONLOSTFOCUS_OFFSET))(this, a1);
		}
	};
}
