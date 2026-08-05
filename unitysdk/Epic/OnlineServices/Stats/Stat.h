#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Stats/StatInternal.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_STAT_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1D27AA50)
#define EPIC_ONLINESERVICES_STATS_STAT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D27AA00)
#define EPIC_ONLINESERVICES_STATS_STAT_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1D27AA20)
#define EPIC_ONLINESERVICES_STATS_STAT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D27AA80)
#define EPIC_ONLINESERVICES_STATS_STAT_SET_1_OFFSET UNITYSDK_OFFSET(0x1D27AE10)
#define EPIC_ONLINESERVICES_STATS_STAT_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1D27AA70)
#define EPIC_ONLINESERVICES_STATS_STAT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D27AA10)
#define EPIC_ONLINESERVICES_STATS_STAT_SET_OFFSET UNITYSDK_OFFSET(0x1D27AAA0)
#define EPIC_ONLINESERVICES_STATS_STAT_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1D27AA40)
#define EPIC_ONLINESERVICES_STATS_STAT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D27AA90)
#define EPIC_ONLINESERVICES_STATS_STAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27AF50)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int Stat_TypeDefinitionIndex = 35664;

	class Stat : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Nullable_1<::System::DateTimeOffset> _StartTime_k__BackingField; // 0x18
		::System::Nullable_1<::System::DateTimeOffset> _EndTime_k__BackingField; // 0x30
		::System::Int32 _Value_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_SET_NAME_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_StartTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_SET_STARTTIME_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_EndTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_SET_ENDTIME_OFFSET))(this, value);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Stats::StatInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Stats::StatInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_SET_1_OFFSET))(this, other);
		}
	};
}
