#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BASESCROLLGAMECONFIG_METHOD_2_0609B83BC25B41A6_OFFSET UNITYSDK_OFFSET(0x194C1660)
#define RPG_GAMECORE_BASESCROLLGAMECONFIG_METHOD_2_1A742A188B3B727F_OFFSET UNITYSDK_OFFSET(0x194C1870)
#define RPG_GAMECORE_BASESCROLLGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194C1850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseScrollGameConfig_TypeDefinitionIndex = 17894;

	class BaseScrollGameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GameID; // 0x10
		::System::String* GameStateLevelVarName; // 0x18
		::System::String* SpeedRatioLevelVarName; // 0x20
		::System::Single StartWaitTime; // 0x28
		::System::Single EndWaitTime; // 0x2C
		::System::Single FallGravity; // 0x30
		::System::Single JumpSpeed; // 0x34
		::System::Single FinalAcceleration; // 0x38
		::System::Single FinalMaxSpeed; // 0x3C
		::System::Single StartOffest; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0609B83BC25B41A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseScrollGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseScrollGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMECONFIG_METHOD_2_0609B83BC25B41A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1A742A188B3B727F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseScrollGameConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseScrollGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMECONFIG_METHOD_2_1A742A188B3B727F_OFFSET))(a1, a2);
		}
	};
}
