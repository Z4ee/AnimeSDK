#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SpecialDamageTextType_TypeDefinitionIndex = 53526;

	enum class SpecialDamageTextType : ::System::Int32
	{
		Wind = 23,
		HyperCoAttack = 18,
		ExtraElementAbnormal = 15,
		Fire = 9,
		EtherInfectionBreak = 17,
		PerfectCounter = 20,
		Icemist = 3,
		WindCatalyze = 22,
		Elec = 10,
		StrikeShunguang = 19,
		Disorder = 12,
		Icebreak = 7,
		None = 0,
		Strike = 5,
		LifeConversion = 21,
		EtherYixuan = 16,
		Froze = 6,
		Hiisazu = 4,
		Thunderbolt = 2,
		Frostburn = 13,
		Deflagrate = 1,
		TotalizeDamage = 14,
		Ether = 8,
		PartDestroy = 11,
	};
}
