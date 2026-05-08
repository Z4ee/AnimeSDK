#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_170BA2BD424DB71A.h"
#include "unitysdk/Enum_3_A966D4F4961B4B3C.h"
#include "unitysdk/MoleMole/Arcade/CompanionProject/CpSkillEffectData.h"

namespace MoleMole::Arcade::CompanionProject { class CpAoeAreaParam; }

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTDAMAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A435680)

namespace MoleMole::Arcade::CompanionProject
{
	inline static constexpr unsigned int CpSkillEffectDamageData_TypeDefinitionIndex = 83555;

	class CpSkillEffectDamageData : public ::MoleMole::Arcade::CompanionProject::CpSkillEffectData
	{
	public:
		::Enum_3_170BA2BD424DB71A selectTargetType; // 0x28
		::MoleMole::Arcade::CompanionProject::CpAoeAreaParam* aoeAreaParam; // 0x30
		::Enum_3_A966D4F4961B4B3C cpDamageInternal; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTDAMAGEDATA__CTOR_OFFSET))(this);
		}
	};
}
