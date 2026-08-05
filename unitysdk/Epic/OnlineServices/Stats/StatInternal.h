#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Stats { class Stat; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99B6E0)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x99B550)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99B2E0)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x99B440)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3FDE90)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x99B670)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x99B5D0)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_NAME_OFFSET UNITYSDK_OFFSET(0x99B390)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x99B660)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x99B4C0)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x86B770)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int StatInternal_TypeDefinitionIndex = 35665;

	struct alignas(8) StatInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Name; // 0x18
		::System::Int64 m_StartTime; // 0x20
		::System::Int64 m_EndTime; // 0x28
		::System::Int32 m_Value; // 0x30

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_NAME_OFFSET))(this, value);
		}

		/*
		::System::Nullable_1<::System::DateTimeOffset> get_StartTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_STARTTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_STARTTIME_OFFSET))(this, value);
		}
		*/

		/*
		::System::Nullable_1<::System::DateTimeOffset> get_EndTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_ENDTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_ENDTIME_OFFSET))(this, value);
		}
		*/

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Stats::Stat* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::Stat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
