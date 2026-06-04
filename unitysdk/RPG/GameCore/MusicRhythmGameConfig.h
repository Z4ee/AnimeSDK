#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MColor.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMGAMECONFIG_METHOD_2_4A2FAF762F96365A_OFFSET UNITYSDK_OFFSET(0x199C20F0)
#define RPG_GAMECORE_MUSICRHYTHMGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199C2380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmGameConfig_TypeDefinitionIndex = 16084;

	class MusicRhythmGameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single HintOffset; // 0x10
		::System::Single CircleOffset; // 0x14
		::System::Single MissileFlyTime; // 0x18
		::System::Single AdjustInputTime; // 0x1C
		::System::String* AdjustTimeline; // 0x20
		::RPG::MColor TVOnColor; // 0x28
		::RPG::MColor TVOffColor; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4A2FAF762F96365A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MusicRhythmGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGAMECONFIG_METHOD_2_4A2FAF762F96365A_OFFSET))(a1, a2);
		}
	};
}
