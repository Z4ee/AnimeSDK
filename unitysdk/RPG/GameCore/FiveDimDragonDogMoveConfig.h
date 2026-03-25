#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_METHOD_3_A415EF0C1DFC6730_OFFSET UNITYSDK_OFFSET(0x171EFFB0)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_METHOD_3_AB4C02BAD9BA6684_OFFSET UNITYSDK_OFFSET(0x171F0030)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171F0000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDragonDogMoveConfig_TypeDefinitionIndex = 15301;

	class FiveDimDragonDogMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector2 DetectionCube; // 0x40
		::RPG::MVector2 DetectionOffset; // 0x48
		::System::Single FallGravityMultiplier; // 0x50
		::System::Single MaxFallSpeedMultiplier; // 0x54
		::System::Single LandingDuration; // 0x58
		::System::Single HitRecoverDuration; // 0x5C
		::System::String* OnFallEvent; // 0x60
		::System::String* OnLandEvent; // 0x68
		::System::String* OnRecoverEvent; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A415EF0C1DFC6730(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDragonDogMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDragonDogMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_METHOD_3_A415EF0C1DFC6730_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AB4C02BAD9BA6684(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDragonDogMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDragonDogMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_METHOD_3_AB4C02BAD9BA6684_OFFSET))(a1, a2);
		}
	};
}
