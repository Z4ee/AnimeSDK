#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SummerEventWeaponSkillParamBase.h"

namespace System { class String; }

#define MOLEMOLE_SUMMEREVENTFREESHOOTABILITYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17396BC0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventFreeShootAbilityParam_TypeDefinitionIndex = 51845;

	class SummerEventFreeShootAbilityParam : public ::MoleMole::SummerEventWeaponSkillParamBase
	{
	public:
		::System::String* ModifierName; // 0x50
		::System::String* AbilityName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTFREESHOOTABILITYPARAM__CTOR_OFFSET))(this);
		}
	};
}
