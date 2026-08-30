#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro_LiteralDate_Kind.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class String; }

#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DATEKIND_OFFSET UNITYSDK_OFFSET(0x19050)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x3C9F570)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x3C9F5C0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAY_OFFSET UNITYSDK_OFFSET(0x3C9F480)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x3C9F690)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MILLISECOND_OFFSET UNITYSDK_OFFSET(0x3C9F6D0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x3C9F720)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x3C9F760)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x3C9F890)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x3C9F8D0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x3C9F490)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET__DATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x3C9FAA0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_SET_DATEKIND_OFFSET UNITYSDK_OFFSET(0x18EB0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x3C9FA90)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3C9F950)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x3C9F9C0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x3C9FA10)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C9F910)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x3C9F470)

namespace RPG::Client
{
	inline static constexpr unsigned int DateTimePro_LiteralDate_TypeDefinitionIndex = 34597;

	struct alignas(8) DateTimePro_LiteralDate
	{
		::RPG::Client::DateTimePro_LiteralDate_Kind _DateKind_k__BackingField; // 0x10
		::System::DateTime _DateTime; // 0x18

		/*
		::System::Void _ctor(::RPG::Client::DateTimePro a1, ::RPG::Client::DateTimePro_LiteralDate_Kind a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro_LiteralDate_Kind))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE__CTOR_OFFSET))(this, a1, a2);
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

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_2_OFFSET))(this, a1);
		}

		::System::String* ToString_3(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_3_OFFSET))(this, a1, a2);
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

		::System::Void set_DateKind(::RPG::Client::DateTimePro_LiteralDate_Kind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro_LiteralDate_Kind))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_SET_DATEKIND_OFFSET))(this, a1);
		}

		/*
		::System::DateTimeOffset get__DateTimeOffset()
		{
			return ((::System::DateTimeOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET__DATETIMEOFFSET_OFFSET))(this);
		}
		*/
	};
}
