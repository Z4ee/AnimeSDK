#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/DefinitionInternal.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/LeaderboardAggregation.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_AGGREGATION_OFFSET UNITYSDK_OFFSET(0x1AD84A50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1AD84AA0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x1AD84A10)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1AD84A70)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1AD84A30)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_1_OFFSET UNITYSDK_OFFSET(0x1AD84F50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_AGGREGATION_OFFSET UNITYSDK_OFFSET(0x1AD84A60)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1AD84AC0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x1AD84A20)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_OFFSET UNITYSDK_OFFSET(0x1AD84AD0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1AD84A90)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1AD84A40)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD850A0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int Definition_TypeDefinitionIndex = 34235;

	class Definition : public ::System::Object
	{
	public:
		::System::String* _LeaderboardId_k__BackingField; // 0x10
		::System::String* _StatName_k__BackingField; // 0x18
		::Epic::OnlineServices::Leaderboards::LeaderboardAggregation _Aggregation_k__BackingField; // 0x20
		::System::Nullable_1<::System::DateTimeOffset> _EndTime_k__BackingField; // 0x28
		::System::Nullable_1<::System::DateTimeOffset> _StartTime_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION__CTOR_OFFSET))(this);
		}

		::System::String* get_LeaderboardId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_LEADERBOARDID_OFFSET))(this);
		}

		::System::Void set_LeaderboardId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_LEADERBOARDID_OFFSET))(this, value);
		}

		::System::String* get_StatName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_STATNAME_OFFSET))(this);
		}

		::System::Void set_StatName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_STATNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Leaderboards::LeaderboardAggregation get_Aggregation()
		{
			return ((::Epic::OnlineServices::Leaderboards::LeaderboardAggregation(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_AGGREGATION_OFFSET))(this);
		}

		::System::Void set_Aggregation(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_AGGREGATION_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_StartTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_STARTTIME_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_EndTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_ENDTIME_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Leaderboards::DefinitionInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Leaderboards::DefinitionInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_1_OFFSET))(this, other);
		}
	};
}
