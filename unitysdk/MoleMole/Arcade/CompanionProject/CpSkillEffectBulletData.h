#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/CompanionProject/CpSkillEffectData.h"

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTBULLETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ED0A0)

namespace MoleMole::Arcade::CompanionProject
{
	inline static constexpr unsigned int CpSkillEffectBulletData_TypeDefinitionIndex = 92751;

	class CpSkillEffectBulletData : public ::MoleMole::Arcade::CompanionProject::CpSkillEffectData
	{
	public:
		::System::Int32 bullet; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTBULLETDATA__CTOR_OFFSET))(this);
		}
	};
}
