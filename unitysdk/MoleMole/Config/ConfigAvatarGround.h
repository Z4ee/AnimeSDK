#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGAVATARGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x10CFADC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAvatarGround_TypeDefinitionIndex = 73091;

	class ConfigAvatarGround : public ::System::Object
	{
	public:
		::System::Single EnvironmentFeatureQueryRange; // 0x10
		::System::Single GroundSlopeDistThreshold; // 0x14
		::System::Single EnvironmentFeatureModifyDistanceMax; // 0x18
		::UnityEngine::Vector3 SlopeVerticalVelocityMin; // 0x1C
		::System::Single GravityInitSpeed; // 0x28
		::System::Single GroundSlopeAngleThreshold; // 0x2C
		::System::Single GroundHeightThreshold; // 0x30
		::System::Single GroundFootStepVelocityThreshold; // 0x34
		::UnityEngine::Vector3 GroundVelocityMin; // 0x38
		::System::Single GroundFootStepAngleThreshold; // 0x44
		::System::Single SlopeVerticalVelocityFactor; // 0x48
		::System::Single GroundHeightThresholdLowAltitude; // 0x4C
		::System::Single FallOnWallHeightThreshold; // 0x50
		::System::Single FallOnWallPullOutSpeed; // 0x54
		::System::Single GarvityAccelerated; // 0x58
		::System::Single FallOnWallAngleThreshold; // 0x5C
		::System::Boolean GroundFootStepHighSpeed; // 0x60
		::System::Boolean EnableEnvironmentFeature; // 0x61
		::System::Boolean EnablePosConstraint; // 0x62
		::System::Single SphereCastRadius; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARGROUND__CTOR_OFFSET))(this);
		}
	};
}
