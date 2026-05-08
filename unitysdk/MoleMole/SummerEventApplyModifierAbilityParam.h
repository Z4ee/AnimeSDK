#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SummerEventWeaponSkillParamBase.h"

namespace System { class String; }

#define MOLEMOLE_SUMMEREVENTAPPLYMODIFIERABILITYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x13876300)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventApplyModifierAbilityParam_TypeDefinitionIndex = 43501;

	class SummerEventApplyModifierAbilityParam : public ::MoleMole::SummerEventWeaponSkillParamBase
	{
	public:
		::System::String* AbilityName; // 0x50
		::System::String* ModifierName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTAPPLYMODIFIERABILITYPARAM__CTOR_OFFSET))(this);
		}
	};
}
