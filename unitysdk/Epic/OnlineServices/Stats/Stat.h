#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Stats/StatInternal.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_STAT_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xA0F7240)
#define EPIC_ONLINESERVICES_STATS_STAT_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA0F71F0)
#define EPIC_ONLINESERVICES_STATS_STAT_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xA0F7210)
#define EPIC_ONLINESERVICES_STATS_STAT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0F7270)
#define EPIC_ONLINESERVICES_STATS_STAT_SET_1_OFFSET UNITYSDK_OFFSET(0xA0F77B0)
#define EPIC_ONLINESERVICES_STATS_STAT_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xA0F7260)
#define EPIC_ONLINESERVICES_STATS_STAT_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA0F7200)
#define EPIC_ONLINESERVICES_STATS_STAT_SET_OFFSET UNITYSDK_OFFSET(0xA0F7290)
#define EPIC_ONLINESERVICES_STATS_STAT_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xA0F7230)
#define EPIC_ONLINESERVICES_STATS_STAT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0F7280)
#define EPIC_ONLINESERVICES_STATS_STAT__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F78E0)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int Stat_TypeDefinitionIndex = 42026;

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

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_SET_NAME_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_StartTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_StartTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_SET_STARTTIME_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_EndTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_SET_ENDTIME_OFFSET))(this, a1);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Stats::StatInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Stats::StatInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_STAT_SET_1_OFFSET))(this, a1);
		}
	};
}
