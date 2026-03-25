#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro_LiteralDate.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_HOURMINUTESECOND_OFFSET UNITYSDK_OFFSET(0x9984440)
#define RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_HOURMINUTE_OFFSET UNITYSDK_OFFSET(0x99841A0)
#define RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_YEARMONTHDAYHOURMINUTESECOND_OFFSET UNITYSDK_OFFSET(0x9983B90)
#define RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_YEARMONTHDAYHOURMINUTE_OFFSET UNITYSDK_OFFSET(0x9983640)
#define RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_YEARMONTHDAY_OFFSET UNITYSDK_OFFSET(0x9983290)

namespace RPG::Client
{
	inline static constexpr unsigned int LiteralDateL10nExtensions_TypeDefinitionIndex = 49753;

	class LiteralDateL10nExtensions : public ::System::Object
	{
	public:
		static ::System::String* ToL10nText_YearMonthDay(::RPG::Client::DateTimePro_LiteralDate time)
		{
			return ((::System::String*(*)(::RPG::Client::DateTimePro_LiteralDate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_YEARMONTHDAY_OFFSET))(time);
		}

		static ::System::String* ToL10nText_YearMonthDayHourMinute(::RPG::Client::DateTimePro_LiteralDate time)
		{
			return ((::System::String*(*)(::RPG::Client::DateTimePro_LiteralDate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_YEARMONTHDAYHOURMINUTE_OFFSET))(time);
		}

		static ::System::String* ToL10nText_YearMonthDayHourMinuteSecond(::RPG::Client::DateTimePro_LiteralDate time)
		{
			return ((::System::String*(*)(::RPG::Client::DateTimePro_LiteralDate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_YEARMONTHDAYHOURMINUTESECOND_OFFSET))(time);
		}

		static ::System::String* ToL10nText_HourMinute(::RPG::Client::DateTimePro_LiteralDate time)
		{
			return ((::System::String*(*)(::RPG::Client::DateTimePro_LiteralDate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_HOURMINUTE_OFFSET))(time);
		}

		static ::System::String* ToL10nText_HourMinuteSecond(::RPG::Client::DateTimePro_LiteralDate time)
		{
			return ((::System::String*(*)(::RPG::Client::DateTimePro_LiteralDate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_HOURMINUTESECOND_OFFSET))(time);
		}
	};
}
