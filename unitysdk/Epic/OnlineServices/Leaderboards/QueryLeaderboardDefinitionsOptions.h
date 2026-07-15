#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1C2AEE20)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2AEE50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1C2AEDF0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1C2AEE40)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2AEE60)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1C2AEE10)
#define EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2AEE70)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int QueryLeaderboardDefinitionsOptions_TypeDefinitionIndex = 43706;

	class QueryLeaderboardDefinitionsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::Nullable_1<::System::DateTimeOffset> _StartTime_k__BackingField; // 0x18
		::System::Nullable_1<::System::DateTimeOffset> _EndTime_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_StartTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS_SET_STARTTIME_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_EndTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS_SET_ENDTIME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
