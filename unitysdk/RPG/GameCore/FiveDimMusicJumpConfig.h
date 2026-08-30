#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMUSICJUMPCONFIG_METHOD_2_76D357A82E8F8E6F_OFFSET UNITYSDK_OFFSET(0x1D867930)
#define RPG_GAMECORE_FIVEDIMMUSICJUMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D86EF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicJumpConfig_TypeDefinitionIndex = 18304;

	class FiveDimMusicJumpConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MusicJumpHeight; // 0x10
		::System::Single MusicAirJumpHeight; // 0x14
		::System::Single TrampolineMusicJumpHeight; // 0x18
		::System::String* JumpAudioSwitch; // 0x20
		::System::String* JumpAudioSwitchValue; // 0x28
		::System::String* MusicJumpAudioEvent; // 0x30
		::System::String* MusicAirJumpAudioEvent; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICJUMPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_76D357A82E8F8E6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMusicJumpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMusicJumpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICJUMPCONFIG_METHOD_2_76D357A82E8F8E6F_OFFSET))(a1, a2);
		}
	};
}
