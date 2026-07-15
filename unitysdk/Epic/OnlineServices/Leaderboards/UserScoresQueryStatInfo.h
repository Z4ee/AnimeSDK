#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/LeaderboardAggregation.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/UserScoresQueryStatInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO_GET_AGGREGATION_OFFSET UNITYSDK_OFFSET(0x1C2B0290)
#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO_GET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1C2B0270)
#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1C2B0510)
#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO_SET_AGGREGATION_OFFSET UNITYSDK_OFFSET(0x1C2B02A0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO_SET_OFFSET UNITYSDK_OFFSET(0x1C2B02B0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1C2B0280)
#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B0630)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int UserScoresQueryStatInfo_TypeDefinitionIndex = 43712;

	class UserScoresQueryStatInfo : public ::System::Object
	{
	public:
		::System::String* _StatName_k__BackingField; // 0x10
		::Epic::OnlineServices::Leaderboards::LeaderboardAggregation _Aggregation_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_StatName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO_GET_STATNAME_OFFSET))(this);
		}

		::System::Void set_StatName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO_SET_STATNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Leaderboards::LeaderboardAggregation get_Aggregation()
		{
			return ((::Epic::OnlineServices::Leaderboards::LeaderboardAggregation(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO_GET_AGGREGATION_OFFSET))(this);
		}

		::System::Void set_Aggregation(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO_SET_AGGREGATION_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
