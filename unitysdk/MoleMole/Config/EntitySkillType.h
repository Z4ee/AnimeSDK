#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntitySkillType_TypeDefinitionIndex = 67365;

	enum class EntitySkillType : ::System::Int32
	{
		RandomSkill = 8,
		CommonAid = 19,
		MaxCount = 23,
		Branch = 3,
		NoEnergyPerfectSwitchAid = 18,
		EvadeAid = 17,
		Shield = 10,
		Field = 12,
		None = 20,
		Normal = 0,
		QTE = 6,
		Sp = 4,
		BeHitAid = 14,
		ExSp = 5,
		Evade = 7,
		Cannon = 9,
		Rush = 1,
		Counter = 2,
		AssaultAid = 16,
		ChainAttack = 22,
		Resonate = 11,
		ExQTE = 13,
		ParryAid = 15,
		BangbooAidSkill = 21,
	};
}
