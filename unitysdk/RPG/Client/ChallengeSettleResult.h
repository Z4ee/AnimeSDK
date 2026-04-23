#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGESETTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xD5340)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeSettleResult_TypeDefinitionIndex = 58124;

	struct alignas(8) ChallengeSettleResult
	{
		::System::UInt32 ChanllengeID; // 0x10
		::System::Boolean IsWin; // 0x14
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* RewardItemList; // 0x18

		::System::Void _ctor(::System::UInt32 challengeID, ::System::Boolean isWin, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* rewardItemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLERESULT__CTOR_OFFSET))(this, challengeID, isWin, rewardItemList);
		}
	};
}
