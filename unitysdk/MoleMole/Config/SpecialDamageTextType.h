#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SpecialDamageTextType_TypeDefinitionIndex = 89332;

	enum class SpecialDamageTextType : ::System::Int32
	{
		Refringe = 25,
		Wind = 23,
		Frostburn = 13,
		HyperCoAttack = 18,
		Froze = 6,
		Hiisazu = 4,
		Fire = 9,
		Elec = 10,
		Lumen = 24,
		Icemist = 3,
		Ether = 8,
		Deflagrate = 1,
		PartDestroy = 11,
		WindCatalyze = 22,
		StrikeShunguang = 19,
		Thunderbolt = 2,
		EtherInfectionBreak = 17,
		TotalizeDamage = 14,
		Disorder = 12,
		LifeConversion = 21,
		None = 0,
		Luminize = 26,
		Strike = 5,
		ExtraElementAbnormal = 15,
		Icebreak = 7,
		PerfectCounter = 20,
		EtherYixuan = 16,
	};
}
