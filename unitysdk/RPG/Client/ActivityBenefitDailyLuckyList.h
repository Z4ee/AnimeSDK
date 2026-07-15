#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityBenefitLuckyKoiInfo.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitDailyLuckyList_TypeDefinitionIndex = 58655;

	struct alignas(8) ActivityBenefitDailyLuckyList
	{
		::System::Collections::Generic::List_1<::RPG::Client::ActivityBenefitLuckyKoiInfo>* LuckyList; // 0x10
		::System::UInt32 Date; // 0x18
	};
}
