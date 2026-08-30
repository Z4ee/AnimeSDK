#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2MODULE_LEVELFINISHDTO__CTOR_OFFSET UNITYSDK_OFFSET(0xD664BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2Module_LevelFinishDto_TypeDefinitionIndex = 66080;

	class MatchThreeV2Module_LevelFinishDto : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ReputationRewardItems; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* StarTargetRewardItems; // 0x18
		::System::Boolean IsReputationIncreased; // 0x20
		::System::UInt32 UnlockedPropID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_LEVELFINISHDTO__CTOR_OFFSET))(this);
		}
	};
}
