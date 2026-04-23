#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/LeaderboardAggregation.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Leaderboards { class Definition; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x44750)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_AGGREGATION_OFFSET UNITYSDK_OFFSET(0x5E00)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x445C0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x441F0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x444B0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_STATNAME_OFFSET UNITYSDK_OFFSET(0x44350)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x446E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_AGGREGATION_OFFSET UNITYSDK_OFFSET(0xBC50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x44640)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x442A0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x446D0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x44530)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x44400)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int DefinitionInternal_TypeDefinitionIndex = 42017;

	struct alignas(8) DefinitionInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LeaderboardId; // 0x18
		::System::IntPtr m_StatName; // 0x20
		::Epic::OnlineServices::Leaderboards::LeaderboardAggregation m_Aggregation; // 0x28
		::System::Int64 m_StartTime; // 0x30
		::System::Int64 m_EndTime; // 0x38

		::System::String* get_LeaderboardId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_LEADERBOARDID_OFFSET))(this);
		}

		::System::Void set_LeaderboardId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_LEADERBOARDID_OFFSET))(this, value);
		}

		::System::String* get_StatName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_STATNAME_OFFSET))(this);
		}

		::System::Void set_StatName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_STATNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Leaderboards::LeaderboardAggregation get_Aggregation()
		{
			return ((::Epic::OnlineServices::Leaderboards::LeaderboardAggregation(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_AGGREGATION_OFFSET))(this);
		}

		::System::Void set_Aggregation(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_AGGREGATION_OFFSET))(this, value);
		}

		/*
		::System::Nullable_1<::System::DateTimeOffset> get_StartTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_STARTTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_STARTTIME_OFFSET))(this, value);
		}
		*/

		/*
		::System::Nullable_1<::System::DateTimeOffset> get_EndTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_ENDTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_ENDTIME_OFFSET))(this, value);
		}
		*/

		::System::Void Set(::Epic::OnlineServices::Leaderboards::Definition* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::Definition*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
