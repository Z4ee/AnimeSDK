#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateContentParamType_TypeDefinitionIndex = 10189;

	enum class FateContentParamType : ::System::Int32
	{
		Undefine = 0,
		ArcherMagicalEnergy = 1,
		PassPhaseCount = 2,
		RiderBloodFortAndromedaMana = 3,
		PhainonCounter = 4,
		Mar7thMasterID = 5,
		TopazCoin = 6,
		JingliuCostHP = 7,
		JingyuanLayer = 8,
		LancerGaeBolgKillCount = 9,
		SaberAvalonKillCount = 10,
		CustomParam1 = 101,
		CustomParam2 = 102,
		CustomParam3 = 103,
		CustomParam4 = 104,
		CustomParam5 = 105,
		CustomParam6 = 106,
		CustomParam7 = 107,
		CustomParam8 = 108,
		CustomParam9 = 109,
		CustomParam10 = 110,
	};
}
