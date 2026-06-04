#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro_LiteralDate.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_HOURMINUTESECOND_OFFSET UNITYSDK_OFFSET(0xBDBF600)
#define RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_HOURMINUTE_OFFSET UNITYSDK_OFFSET(0xBDBF3A0)
#define RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_YEARMONTHDAYHOURMINUTESECOND_OFFSET UNITYSDK_OFFSET(0xBDBED70)
#define RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_YEARMONTHDAYHOURMINUTE_OFFSET UNITYSDK_OFFSET(0xBDBE7D0)
#define RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_YEARMONTHDAY_OFFSET UNITYSDK_OFFSET(0xBDBE370)

namespace RPG::Client
{
	inline static constexpr unsigned int LiteralDateL10nExtensions_TypeDefinitionIndex = 57352;

	class LiteralDateL10nExtensions : public ::System::Object
	{
	public:
		static ::System::String* ToL10nText_YearMonthDay(::RPG::Client::DateTimePro_LiteralDate a1)
		{
			return ((::System::String*(*)(::RPG::Client::DateTimePro_LiteralDate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_YEARMONTHDAY_OFFSET))(a1);
		}

		static ::System::String* ToL10nText_YearMonthDayHourMinute(::RPG::Client::DateTimePro_LiteralDate a1)
		{
			return ((::System::String*(*)(::RPG::Client::DateTimePro_LiteralDate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_YEARMONTHDAYHOURMINUTE_OFFSET))(a1);
		}

		static ::System::String* ToL10nText_YearMonthDayHourMinuteSecond(::RPG::Client::DateTimePro_LiteralDate a1)
		{
			return ((::System::String*(*)(::RPG::Client::DateTimePro_LiteralDate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_YEARMONTHDAYHOURMINUTESECOND_OFFSET))(a1);
		}

		static ::System::String* ToL10nText_HourMinute(::RPG::Client::DateTimePro_LiteralDate a1)
		{
			return ((::System::String*(*)(::RPG::Client::DateTimePro_LiteralDate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_HOURMINUTE_OFFSET))(a1);
		}

		static ::System::String* ToL10nText_HourMinuteSecond(::RPG::Client::DateTimePro_LiteralDate a1)
		{
			return ((::System::String*(*)(::RPG::Client::DateTimePro_LiteralDate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITERALDATEL10NEXTENSIONS_TOL10NTEXT_HOURMINUTESECOND_OFFSET))(a1);
		}
	};
}
