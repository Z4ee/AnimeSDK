#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0BAFB6409B3D15A3;
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTWEEKLYREWARDCLAIMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x98E7390)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightWeeklyRewardClaimEvent_TypeDefinitionIndex = 53198;

	class GridFightWeeklyRewardClaimEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ExceedItemDisplayDatas; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ClaimedItemDisplayDatas; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* ExceedLimitScoreRanks; // 0x20

		::System::Void _ctor(::Class_1_0BAFB6409B3D15A3* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0BAFB6409B3D15A3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYREWARDCLAIMEVENT__CTOR_OFFSET))(this, rsp);
		}
	};
}
