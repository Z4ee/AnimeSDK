#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMPLAYERSTATELISTENERCONFIG_METHOD_3_11B047E05E86FDBB_OFFSET UNITYSDK_OFFSET(0x1D0F97B0)
#define RPG_GAMECORE_FIVEDIMPLAYERSTATELISTENERCONFIG_METHOD_3_A79DEDA27655D41A_OFFSET UNITYSDK_OFFSET(0x1D0F97F0)
#define RPG_GAMECORE_FIVEDIMPLAYERSTATELISTENERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F97E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerStateListenerConfig_TypeDefinitionIndex = 18399;

	class FiveDimPlayerStateListenerConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPlayerStateListener; // 0x10
		::RPG::GameCore::LittleGameEvent* OnPlayerJump; // 0x18
		::RPG::GameCore::LittleGameEvent* OnPlayerLand; // 0x20
		::RPG::GameCore::LittleGameEvent* OnPlayerUseSkill; // 0x28
		::RPG::GameCore::LittleGameEvent* OnPlayerPlayFlute; // 0x30
		::RPG::GameCore::LittleGameEvent* OnPlayerBeatBack; // 0x38
		::RPG::GameCore::LittleGameEvent* OnPlayerDead; // 0x40
		::RPG::GameCore::LittleGameEvent* OnInputUpPress; // 0x48
		::RPG::GameCore::LittleGameEvent* OnInputUpRelease; // 0x50
		::RPG::GameCore::LittleGameEvent* OnInputDownPress; // 0x58
		::RPG::GameCore::LittleGameEvent* OnInputDownRelease; // 0x60
		::RPG::GameCore::LittleGameEvent* OnInputLeftPress; // 0x68
		::RPG::GameCore::LittleGameEvent* OnInputLeftRelease; // 0x70
		::RPG::GameCore::LittleGameEvent* OnInputRightPress; // 0x78
		::RPG::GameCore::LittleGameEvent* OnInputRightRelease; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSTATELISTENERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_11B047E05E86FDBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerStateListenerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerStateListenerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSTATELISTENERCONFIG_METHOD_3_11B047E05E86FDBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A79DEDA27655D41A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerStateListenerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerStateListenerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSTATELISTENERCONFIG_METHOD_3_A79DEDA27655D41A_OFFSET))(a1, a2);
		}
	};
}
