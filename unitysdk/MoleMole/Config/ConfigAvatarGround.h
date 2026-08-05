#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGAVATARGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x116F9E50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAvatarGround_TypeDefinitionIndex = 78924;

	class ConfigAvatarGround : public ::System::Object
	{
	public:
		::System::Single GroundSlopeDistThreshold; // 0x10
		::System::Single FallOnWallHeightThreshold; // 0x14
		::System::Single FallOnWallPullOutSpeed; // 0x18
		::System::Single GroundSlopeAngleThreshold; // 0x1C
		::System::Single GravityInitSpeed; // 0x20
		::System::Single GroundHeightThreshold; // 0x24
		::System::Single EnvironmentFeatureQueryRange; // 0x28
		::System::Single GarvityAccelerated; // 0x2C
		::System::Single GroundHeightThresholdLowAltitude; // 0x30
		::System::Single SphereCastRadius; // 0x34
		::System::Single GroundFootStepAngleThreshold; // 0x38
		::UnityEngine::Vector3 SlopeVerticalVelocityMin; // 0x3C
		::System::Single FallOnWallAngleThreshold; // 0x48
		::System::Single GroundFootStepVelocityThreshold; // 0x4C
		::System::Single EnvironmentFeatureModifyDistanceMax; // 0x50
		::System::Single SlopeVerticalVelocityFactor; // 0x54
		::System::Boolean EnablePosConstraint; // 0x58
		::System::Boolean EnableEnvironmentFeature; // 0x59
		::System::Boolean GroundFootStepHighSpeed; // 0x5A
		::UnityEngine::Vector3 GroundVelocityMin; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARGROUND__CTOR_OFFSET))(this);
		}
	};
}
