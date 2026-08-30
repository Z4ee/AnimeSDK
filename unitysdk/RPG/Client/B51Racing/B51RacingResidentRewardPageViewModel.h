#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CB790)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingResidentRewardPageViewModel_TypeDefinitionIndex = 80722;

	class B51RacingResidentRewardPageViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* QuestIDList; // 0x10
		::System::UInt32 TotalMatchCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
