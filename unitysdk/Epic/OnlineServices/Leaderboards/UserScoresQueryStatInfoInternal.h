#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/LeaderboardAggregation.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Leaderboards { class UserScoresQueryStatInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4AF90)
#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_GET_AGGREGATION_OFFSET UNITYSDK_OFFSET(0x6EE0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_GET_STATNAME_OFFSET UNITYSDK_OFFSET(0x4AD50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4AF80)
#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_SET_AGGREGATION_OFFSET UNITYSDK_OFFSET(0x2A90)
#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x4AEB0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x4AE00)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int UserScoresQueryStatInfoInternal_TypeDefinitionIndex = 42852;

	struct alignas(8) UserScoresQueryStatInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_StatName; // 0x18
		::Epic::OnlineServices::Leaderboards::LeaderboardAggregation m_Aggregation; // 0x20

		::System::String* get_StatName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_GET_STATNAME_OFFSET))(this);
		}

		::System::Void set_StatName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_SET_STATNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Leaderboards::LeaderboardAggregation get_Aggregation()
		{
			return ((::Epic::OnlineServices::Leaderboards::LeaderboardAggregation(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_GET_AGGREGATION_OFFSET))(this);
		}

		::System::Void set_Aggregation(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_SET_AGGREGATION_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_USERSCORESQUERYSTATINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
