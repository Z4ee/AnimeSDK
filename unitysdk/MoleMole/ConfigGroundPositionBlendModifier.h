#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseConfigEnvironmentFeatureModifier.h"

#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x159FE830)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGroundPositionBlendModifier_TypeDefinitionIndex = 76603;

	class ConfigGroundPositionBlendModifier : public ::MoleMole::BaseConfigEnvironmentFeatureModifier
	{
	public:
		::System::Single RefRootMotionVelocityMagnitude; // 0x18
		::System::Boolean EnableGravityWhenSmooth; // 0x1C
		::System::Single SmoothVelocityRangeMax; // 0x20
		::System::Single SmoothVelocityRangeMin; // 0x24
		::System::Single RefRootMotionVelocityRatio; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER__CTOR_OFFSET))(this);
		}
	};
}
