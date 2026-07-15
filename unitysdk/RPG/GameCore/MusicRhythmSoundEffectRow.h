#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMSOUNDEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BAEEF30)
#define RPG_GAMECORE_MUSICRHYTHMSOUNDEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAEF060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmSoundEffectRow_TypeDefinitionIndex = 13745;

	class MusicRhythmSoundEffectRow : public ::System::Object
	{
	public:
		::System::String* SoundEffectIconPath; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMSOUNDEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MusicRhythmSoundEffectRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmSoundEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMSOUNDEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
