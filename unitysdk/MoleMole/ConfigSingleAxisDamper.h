#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseConfigEnvironmentFeatureModifier.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"

#define MOLEMOLE_CONFIGSINGLEAXISDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x161AEBE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigSingleAxisDamper_TypeDefinitionIndex = 57251;

	class ConfigSingleAxisDamper : public ::MoleMole::BaseConfigEnvironmentFeatureModifier
	{
	public:
		::System::Single RefRootMotionVelocityMagnitude; // 0x18
		::System::Single RefRootMotionVelocityRatio; // 0x1C
		::MoleMole::Interaction::AxisSign LocalAxis; // 0x20
		::MoleMole::Battle::ProceduralAnimDamperParam DamperParams; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSINGLEAXISDAMPER__CTOR_OFFSET))(this);
		}
	};
}
