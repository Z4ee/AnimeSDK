#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_METHOD_3_59E6911323879FF4_OFFSET UNITYSDK_OFFSET(0x19736480)
#define RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_METHOD_3_FDBE152E4FCD6AD1_OFFSET UNITYSDK_OFFSET(0x19736410)
#define RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19736460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimContactEventEmitterConfig_TypeDefinitionIndex = 17737;

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

		static ::System::Void Method_3_FDBE152E4FCD6AD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimContactEventEmitterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimContactEventEmitterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_METHOD_3_FDBE152E4FCD6AD1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_59E6911323879FF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimContactEventEmitterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimContactEventEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_METHOD_3_59E6911323879FF4_OFFSET))(a1, a2);
		}
	};
}
