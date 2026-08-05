#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFORWARDWITHSELFTOTARGETANGLEFILTER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0x1B7EA460)
#define MOLEMOLE_CONFIG_CONFIGENTITYFORWARDWITHSELFTOTARGETANGLEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EAA30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityForwardWithSelfToTargetAngleFilter_TypeDefinitionIndex = 55416;

	class ConfigEntityForwardWithSelfToTargetAngleFilter : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::System::Single AngleMin; // 0x18
		::System::Single AngleMax; // 0x1C
		::System::Boolean IsSymmetry; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFORWARDWITHSELFTOTARGETANGLEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFORWARDWITHSELFTOTARGETANGLEFILTER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}
	};
}
