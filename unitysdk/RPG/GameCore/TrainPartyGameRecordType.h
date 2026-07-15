#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyGameRecordType_TypeDefinitionIndex = 10283;

	enum class TrainPartyGameRecordType : ::System::Int32
	{
		None = 0,
		PassengerStatsExpAdd = 15,
		AddBuildCoin = 26,
		PassengerStatsExpAddZero = 27,
		PassengerStatsExpAddDouble = 29,
		PassengerStatsExpAddDoubleZero = 30,
		ModifyGrid = 31,
		AddCardStep = 32,
		SubCardStep = 33,
		AddStatRatioNextTime = 34,
		SubStatRatioNextTime = 35,
		AddAllStatToTop = 36,
		ModifyGridFail = 37,
	};
}
