#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SummerEventWeaponSkillParamBase.h"

namespace System { class String; }

#define MOLEMOLE_SUMMEREVENTAPPLYMODIFIERABILITYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1817C560)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventApplyModifierAbilityParam_TypeDefinitionIndex = 50469;

	class SummerEventApplyModifierAbilityParam : public ::MoleMole::SummerEventWeaponSkillParamBase
	{
	public:
		::System::String* ModifierName; // 0x50
		::System::String* AbilityName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTAPPLYMODIFIERABILITYPARAM__CTOR_OFFSET))(this);
		}
	};
}
