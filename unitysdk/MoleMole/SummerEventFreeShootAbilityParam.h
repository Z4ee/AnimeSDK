#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SummerEventWeaponSkillParamBase.h"

namespace System { class String; }

#define MOLEMOLE_SUMMEREVENTFREESHOOTABILITYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x10BF8C50)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventFreeShootAbilityParam_TypeDefinitionIndex = 50317;

	class SummerEventFreeShootAbilityParam : public ::MoleMole::SummerEventWeaponSkillParamBase
	{
	public:
		::System::String* AbilityName; // 0x50
		::System::String* ModifierName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTFREESHOOTABILITYPARAM__CTOR_OFFSET))(this);
		}
	};
}
