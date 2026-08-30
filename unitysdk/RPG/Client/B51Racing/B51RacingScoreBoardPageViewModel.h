#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_41DC55EACF71282F;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CD1A0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingScoreBoardPageViewModel_TypeDefinitionIndex = 80723;

	class B51RacingScoreBoardPageViewModel : public ::System::Object
	{
	public:
		::System::Action* OnClose; // 0x10
		::System::Collections::Generic::List_1<::Class_1_41DC55EACF71282F*>* RankEntries; // 0x18
		::System::Int32 PlayerPrevRank; // 0x20
		::System::Int32 PlayerNewRank; // 0x24
		::System::Boolean IsCycleEnd; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
