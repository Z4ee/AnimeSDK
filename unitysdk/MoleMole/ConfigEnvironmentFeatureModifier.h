#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigGroundPositionBlendModifier; }
namespace MoleMole { class ConfigLinearSlopeDamper; }
namespace MoleMole { class ConfigLinearStepStairDamper; }
namespace MoleMole { class ConfigStairVelocityModifier; }

#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x158CB500)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigEnvironmentFeatureModifier_TypeDefinitionIndex = 67535;

	class ConfigEnvironmentFeatureModifier : public ::System::Object
	{
	public:
		::MoleMole::ConfigLinearStepStairDamper* LinearStepStairModifer; // 0x10
		::MoleMole::ConfigStairVelocityModifier* StairVelocityModifier; // 0x18
		::MoleMole::ConfigLinearSlopeDamper* LinearSlopeModifer; // 0x20
		::MoleMole::ConfigGroundPositionBlendModifier* GroundPositionBlendModifier; // 0x28
		::System::Boolean EnableProcess; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER__CTOR_OFFSET))(this);
		}
	};
}
