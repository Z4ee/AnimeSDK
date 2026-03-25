#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MusicRhythmPresetSongRow; }

#define RPG_CLIENT_MUSICRHYTHMPRESET_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD5CE0)
#define RPG_CLIENT_MUSICRHYTHMPRESET_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DD5D50)
#define RPG_CLIENT_MUSICRHYTHMPRESET_GET_PRESETDESC_OFFSET UNITYSDK_OFFSET(0x9DD5E50)
#define RPG_CLIENT_MUSICRHYTHMPRESET_GET_PRESETGRIDCONFIG_OFFSET UNITYSDK_OFFSET(0x9DD5ED0)
#define RPG_CLIENT_MUSICRHYTHMPRESET_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0x9DD5DD0)
#define RPG_CLIENT_MUSICRHYTHMPRESET_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9DD5D70)
#define RPG_CLIENT_MUSICRHYTHMPRESET_SET_ID_OFFSET UNITYSDK_OFFSET(0x9DD5D60)
#define RPG_CLIENT_MUSICRHYTHMPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD5D40)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmPreset_TypeDefinitionIndex = 50179;

	class MusicRhythmPreset : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPRESET__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MusicRhythmPreset* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::MusicRhythmPreset*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPRESET_CREATE_OFFSET))(id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPRESET_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPRESET_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::MusicRhythmPresetSongRow* get_Row()
		{
			return ((::RPG::GameCore::MusicRhythmPresetSongRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPRESET_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_PresetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPRESET_GET_PRESETNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_PresetDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPRESET_GET_PRESETDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PresetGridConfig()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPRESET_GET_PRESETGRIDCONFIG_OFFSET))(this);
		}
	};
}
