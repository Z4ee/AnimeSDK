#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMSONGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B760A0)
#define RPG_GAMECORE_MUSICRHYTHMSONGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B76690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmSongRow_TypeDefinitionIndex = 13524;

	class MusicRhythmSongRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SoundEffectIDList; // 0x10
		::Il2CppArray<::System::Int32>* GridNumList; // 0x18
		::System::String* MixingWaveMatPath; // 0x20
		::Il2CppArray<::System::UInt32>* PresetIDList; // 0x28
		::System::String* BGMMenuState; // 0x30
		::System::String* BGMStageState; // 0x38
		::Il2CppArray<::System::UInt32>* TrackIDList; // 0x40
		::System::Int32 PresetStartGrid; // 0x48
		::System::UInt32 GridTransitionTime; // 0x4C
		::System::UInt32 UnlockType; // 0x50
		::System::UInt32 UnlockTypeParam; // 0x54
		::System::UInt32 LimitSubMission; // 0x58
		::System::Int32 PresetEndGrid; // 0x5C
		::System::UInt32 ID; // 0x60
		::System::UInt32 GridNum; // 0x64
		::System::UInt32 SoundEffectUnlockSubMission; // 0x68
		::RPG::Client::TextID SongName; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMSONGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MusicRhythmSongRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmSongRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMSONGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
