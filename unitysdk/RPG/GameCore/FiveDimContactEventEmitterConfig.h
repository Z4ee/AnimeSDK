#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_METHOD_3_59E6911323879FF4_OFFSET UNITYSDK_OFFSET(0x1D0A6DE0)
#define RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_METHOD_3_5DCCF9E188611963_OFFSET UNITYSDK_OFFSET(0x1D0A6DA0)
#define RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A6DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimContactEventEmitterConfig_TypeDefinitionIndex = 18431;

	class FiveDimContactEventEmitterConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsContactEventEmitter; // 0x10
		::RPG::GameCore::LittleGameEvent* OnPlayerStand; // 0x18
		::RPG::GameCore::LittleGameEvent* OnPlayerExitStand; // 0x20
		::RPG::GameCore::LittleGameEvent* OnPlayerClimb; // 0x28
		::RPG::GameCore::LittleGameEvent* OnPlayerExitClimb; // 0x30
		::RPG::GameCore::LittleGameEvent* OnPlayerSlide; // 0x38
		::RPG::GameCore::LittleGameEvent* OnPlayerExitSlide; // 0x40
		::RPG::GameCore::LittleGameEvent* OnPlayerLanding; // 0x48
		::RPG::GameCore::LittleGameEvent* OnPlayerJump; // 0x50
		::RPG::GameCore::LittleGameEvent* OnPlayerJumpFromBelow; // 0x58
		::RPG::GameCore::LittleGameEvent* OnPlayerTrampolineJumpFromBelow; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5DCCF9E188611963(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimContactEventEmitterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimContactEventEmitterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_METHOD_3_5DCCF9E188611963_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_59E6911323879FF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimContactEventEmitterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimContactEventEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_METHOD_3_59E6911323879FF4_OFFSET))(a1, a2);
		}
	};
}
