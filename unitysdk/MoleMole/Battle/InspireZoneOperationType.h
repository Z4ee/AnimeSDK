#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int InspireZoneOperationType_TypeDefinitionIndex = 67614;

	enum class InspireZoneOperationType : ::System::Int32
	{
		CounterHitOther = 1,
		CatalysisNormal = 22,
		ParryAid = 12,
		ElementAbnormalElite = 17,
		ElementAbnormalNormal = 16,
		Exhausted = 9,
		CatalysisBoss = 24,
		EvadeAid = 13,
		DisorderBoss = 21,
		QTE_2 = 5,
		PartDestroy = 11,
		CatalysisElite = 23,
		ElementAbnormalBoss = 18,
		CommonAid = 14,
		StunDestroy = 8,
		ElementAbnormal = 10,
		DisorderElite = 20,
		BeHitAid = 3,
		Disorder = 15,
		None = 0,
		DisorderNormal = 19,
		QTE_1 = 4,
		DodgeDummySuccess = 2,
		QTE_3 = 6,
	};
}
