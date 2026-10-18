#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IActivityQuestRewardData; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGLIMITEDREWARDPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7A91F0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingLimitedRewardPageViewModel_TypeDefinitionIndex = 82058;

	class B51RacingLimitedRewardPageViewModel : public ::System::Object
	{
	public:
		::System::String* TabGroupRedDotName; // 0x10
		::System::String* TabRedDotName; // 0x18
		::RPG::Client::IActivityQuestRewardData* ActivityRewardData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGLIMITEDREWARDPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
