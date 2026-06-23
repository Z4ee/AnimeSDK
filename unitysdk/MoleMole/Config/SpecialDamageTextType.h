#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SpecialDamageTextType_TypeDefinitionIndex = 50354;

	enum class SpecialDamageTextType : ::System::Int32
	{
		Hiisazu = 4,
		Wind = 23,
		Froze = 6,
		EtherInfectionBreak = 17,
		TotalizeDamage = 14,
		LifeConversion = 21,
		HyperCoAttack = 18,
		Lumen = 24,
		Disorder = 12,
		Frostburn = 13,
		ExtraElementAbnormal = 15,
		Deflagrate = 1,
		Icebreak = 7,
		PerfectCounter = 20,
		Ether = 8,
		Elec = 10,
		Icemist = 3,
		Strike = 5,
		StrikeShunguang = 19,
		PartDestroy = 11,
		Fire = 9,
		WindCatalyze = 22,
		EtherYixuan = 16,
		Thunderbolt = 2,
		None = 0,
	};
}
