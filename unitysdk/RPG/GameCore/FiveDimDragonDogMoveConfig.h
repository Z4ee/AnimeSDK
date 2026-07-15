#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_METHOD_3_740575E7F4D0A6C3_OFFSET UNITYSDK_OFFSET(0x1BA91DB0)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_METHOD_3_F89D1E9D77C8226F_OFFSET UNITYSDK_OFFSET(0x1BA91D20)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA91D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDragonDogMoveConfig_TypeDefinitionIndex = 16045;

	class FiveDimDragonDogMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector2 DetectionCube; // 0x40
		::RPG::MVector2 DetectionOffset; // 0x48
		::System::Single FallGravityMultiplier; // 0x50
		::System::Single MaxFallSpeedMultiplier; // 0x54
		::System::Single LandingDuration; // 0x58
		::System::Single LandEventMinFallDistance; // 0x5C
		::System::Single HitRecoverDuration; // 0x60
		::System::Single PlayerCatchUpDistance; // 0x64
		::System::Single TargetCatchUpDistance; // 0x68
		::System::Single ObstacleDetectDistance; // 0x6C
		::System::String* OnFallEvent; // 0x70
		::System::String* OnLandEvent; // 0x78
		::System::String* OnRecoverEvent; // 0x80
		::System::String* OnMoveEvent; // 0x88
		::System::String* OnStopEvent; // 0x90
		::System::String* OnTurnEvent; // 0x98
		::System::String* OnHitEvent; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F89D1E9D77C8226F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDragonDogMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDragonDogMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_METHOD_3_F89D1E9D77C8226F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_740575E7F4D0A6C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDragonDogMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDragonDogMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_METHOD_3_740575E7F4D0A6C3_OFFSET))(a1, a2);
		}
	};
}
