#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntitySkillType_TypeDefinitionIndex = 91053;

	enum class EntitySkillType : ::System::Int32
	{
		AssaultAid = 16,
		Rush = 1,
		QTE = 6,
		ParryAid = 15,
		Evade = 7,
		ExSp = 5,
		Branch = 3,
		ChainAttack = 22,
		EvadeAid = 17,
		CommonAid = 19,
		MaxCount = 23,
		None = 20,
		BeHitAid = 14,
		RandomSkill = 8,
		Cannon = 9,
		Shield = 10,
		Normal = 0,
		Resonate = 11,
		Field = 12,
		NoEnergyPerfectSwitchAid = 18,
		Counter = 2,
		BangbooAidSkill = 21,
		ExQTE = 13,
		Sp = 4,
	};
}
