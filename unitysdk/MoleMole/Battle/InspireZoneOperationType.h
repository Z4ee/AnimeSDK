#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int InspireZoneOperationType_TypeDefinitionIndex = 57765;

	enum class InspireZoneOperationType : ::System::Int32
	{
		DisorderElite = 20,
		ElementAbnormal = 10,
		Exhausted = 9,
		ElementAbnormalNormal = 16,
		PartDestroy = 11,
		BeHitAid = 3,
		EvadeAid = 13,
		ParryAid = 12,
		Disorder = 15,
		ElementAbnormalElite = 17,
		CatalysisElite = 23,
		CatalysisNormal = 22,
		StunDestroy = 8,
		CounterHitOther = 1,
		QTE_3 = 6,
		CommonAid = 14,
		QTE_2 = 5,
		QTE_1 = 4,
		DisorderNormal = 19,
		None = 0,
		ElementAbnormalBoss = 18,
		DodgeDummySuccess = 2,
		DisorderBoss = 21,
		CatalysisBoss = 24,
	};
}
