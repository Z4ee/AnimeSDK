#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro_LiteralDate_Kind.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class String; }

#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DATEKIND_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x20F9F30)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x20F9F80)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAY_OFFSET UNITYSDK_OFFSET(0x20F9E40)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x20FA050)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MILLISECOND_OFFSET UNITYSDK_OFFSET(0x20FA090)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x20FA0E0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x20FA120)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x20FA130)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x20FA170)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x20F9E50)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET__DATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x20FA340)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_SET_DATEKIND_OFFSET UNITYSDK_OFFSET(0x29130)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x20FA330)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x20FA1F0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x20FA260)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x20FA2B0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20FA1B0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9E30)

namespace RPG::Client
{
	inline static constexpr unsigned int DateTimePro_LiteralDate_TypeDefinitionIndex = 9494;

	struct alignas(8) DateTimePro_LiteralDate
	{
		::RPG::Client::DateTimePro_LiteralDate_Kind _DateKind_k__BackingField; // 0x10
		::System::DateTime _DateTime; // 0x18

		/*
		::System::Void _ctor(::RPG::Client::DateTimePro time, ::RPG::Client::DateTimePro_LiteralDate_Kind kind)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro_LiteralDate_Kind))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE__CTOR_OFFSET))(this, time, kind);
		}
		*/

		::System::Int32 get_Day()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAY_OFFSET))(this);
		}

		::System::Int32 get_Year()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_YEAR_OFFSET))(this);
		}

		::System::DayOfWeek get_DayOfWeek()
		{
			return ((::System::DayOfWeek(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAYOFWEEK_OFFSET))(this);
		}

		::System::Int32 get_DayOfYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAYOFYEAR_OFFSET))(this);
		}

		::System::Int32 get_Hour()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_HOUR_OFFSET))(this);
		}

		::System::Int32 get_Millisecond()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MILLISECOND_OFFSET))(this);
		}

		::System::Int32 get_Minute()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MINUTE_OFFSET))(this);
		}

		::System::Int32 get_Month()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MONTH_OFFSET))(this);
		}

		::System::Int32 get_Second()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_SECOND_OFFSET))(this);
		}

		/*
		::System::TimeSpan get_TimeOfDay()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_TIMEOFDAY_OFFSET))(this);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_1_OFFSET))(this, format);
		}

		::System::String* ToString_2(::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_2_OFFSET))(this, provider);
		}

		::System::String* ToString_3(::System::String* format, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_3_OFFSET))(this, format, provider);
		}

		/*
		::RPG::Client::DateTimePro ToDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TODATETIME_OFFSET))(this);
		}
		*/

		::RPG::Client::DateTimePro_LiteralDate_Kind get_DateKind()
		{
			return ((::RPG::Client::DateTimePro_LiteralDate_Kind(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DATEKIND_OFFSET))(this);
		}

		::System::Void set_DateKind(::RPG::Client::DateTimePro_LiteralDate_Kind value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro_LiteralDate_Kind))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_SET_DATEKIND_OFFSET))(this, value);
		}

		/*
		::System::DateTimeOffset get__DateTimeOffset()
		{
			return ((::System::DateTimeOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET__DATETIMEOFFSET_OFFSET))(this);
		}
		*/
	};
}
