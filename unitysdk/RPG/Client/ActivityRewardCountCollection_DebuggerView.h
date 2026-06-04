#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityRewardCountCollection; }
namespace RPG::Client { class ActivityRewardCountData; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION_DEBUGGERVIEW_GET_REWARDCOUNTS_OFFSET UNITYSDK_OFFSET(0xB1F8200)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION_DEBUGGERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xB1F81F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardCountCollection_DebuggerView_TypeDefinitionIndex = 57774;

	class ActivityRewardCountCollection_DebuggerView : public ::System::Object
	{
	public:
		::RPG::Client::ActivityRewardCountCollection* _Collection; // 0x10

		::System::Void _ctor(::RPG::Client::ActivityRewardCountCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRewardCountCollection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION_DEBUGGERVIEW__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::ICollection_1<::RPG::Client::ActivityRewardCountData*>* get_RewardCounts()
		{
			return ((::System::Collections::Generic::ICollection_1<::RPG::Client::ActivityRewardCountData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION_DEBUGGERVIEW_GET_REWARDCOUNTS_OFFSET))(this);
		}
	};
}
