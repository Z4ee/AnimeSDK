#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntitySkillType_TypeDefinitionIndex = 43200;

	enum class EntitySkillType : ::System::Int32
	{
		ParryAid = 15,
		BeHitAid = 14,
		Shield = 10,
		Rush = 1,
		MaxCount = 23,
		RandomSkill = 8,
		ChainAttack = 22,
		Resonate = 11,
		AssaultAid = 16,
		BangbooAidSkill = 21,
		Evade = 7,
		Field = 12,
		EvadeAid = 17,
		ExQTE = 13,
		CommonAid = 19,
		Cannon = 9,
		QTE = 6,
		ExSp = 5,
		Normal = 0,
		None = 20,
		NoEnergyPerfectSwitchAid = 18,
		Sp = 4,
		Counter = 2,
		Branch = 3,
	};
}
