#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Stats { class Stat; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D330)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1D180)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CF10)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1D070)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D290)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1D2B0)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1D200)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1CFC0)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1D2A0)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1D0F0)
#define EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xB430)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int StatInternal_TypeDefinitionIndex = 45070;

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

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_NAME_OFFSET))(this, a1);
		}

		/*
		::System::Nullable_1<::System::DateTimeOffset> get_StartTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_STARTTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_STARTTIME_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Nullable_1<::System::DateTimeOffset> get_EndTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_ENDTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_ENDTIME_OFFSET))(this, a1);
		}
		*/

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Stats::Stat* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::Stat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STATINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
