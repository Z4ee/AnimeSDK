#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int InspireZoneOperationType_TypeDefinitionIndex = 41148;

	enum class InspireZoneOperationType : ::System::Int32
	{
		QTE_2 = 5,
		CounterHitOther = 1,
		Exhausted = 9,
		DisorderElite = 20,
		StunDestroy = 8,
		BeHitAid = 3,
		Disorder = 15,
		QTE_1 = 4,
		ElementAbnormal = 10,
		ElementAbnormalElite = 17,
		DisorderNormal = 19,
		ParryAid = 12,
		PartDestroy = 11,
		CatalysisElite = 23,
		QTE_3 = 6,
		ElementAbnormalBoss = 18,
		DisorderBoss = 21,
		CatalysisNormal = 22,
		CatalysisBoss = 24,
		ElementAbnormalNormal = 16,
		EvadeAid = 13,
		None = 0,
		CommonAid = 14,
		DodgeDummySuccess = 2,
	};
}
