#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SummerEventWeaponSkillParamBase.h"

namespace System { class String; }

#define MOLEMOLE_SUMMEREVENTTRIGGERABILITYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x14A23380)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventTriggerAbilityParam_TypeDefinitionIndex = 65298;

	class SummerEventTriggerAbilityParam : public ::MoleMole::SummerEventWeaponSkillParamBase
	{
	public:
		::System::String* TriggeredAbilityName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTTRIGGERABILITYPARAM__CTOR_OFFSET))(this);
		}
	};
}
