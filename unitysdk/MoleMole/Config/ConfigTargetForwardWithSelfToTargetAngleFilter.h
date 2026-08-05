#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_CONFIGTARGETFORWARDWITHSELFTOTARGETANGLEFILTER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0x16C53880)
#define MOLEMOLE_CONFIG_CONFIGTARGETFORWARDWITHSELFTOTARGETANGLEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16C53E50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTargetForwardWithSelfToTargetAngleFilter_TypeDefinitionIndex = 67162;

	class ConfigTargetForwardWithSelfToTargetAngleFilter : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::System::Single AngleMin; // 0x18
		::System::Single AngleMax; // 0x1C
		::System::Boolean IsSymmetry; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETFORWARDWITHSELFTOTARGETANGLEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETFORWARDWITHSELFTOTARGETANGLEFILTER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}
	};
}
