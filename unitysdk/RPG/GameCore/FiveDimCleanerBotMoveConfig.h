#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_METHOD_3_B748B2E37617DB4C_OFFSET UNITYSDK_OFFSET(0x188FA020)
#define RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_METHOD_3_E8EAC7A856CCC258_OFFSET UNITYSDK_OFFSET(0x188F9F90)
#define RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188F9FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCleanerBotMoveConfig_TypeDefinitionIndex = 15809;

	class FiveDimCleanerBotMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::Single FallGravityMultiplier; // 0x40
		::System::Single MaxFallSpeedMultiplier; // 0x44
		::System::Single FallDuration; // 0x48
		::RPG::GameCore::FloatCurve* FallCurve; // 0x50
		::System::Single DefaultFallSpeed; // 0x58
		::System::Single LandingDuration; // 0x5C
		::System::Single LowFallThreshold; // 0x60
		::System::String* OnLowFallEvent; // 0x68
		::System::String* OnLowLandEvent; // 0x70
		::System::String* OnFallEvent; // 0x78
		::System::String* OnLandEvent; // 0x80
		::System::String* OnRecoverEvent; // 0x88
		::System::String* OnBumpEvent; // 0x90
		::System::String* OnSteppedEvent; // 0x98
		::System::String* OnLeaveEvent; // 0xA0
		::System::String* OnBounceEvent; // 0xA8
		::System::String* OnMoveLeftEvent; // 0xB0
		::System::String* OnMoveRightEvent; // 0xB8
		::System::String* MoveAudioEvent; // 0xC0
		::System::String* MoveStopAudioEvent; // 0xC8
		::System::String* MoveOnWaterAudioEvent; // 0xD0
		::System::String* MoveStopOnWaterAudioEvent; // 0xD8
		::System::String* MoveHitEvent; // 0xE0
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* MoveTrailEffects; // 0xE8
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* FadeOutEffects; // 0xF0
		::System::Boolean EnableTrampoline; // 0xF8
		::System::Boolean OverrideJumpParams; // 0xF9
		::System::Single TrampolineJumpHeight; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8EAC7A856CCC258(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCleanerBotMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCleanerBotMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_METHOD_3_E8EAC7A856CCC258_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B748B2E37617DB4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCleanerBotMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCleanerBotMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_METHOD_3_B748B2E37617DB4C_OFFSET))(a1, a2);
		}
	};
}
