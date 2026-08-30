#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/DefinitionInternal.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/LeaderboardAggregation.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_AGGREGATION_OFFSET UNITYSDK_OFFSET(0x1DFE44A0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1DFE44F0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x1DFE4460)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1DFE44C0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1DFE4480)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_1_OFFSET UNITYSDK_OFFSET(0x1DFE4C00)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_AGGREGATION_OFFSET UNITYSDK_OFFSET(0x1DFE44B0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1DFE4510)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x1DFE4470)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_OFFSET UNITYSDK_OFFSET(0x1DFE4520)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1DFE44E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1DFE4490)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE4D40)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int Definition_TypeDefinitionIndex = 45862;

	class Definition : public ::System::Object
	{
	public:
		::System::String* _LeaderboardId_k__BackingField; // 0x10
		::System::String* _StatName_k__BackingField; // 0x18
		::System::Nullable_1<::System::DateTimeOffset> _EndTime_k__BackingField; // 0x20
		::Epic::OnlineServices::Leaderboards::LeaderboardAggregation _Aggregation_k__BackingField; // 0x38
		::System::Nullable_1<::System::DateTimeOffset> _StartTime_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION__CTOR_OFFSET))(this);
		}

		::System::String* get_LeaderboardId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_LEADERBOARDID_OFFSET))(this);
		}

		::System::Void set_LeaderboardId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_LEADERBOARDID_OFFSET))(this, a1);
		}

		::System::String* get_StatName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_STATNAME_OFFSET))(this);
		}

		::System::Void set_StatName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_STATNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Leaderboards::LeaderboardAggregation get_Aggregation()
		{
			return ((::Epic::OnlineServices::Leaderboards::LeaderboardAggregation(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_AGGREGATION_OFFSET))(this);
		}

		::System::Void set_Aggregation(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_AGGREGATION_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_StartTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_STARTTIME_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_EndTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_ENDTIME_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Leaderboards::DefinitionInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Leaderboards::DefinitionInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITION_SET_1_OFFSET))(this, a1);
		}
	};
}
