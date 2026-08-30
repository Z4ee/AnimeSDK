#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMJUMPBAKEDCONFIG_METHOD_2_7E13B71461BF9501_OFFSET UNITYSDK_OFFSET(0x1D0ECBF0)
#define RPG_GAMECORE_FIVEDIMJUMPBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0ED410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimJumpBakedConfig_TypeDefinitionIndex = 16477;

	class FiveDimJumpBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MaxFallSpeed; // 0x10
		::System::Single JumpInitSpeed; // 0x14
		::System::Single JumpGravity; // 0x18
		::System::Single FallGravity; // 0x1C
		::System::Single RealJumpHeight; // 0x20
		::System::Single RealDoubleJumpHeight; // 0x24
		::System::Single AirAcc; // 0x28
		::System::Single AirBrakeAcc; // 0x2C
		::System::Single AirMaxBrakeAcc; // 0x30
		::System::Single PeakThreshold; // 0x34
		::System::Single PeakAirAcc; // 0x38
		::System::Single PeakMaxSpeed; // 0x3C
		::System::Single PeakGravity; // 0x40
		::System::Single RoofPushExtraThreshold; // 0x44
		::System::Single HeavyLandingSpeedThreshold; // 0x48
		::System::Single JumpCutExemptSpeed; // 0x4C
		::System::Single JumpCutMinHeight; // 0x50
		::System::Single TrampolineJumpSpeed; // 0x54
		::System::Single DoubleJumpInitSpeedY; // 0x58
		::System::Single DoubleJumpCutExemptSpeed; // 0x5C
		::System::Single MusicJumpInitSpeed; // 0x60
		::System::Single MusicAirJumpInitSpeed; // 0x64
		::System::Single TrampolineMusicJumpSpeed; // 0x68
		::System::Single MusicFallBaseSpeed; // 0x6C
		::System::Single MusicFallMaxAdditionSpeed; // 0x70
		::System::Single MusicFallDecayAcc; // 0x74
		::System::Single MusicFallAirAcc; // 0x78
		::System::Single MusicFallBrakeAcc; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMJUMPBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7E13B71461BF9501(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimJumpBakedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimJumpBakedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMJUMPBAKEDCONFIG_METHOD_2_7E13B71461BF9501_OFFSET))(a1, a2);
		}
	};
}
