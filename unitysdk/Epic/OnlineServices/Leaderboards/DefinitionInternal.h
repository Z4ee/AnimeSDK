#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/LeaderboardAggregation.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Leaderboards { class Definition; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AB5300)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_AGGREGATION_OFFSET UNITYSDK_OFFSET(0x7A7FB0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x3AB5160)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x3AB4D90)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x3AB5050)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_STATNAME_OFFSET UNITYSDK_OFFSET(0x3AB4EF0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AB5280)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_AGGREGATION_OFFSET UNITYSDK_OFFSET(0x38ECC60)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x3AB51E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_LEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x3AB4E40)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AB5270)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x3AB50D0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x3AB4FA0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int DefinitionInternal_TypeDefinitionIndex = 43681;

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

		::System::Void set_LeaderboardId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_LEADERBOARDID_OFFSET))(this, a1);
		}

		::System::String* get_StatName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_STATNAME_OFFSET))(this);
		}

		::System::Void set_StatName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_STATNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Leaderboards::LeaderboardAggregation get_Aggregation()
		{
			return ((::Epic::OnlineServices::Leaderboards::LeaderboardAggregation(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_AGGREGATION_OFFSET))(this);
		}

		::System::Void set_Aggregation(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_AGGREGATION_OFFSET))(this, a1);
		}

		/*
		::System::Nullable_1<::System::DateTimeOffset> get_StartTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_STARTTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_STARTTIME_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Nullable_1<::System::DateTimeOffset> get_EndTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_GET_ENDTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_ENDTIME_OFFSET))(this, a1);
		}
		*/

		::System::Void Set(::Epic::OnlineServices::Leaderboards::Definition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::Definition*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_DEFINITIONINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
