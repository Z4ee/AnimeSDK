#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BATTLE_MORPHBALLCONFIG_COPYFROM_OFFSET UNITYSDK_OFFSET(0x150DAE10)
#define MOLEMOLE_BATTLE_MORPHBALLCONFIG_NEW_OFFSET UNITYSDK_OFFSET(0x150DAF30)
#define MOLEMOLE_BATTLE_MORPHBALLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x150DB040)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MorphBallConfig_TypeDefinitionIndex = 72856;

	class MorphBallConfig : public ::System::Object
	{
	public:
		::System::Single fullSlopeAngle; // 0x10
		::System::Single forceToLeanGain; // 0x14
		::System::Single spinRollAngleThreshold; // 0x18
		::System::Single upSlopeControlMaxSpeedScale; // 0x1C
		::System::Single marbleAlignmentAngularSpeed; // 0x20
		::System::Single accelerationDeadZone; // 0x24
		::System::Single ballForwardMaxSpeed; // 0x28
		::System::Single ballControlAirAttenuationRatio; // 0x2C
		::System::Single alignedAngleThreshold; // 0x30
		::System::Single spinRollTorqueDrag; // 0x34
		::System::Single wallBounceness; // 0x38
		::System::Single inputDeadZone; // 0x3C
		::System::Single ballAcceleration; // 0x40
		::System::Single minimumAlignmentSpeed; // 0x44
		::System::Single marbleToTireSpeedThreshold; // 0x48
		::System::Single tireToMarbleSpeedThreshold; // 0x4C
		::System::Single ballBrakingSpeedRatio; // 0x50
		::System::Single spinRollSpeedThreshold; // 0x54
		::System::Single wallBounceMaxSpeed; // 0x58
		::System::Single downSlopeControlAccelerationScale; // 0x5C
		::System::Single ballControlAttenuationThresholdRatio; // 0x60
		::System::Single spinRollAccelerationRatioThreshold; // 0x64
		::System::Single spinRollTorqueRatio; // 0x68
		::System::Single downSlopeControlMaxSpeedScale; // 0x6C
		::System::Single ballGravity; // 0x70
		::System::Single upSlopeControlAccelerationScale; // 0x74
		::System::Int32 tireLeanAngleAvgWindow; // 0x78
		::System::Single ballGroundDamping; // 0x7C
		::System::Single ballBrakingAcceleration; // 0x80
		::System::Single wallSpinningSpeedRatioThreshold; // 0x84
		::System::Single ballAirDamping; // 0x88
		::System::Single wallAngleThreshold; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::MoleMole::Battle::MorphBallConfig* other)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::MorphBallConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLCONFIG_COPYFROM_OFFSET))(this, other);
		}

		static ::MoleMole::Battle::MorphBallConfig* New(::MoleMole::Battle::MorphBallConfig* other)
		{
			return ((::MoleMole::Battle::MorphBallConfig*(*)(::MoleMole::Battle::MorphBallConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLCONFIG_NEW_OFFSET))(other);
		}
	};
}
