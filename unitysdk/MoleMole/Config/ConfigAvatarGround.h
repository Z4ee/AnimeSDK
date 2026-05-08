#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGAVATARGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0xED0FDF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAvatarGround_TypeDefinitionIndex = 71275;

	class ConfigAvatarGround : public ::System::Object
	{
	public:
		::System::Single EnvironmentFeatureModifyDistanceMax; // 0x10
		::UnityEngine::Vector3 SlopeVerticalVelocityMin; // 0x14
		::System::Single GarvityAccelerated; // 0x20
		::System::Single GroundHeightThreshold; // 0x24
		::System::Single GroundSlopeDistThreshold; // 0x28
		::System::Boolean EnablePosConstraint; // 0x2C
		::System::Boolean GroundFootStepHighSpeed; // 0x2D
		::System::Boolean EnableEnvironmentFeature; // 0x2E
		::System::Single FallOnWallHeightThreshold; // 0x30
		::UnityEngine::Vector3 GroundVelocityMin; // 0x34
		::System::Single GravityInitSpeed; // 0x40
		::System::Single FallOnWallPullOutSpeed; // 0x44
		::System::Single SlopeVerticalVelocityFactor; // 0x48
		::System::Single GroundFootStepVelocityThreshold; // 0x4C
		::System::Single GroundSlopeAngleThreshold; // 0x50
		::System::Single GroundHeightThresholdLowAltitude; // 0x54
		::System::Single FallOnWallAngleThreshold; // 0x58
		::System::Single GroundFootStepAngleThreshold; // 0x5C
		::System::Single EnvironmentFeatureQueryRange; // 0x60
		::System::Single SphereCastRadius; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARGROUND__CTOR_OFFSET))(this);
		}
	};
}
