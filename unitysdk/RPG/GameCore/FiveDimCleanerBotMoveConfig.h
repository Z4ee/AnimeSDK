#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_METHOD_3_12B1D822B1A46381_OFFSET UNITYSDK_OFFSET(0x171EC4C0)
#define RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_METHOD_3_B748B2E37617DB4C_OFFSET UNITYSDK_OFFSET(0x171EC530)
#define RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171EC510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCleanerBotMoveConfig_TypeDefinitionIndex = 15294;

	class FiveDimCleanerBotMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::Single FallGravityMultiplier; // 0x40
		::System::Single MaxLowFallSpeedMultiplier; // 0x44
		::System::Single FallTime; // 0x48
		::System::Single DefaultFallSpeed; // 0x4C
		::System::Single LandingDuration; // 0x50
		::System::Single LowFallThreshold; // 0x54
		::System::String* OnLowFallEvent; // 0x58
		::System::String* OnLowLandEvent; // 0x60
		::System::String* OnFallEvent; // 0x68
		::System::String* OnLandEvent; // 0x70
		::System::String* OnRecoverEvent; // 0x78
		::System::String* OnBumpEvent; // 0x80
		::System::String* OnSteppedEvent; // 0x88
		::System::String* OnBounceEvent; // 0x90
		::System::String* MoveHitEvent; // 0x98
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* MoveTrailEffects; // 0xA0
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* FadeOutEffects; // 0xA8
		::System::Boolean EnableTrampoline; // 0xB0
		::System::Boolean OverrideJumpParams; // 0xB1
		::System::Single TrampolineJumpHeight; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_12B1D822B1A46381(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCleanerBotMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCleanerBotMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_METHOD_3_12B1D822B1A46381_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B748B2E37617DB4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCleanerBotMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCleanerBotMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_METHOD_3_B748B2E37617DB4C_OFFSET))(a1, a2);
		}
	};
}
