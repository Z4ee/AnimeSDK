#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_DATETIMEX_ADDACENTURY_OFFSET UNITYSDK_OFFSET(0x1C5C4C10)
#define FOUNDATION_DATETIMEX_ADDADAY_OFFSET UNITYSDK_OFFSET(0x1C5C4770)
#define FOUNDATION_DATETIMEX_ADDADECADE_OFFSET UNITYSDK_OFFSET(0x1C5C4AA0)
#define FOUNDATION_DATETIMEX_ADDAFORTNIGHT_OFFSET UNITYSDK_OFFSET(0x1C5C48D0)
#define FOUNDATION_DATETIMEX_ADDAMINUTE_OFFSET UNITYSDK_OFFSET(0x1C5C4650)
#define FOUNDATION_DATETIMEX_ADDAMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C49D0)
#define FOUNDATION_DATETIMEX_ADDANHOUR_OFFSET UNITYSDK_OFFSET(0x1C5C4710)
#define FOUNDATION_DATETIMEX_ADDASECOND_OFFSET UNITYSDK_OFFSET(0x1C5C45F0)
#define FOUNDATION_DATETIMEX_ADDAWEEK_OFFSET UNITYSDK_OFFSET(0x1C5C47D0)
#define FOUNDATION_DATETIMEX_ADDAYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C4A30)
#define FOUNDATION_DATETIMEX_ADDCENTURIES_OFFSET UNITYSDK_OFFSET(0x1C5C4CB0)
#define FOUNDATION_DATETIMEX_ADDDECADES_OFFSET UNITYSDK_OFFSET(0x1C5C4B40)
#define FOUNDATION_DATETIMEX_ADDFORTNIGHTS_OFFSET UNITYSDK_OFFSET(0x1C5C4960)
#define FOUNDATION_DATETIMEX_ADDHALFANHOUR_OFFSET UNITYSDK_OFFSET(0x1C5C46B0)
#define FOUNDATION_DATETIMEX_ADDWEEKS_OFFSET UNITYSDK_OFFSET(0x1C5C4860)
#define FOUNDATION_DATETIMEX_DATEFROMDAY_1_OFFSET UNITYSDK_OFFSET(0x1C5C2B90)
#define FOUNDATION_DATETIMEX_DATEFROMDAY_OFFSET UNITYSDK_OFFSET(0x1C5C2A50)
#define FOUNDATION_DATETIMEX_DATEFROMMONTH_1_OFFSET UNITYSDK_OFFSET(0x1C5C2D30)
#define FOUNDATION_DATETIMEX_DATEFROMMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C2BF0)
#define FOUNDATION_DATETIMEX_ENDOFMONTH_1_OFFSET UNITYSDK_OFFSET(0x1C5C31D0)
#define FOUNDATION_DATETIMEX_ENDOFMONTH_2_OFFSET UNITYSDK_OFFSET(0x1C5C3310)
#define FOUNDATION_DATETIMEX_ENDOFMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C3050)
#define FOUNDATION_DATETIMEX_FIRSTOFMONTH_1_OFFSET UNITYSDK_OFFSET(0x1C5C2ED0)
#define FOUNDATION_DATETIMEX_FIRSTOFMONTH_2_OFFSET UNITYSDK_OFFSET(0x1C5C3000)
#define FOUNDATION_DATETIMEX_FIRSTOFMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C2D90)
#define FOUNDATION_DATETIMEX_GETDAYSTRING_OFFSET UNITYSDK_OFFSET(0x1C5C84F0)
#define FOUNDATION_DATETIMEX_GETFIRSTDAYOCCURRENCEOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C6540)
#define FOUNDATION_DATETIMEX_GETFIRSTDAYOCCURRENCEOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7200)
#define FOUNDATION_DATETIMEX_GETFIRSTDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C6720)
#define FOUNDATION_DATETIMEX_GETFIRSTDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C73D0)
#define FOUNDATION_DATETIMEX_GETFIRSTFRIDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C6B40)
#define FOUNDATION_DATETIMEX_GETFIRSTFRIDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7640)
#define FOUNDATION_DATETIMEX_GETFIRSTMONDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C6A00)
#define FOUNDATION_DATETIMEX_GETFIRSTMONDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7500)
#define FOUNDATION_DATETIMEX_GETFIRSTSATURDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C6B90)
#define FOUNDATION_DATETIMEX_GETFIRSTSATURDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7690)
#define FOUNDATION_DATETIMEX_GETFIRSTSUNDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C6BE0)
#define FOUNDATION_DATETIMEX_GETFIRSTSUNDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C76E0)
#define FOUNDATION_DATETIMEX_GETFIRSTTHURSDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C6AF0)
#define FOUNDATION_DATETIMEX_GETFIRSTTHURSDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C75F0)
#define FOUNDATION_DATETIMEX_GETFIRSTTUESDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C6A50)
#define FOUNDATION_DATETIMEX_GETFIRSTTUESDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7550)
#define FOUNDATION_DATETIMEX_GETFIRSTWEDNESDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C6AA0)
#define FOUNDATION_DATETIMEX_GETFIRSTWEDNESDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C75A0)
#define FOUNDATION_DATETIMEX_GETLASTDAYOCCURRENCEOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C6E00)
#define FOUNDATION_DATETIMEX_GETLASTDAYOCCURRENCEOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7860)
#define FOUNDATION_DATETIMEX_GETLASTDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C6C30)
#define FOUNDATION_DATETIMEX_GETLASTDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7730)
#define FOUNDATION_DATETIMEX_GETLASTFRIDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C7110)
#define FOUNDATION_DATETIMEX_GETLASTFRIDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7BB0)
#define FOUNDATION_DATETIMEX_GETLASTMONDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C6FD0)
#define FOUNDATION_DATETIMEX_GETLASTMONDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7A70)
#define FOUNDATION_DATETIMEX_GETLASTSATURDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C7160)
#define FOUNDATION_DATETIMEX_GETLASTSATURDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7C00)
#define FOUNDATION_DATETIMEX_GETLASTSUNDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C71B0)
#define FOUNDATION_DATETIMEX_GETLASTSUNDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7C50)
#define FOUNDATION_DATETIMEX_GETLASTTHURSDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C70C0)
#define FOUNDATION_DATETIMEX_GETLASTTHURSDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7B60)
#define FOUNDATION_DATETIMEX_GETLASTTUESDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C7020)
#define FOUNDATION_DATETIMEX_GETLASTTUESDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7AC0)
#define FOUNDATION_DATETIMEX_GETLASTWEDNESDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C7070)
#define FOUNDATION_DATETIMEX_GETLASTWEDNESDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C7B10)
#define FOUNDATION_DATETIMEX_GETMONTHSSINCE_OFFSET UNITYSDK_OFFSET(0x1C5C59A0)
#define FOUNDATION_DATETIMEX_GETMONTHSTRING_OFFSET UNITYSDK_OFFSET(0x1C5C85E0)
#define FOUNDATION_DATETIMEX_GETNEXTDAY_OFFSET UNITYSDK_OFFSET(0x1C5C6860)
#define FOUNDATION_DATETIMEX_GETNEXTFRIDAY_OFFSET UNITYSDK_OFFSET(0x1C5C7DE0)
#define FOUNDATION_DATETIMEX_GETNEXTMONDAY_OFFSET UNITYSDK_OFFSET(0x1C5C7CA0)
#define FOUNDATION_DATETIMEX_GETNEXTSATURDAY_OFFSET UNITYSDK_OFFSET(0x1C5C7E30)
#define FOUNDATION_DATETIMEX_GETNEXTSUNDAY_OFFSET UNITYSDK_OFFSET(0x1C5C7E80)
#define FOUNDATION_DATETIMEX_GETNEXTTHURSDAY_OFFSET UNITYSDK_OFFSET(0x1C5C7D90)
#define FOUNDATION_DATETIMEX_GETNEXTTUESDAY_OFFSET UNITYSDK_OFFSET(0x1C5C7CF0)
#define FOUNDATION_DATETIMEX_GETNEXTWEDNESDAY_OFFSET UNITYSDK_OFFSET(0x1C5C7D40)
#define FOUNDATION_DATETIMEX_GETPREVIOUSDAY_OFFSET UNITYSDK_OFFSET(0x1C5C6F10)
#define FOUNDATION_DATETIMEX_GETPREVIOUSFRIDAY_OFFSET UNITYSDK_OFFSET(0x1C5C8250)
#define FOUNDATION_DATETIMEX_GETPREVIOUSMONDAY_OFFSET UNITYSDK_OFFSET(0x1C5C7ED0)
#define FOUNDATION_DATETIMEX_GETPREVIOUSSATURDAY_OFFSET UNITYSDK_OFFSET(0x1C5C8330)
#define FOUNDATION_DATETIMEX_GETPREVIOUSSUNDAY_OFFSET UNITYSDK_OFFSET(0x1C5C8410)
#define FOUNDATION_DATETIMEX_GETPREVIOUSTHURSDAY_OFFSET UNITYSDK_OFFSET(0x1C5C8170)
#define FOUNDATION_DATETIMEX_GETPREVIOUSTUESDAY_OFFSET UNITYSDK_OFFSET(0x1C5C7FB0)
#define FOUNDATION_DATETIMEX_GETPREVIOUSWEDNESDAY_OFFSET UNITYSDK_OFFSET(0x1C5C8090)
#define FOUNDATION_DATETIMEX_GETYEARSSINCE_OFFSET UNITYSDK_OFFSET(0x1C5C5B80)
#define FOUNDATION_DATETIMEX_ISAFRIDAY_OFFSET UNITYSDK_OFFSET(0x1C5C5F70)
#define FOUNDATION_DATETIMEX_ISAMONDAY_OFFSET UNITYSDK_OFFSET(0x1C5C5DB0)
#define FOUNDATION_DATETIMEX_ISASATURDAY_OFFSET UNITYSDK_OFFSET(0x1C5C5FE0)
#define FOUNDATION_DATETIMEX_ISASUNDAY_OFFSET UNITYSDK_OFFSET(0x1C5C6050)
#define FOUNDATION_DATETIMEX_ISATHURSDAY_OFFSET UNITYSDK_OFFSET(0x1C5C5F00)
#define FOUNDATION_DATETIMEX_ISATUESDAY_OFFSET UNITYSDK_OFFSET(0x1C5C5E20)
#define FOUNDATION_DATETIMEX_ISAWEDNESDAY_OFFSET UNITYSDK_OFFSET(0x1C5C5E90)
#define FOUNDATION_DATETIMEX_ISBETWEEN_OFFSET UNITYSDK_OFFSET(0x1C5C2890)
#define FOUNDATION_DATETIMEX_ISINAPRIL_OFFSET UNITYSDK_OFFSET(0x1C5C61E0)
#define FOUNDATION_DATETIMEX_ISINAUGUST_OFFSET UNITYSDK_OFFSET(0x1C5C6360)
#define FOUNDATION_DATETIMEX_ISINDECEMBER_OFFSET UNITYSDK_OFFSET(0x1C5C64E0)
#define FOUNDATION_DATETIMEX_ISINFEBRUARY_OFFSET UNITYSDK_OFFSET(0x1C5C6120)
#define FOUNDATION_DATETIMEX_ISINJANUARY_OFFSET UNITYSDK_OFFSET(0x1C5C60C0)
#define FOUNDATION_DATETIMEX_ISINJULY_OFFSET UNITYSDK_OFFSET(0x1C5C6300)
#define FOUNDATION_DATETIMEX_ISINJUNE_OFFSET UNITYSDK_OFFSET(0x1C5C62A0)
#define FOUNDATION_DATETIMEX_ISINMARCH_OFFSET UNITYSDK_OFFSET(0x1C5C6180)
#define FOUNDATION_DATETIMEX_ISINMAY_OFFSET UNITYSDK_OFFSET(0x1C5C6240)
#define FOUNDATION_DATETIMEX_ISINNOVEMBER_OFFSET UNITYSDK_OFFSET(0x1C5C6480)
#define FOUNDATION_DATETIMEX_ISINOCTOBER_OFFSET UNITYSDK_OFFSET(0x1C5C6420)
#define FOUNDATION_DATETIMEX_ISINSEPTEMBER_OFFSET UNITYSDK_OFFSET(0x1C5C63C0)
#define FOUNDATION_DATETIMEX_ISLATERDATE_OFFSET UNITYSDK_OFFSET(0x1C5C35C0)
#define FOUNDATION_DATETIMEX_ISOLDERDATE_OFFSET UNITYSDK_OFFSET(0x1C5C3620)
#define FOUNDATION_DATETIMEX_ISOLDERTHANADAY_OFFSET UNITYSDK_OFFSET(0x1C5C3AA0)
#define FOUNDATION_DATETIMEX_ISOLDERTHANAFORTNIGHT_OFFSET UNITYSDK_OFFSET(0x1C5C3BA0)
#define FOUNDATION_DATETIMEX_ISOLDERTHANAMINUTE_OFFSET UNITYSDK_OFFSET(0x1C5C3960)
#define FOUNDATION_DATETIMEX_ISOLDERTHANAMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C3C20)
#define FOUNDATION_DATETIMEX_ISOLDERTHANANHOUR_OFFSET UNITYSDK_OFFSET(0x1C5C3A00)
#define FOUNDATION_DATETIMEX_ISOLDERTHANASECOND_OFFSET UNITYSDK_OFFSET(0x1C5C38C0)
#define FOUNDATION_DATETIMEX_ISOLDERTHANAWEEK_OFFSET UNITYSDK_OFFSET(0x1C5C3B20)
#define FOUNDATION_DATETIMEX_ISOLDERTHANAYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C3DE0)
#define FOUNDATION_DATETIMEX_ISOLDERTHANHALFYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C3D30)
#define FOUNDATION_DATETIMEX_ISOLDERTHAN_OFFSET UNITYSDK_OFFSET(0x1C5C3CD0)
#define FOUNDATION_DATETIMEX_ISSAMEDAY_OFFSET UNITYSDK_OFFSET(0x1C5C3550)
#define FOUNDATION_DATETIMEX_ISTODAY_OFFSET UNITYSDK_OFFSET(0x1C5C3680)
#define FOUNDATION_DATETIMEX_ISTOMORROW_OFFSET UNITYSDK_OFFSET(0x1C5C3720)
#define FOUNDATION_DATETIMEX_ISYESTERDAY_OFFSET UNITYSDK_OFFSET(0x1C5C37F0)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANACENTURY_OFFSET UNITYSDK_OFFSET(0x1C5C4530)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANADAY_OFFSET UNITYSDK_OFFSET(0x1C5C3FF0)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANADECADE_OFFSET UNITYSDK_OFFSET(0x1C5C4470)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANAFORTNIGHT_OFFSET UNITYSDK_OFFSET(0x1C5C4190)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANAMINUTE_OFFSET UNITYSDK_OFFSET(0x1C5C3F10)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANAMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C4250)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANANHOUR_OFFSET UNITYSDK_OFFSET(0x1C5C3F80)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANASECOND_OFFSET UNITYSDK_OFFSET(0x1C5C3EA0)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANAWEEK_OFFSET UNITYSDK_OFFSET(0x1C5C4070)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANAYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C43B0)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANHALFYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C4300)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHAN_OFFSET UNITYSDK_OFFSET(0x1C5C4130)
#define FOUNDATION_DATETIMEX_MIDNIGHT_OFFSET UNITYSDK_OFFSET(0x1C5C2900)
#define FOUNDATION_DATETIMEX_SUBTRACTACENTURY_OFFSET UNITYSDK_OFFSET(0x1C5C5720)
#define FOUNDATION_DATETIMEX_SUBTRACTADAY_OFFSET UNITYSDK_OFFSET(0x1C5C50E0)
#define FOUNDATION_DATETIMEX_SUBTRACTADECADE_OFFSET UNITYSDK_OFFSET(0x1C5C55E0)
#define FOUNDATION_DATETIMEX_SUBTRACTAFORTNIGHT_OFFSET UNITYSDK_OFFSET(0x1C5C52B0)
#define FOUNDATION_DATETIMEX_SUBTRACTAMINUTE_OFFSET UNITYSDK_OFFSET(0x1C5C4E70)
#define FOUNDATION_DATETIMEX_SUBTRACTAMONTH_OFFSET UNITYSDK_OFFSET(0x1C5C5380)
#define FOUNDATION_DATETIMEX_SUBTRACTANHOUR_OFFSET UNITYSDK_OFFSET(0x1C5C4FF0)
#define FOUNDATION_DATETIMEX_SUBTRACTASECOND_OFFSET UNITYSDK_OFFSET(0x1C5C4D80)
#define FOUNDATION_DATETIMEX_SUBTRACTAWEEK_OFFSET UNITYSDK_OFFSET(0x1C5C51D0)
#define FOUNDATION_DATETIMEX_SUBTRACTAYEAR_OFFSET UNITYSDK_OFFSET(0x1C5C5470)
#define FOUNDATION_DATETIMEX_SUBTRACTCENTURIES_OFFSET UNITYSDK_OFFSET(0x1C5C5770)
#define FOUNDATION_DATETIMEX_SUBTRACTDAYS_OFFSET UNITYSDK_OFFSET(0x1C5C5170)
#define FOUNDATION_DATETIMEX_SUBTRACTDECADES_OFFSET UNITYSDK_OFFSET(0x1C5C5630)
#define FOUNDATION_DATETIMEX_SUBTRACTFORTNIGHTS_OFFSET UNITYSDK_OFFSET(0x1C5C5300)
#define FOUNDATION_DATETIMEX_SUBTRACTHALFANHOUR_OFFSET UNITYSDK_OFFSET(0x1C5C4F60)
#define FOUNDATION_DATETIMEX_SUBTRACTHOURS_OFFSET UNITYSDK_OFFSET(0x1C5C5080)
#define FOUNDATION_DATETIMEX_SUBTRACTMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1C5C5940)
#define FOUNDATION_DATETIMEX_SUBTRACTMINUTES_OFFSET UNITYSDK_OFFSET(0x1C5C4F00)
#define FOUNDATION_DATETIMEX_SUBTRACTMONTHS_OFFSET UNITYSDK_OFFSET(0x1C5C5410)
#define FOUNDATION_DATETIMEX_SUBTRACTSECONDS_OFFSET UNITYSDK_OFFSET(0x1C5C4E10)
#define FOUNDATION_DATETIMEX_SUBTRACTTICKS_OFFSET UNITYSDK_OFFSET(0x1C5C5860)
#define FOUNDATION_DATETIMEX_SUBTRACTWEEKS_OFFSET UNITYSDK_OFFSET(0x1C5C5220)
#define FOUNDATION_DATETIMEX_SUBTRACTYEARS_OFFSET UNITYSDK_OFFSET(0x1C5C5510)
#define FOUNDATION_DATETIMEX_TODDMMYYDOT_OFFSET UNITYSDK_OFFSET(0x1C5C8780)
#define FOUNDATION_DATETIMEX_TODDMMYYHYPHEN_OFFSET UNITYSDK_OFFSET(0x1C5C8850)
#define FOUNDATION_DATETIMEX_TODDMMYYSLASH_OFFSET UNITYSDK_OFFSET(0x1C5C86B0)
#define FOUNDATION_DATETIMEX_TODDMMYYWITHSEP_OFFSET UNITYSDK_OFFSET(0x1C5C8920)
#define FOUNDATION_DATETIMEX_TODDMMYYYYDOT_OFFSET UNITYSDK_OFFSET(0x1C5C8B20)
#define FOUNDATION_DATETIMEX_TODDMMYYYYHYPHEN_OFFSET UNITYSDK_OFFSET(0x1C5C8C00)
#define FOUNDATION_DATETIMEX_TODDMMYYYYSLASH_OFFSET UNITYSDK_OFFSET(0x1C5C8A40)
#define FOUNDATION_DATETIMEX_TODDMMYYYYWITHSEP_OFFSET UNITYSDK_OFFSET(0x1C5C8CE0)
#define FOUNDATION_DATETIMEX_TOMMDDYYDOT_OFFSET UNITYSDK_OFFSET(0x1C5C8EE0)
#define FOUNDATION_DATETIMEX_TOMMDDYYHYPHEN_OFFSET UNITYSDK_OFFSET(0x1C5C8FB0)
#define FOUNDATION_DATETIMEX_TOMMDDYYSLASH_OFFSET UNITYSDK_OFFSET(0x1C5C8E10)
#define FOUNDATION_DATETIMEX_TOMMDDYYWITHSEP_OFFSET UNITYSDK_OFFSET(0x1C5C9080)
#define FOUNDATION_DATETIMEX_TOMMDDYYYYDOT_OFFSET UNITYSDK_OFFSET(0x1C5C9280)
#define FOUNDATION_DATETIMEX_TOMMDDYYYYHYPHEN_OFFSET UNITYSDK_OFFSET(0x1C5C9360)
#define FOUNDATION_DATETIMEX_TOMMDDYYYYSLASH_OFFSET UNITYSDK_OFFSET(0x1C5C91A0)
#define FOUNDATION_DATETIMEX_TOMMDDYYYYWITHSEP_OFFSET UNITYSDK_OFFSET(0x1C5C9440)
#define FOUNDATION_DATETIMEX_TOMORROWMIDNIGHT_OFFSET UNITYSDK_OFFSET(0x1C5C34C0)
#define FOUNDATION_DATETIMEX_TOMORROW_OFFSET UNITYSDK_OFFSET(0x1C5C3460)
#define FOUNDATION_DATETIMEX_TOYYMMDDDOT_OFFSET UNITYSDK_OFFSET(0x1C5C9640)
#define FOUNDATION_DATETIMEX_TOYYMMDDHYPHEN_OFFSET UNITYSDK_OFFSET(0x1C5C9710)
#define FOUNDATION_DATETIMEX_TOYYMMDDSLASH_OFFSET UNITYSDK_OFFSET(0x1C5C9570)
#define FOUNDATION_DATETIMEX_TOYYMMDDWITHSEP_OFFSET UNITYSDK_OFFSET(0x1C5C97E0)
#define FOUNDATION_DATETIMEX_TOYYYYMMDDDOT_OFFSET UNITYSDK_OFFSET(0x1C5C99E0)
#define FOUNDATION_DATETIMEX_TOYYYYMMDDHYPHEN_OFFSET UNITYSDK_OFFSET(0x1C5C9AC0)
#define FOUNDATION_DATETIMEX_TOYYYYMMDDSLASH_OFFSET UNITYSDK_OFFSET(0x1C5C9900)
#define FOUNDATION_DATETIMEX_TOYYYYMMDDWITHSEP_OFFSET UNITYSDK_OFFSET(0x1C5C9BA0)
#define FOUNDATION_DATETIMEX_YESTERDAYMIDNIGHT_OFFSET UNITYSDK_OFFSET(0x1C5C33D0)
#define FOUNDATION_DATETIMEX_YESTERDAY_OFFSET UNITYSDK_OFFSET(0x1C5C3370)

namespace Foundation
{
	inline static constexpr unsigned int DateTimeX_TypeDefinitionIndex = 8379;

	class DateTimeX : public ::System::Object
	{
	public:
		// static const ::System::Int32 DAYS_PER_WEEK = 0x7; // 0x0
		// static const ::System::Int32 DAYS_PER_FORTNIGHT = 0xE; // 0x0
		// static const ::System::Int32 WEEKS_PER_FORTNIGHT = 0x2; // 0x0
		// static const ::System::Int32 YEARS_PER_DECADE = 0xA; // 0x0
		// static const ::System::Int32 YEARS_PER_CENTURY = 0x64; // 0x0
		// static const ::System::Int32 JANUARY = 0x1; // 0x0
		// static const ::System::Int32 FEBRUARY = 0x2; // 0x0
		// static const ::System::Int32 MARCH = 0x3; // 0x0
		// static const ::System::Int32 APRIL = 0x4; // 0x0
		// static const ::System::Int32 MAY = 0x5; // 0x0
		// static const ::System::Int32 JUNE = 0x6; // 0x0
		// static const ::System::Int32 JULY = 0x7; // 0x0
		// static const ::System::Int32 AUGUST = 0x8; // 0x0
		// static const ::System::Int32 SEPTEMBER = 0x9; // 0x0
		// static const ::System::Int32 OCTOBER = 0xA; // 0x0
		// static const ::System::Int32 NOVEMBER = 0xB; // 0x0
		// static const ::System::Int32 DECEMBER = 0xC; // 0x0

		static ::System::Boolean IsBetween(::System::DateTime value, ::System::DateTime from, ::System::DateTime to)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISBETWEEN_OFFSET))(value, from, to);
		}

		static ::System::DateTime Midnight(::System::DateTime value)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_MIDNIGHT_OFFSET))(value);
		}

		static ::System::DateTime DateFromDay(::System::Int32 day, ::System::Int32 month)
		{
			return ((::System::DateTime(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_DATEFROMDAY_OFFSET))(day, month);
		}

		static ::System::DateTime DateFromDay_1(::System::Int32 day, ::System::Int32 month, ::System::Int32 year)
		{
			return ((::System::DateTime(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_DATEFROMDAY_1_OFFSET))(day, month, year);
		}

		static ::System::DateTime DateFromMonth(::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::DateTime(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_DATEFROMMONTH_OFFSET))(month, day);
		}

		static ::System::DateTime DateFromMonth_1(::System::Int32 month, ::System::Int32 day, ::System::Int32 year)
		{
			return ((::System::DateTime(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_DATEFROMMONTH_1_OFFSET))(month, day, year);
		}

		static ::System::DateTime FirstOfMonth(::System::DateTime value)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_FIRSTOFMONTH_OFFSET))(value);
		}

		static ::System::DateTime FirstOfMonth_1(::System::Int32 month)
		{
			return ((::System::DateTime(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_FIRSTOFMONTH_1_OFFSET))(month);
		}

		static ::System::DateTime FirstOfMonth_2(::System::Int32 month, ::System::Int32 year)
		{
			return ((::System::DateTime(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_FIRSTOFMONTH_2_OFFSET))(month, year);
		}

		static ::System::DateTime EndOfMonth(::System::DateTime value)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ENDOFMONTH_OFFSET))(value);
		}

		static ::System::DateTime EndOfMonth_1(::System::Int32 month)
		{
			return ((::System::DateTime(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ENDOFMONTH_1_OFFSET))(month);
		}

		static ::System::DateTime EndOfMonth_2(::System::Int32 month, ::System::Int32 year)
		{
			return ((::System::DateTime(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ENDOFMONTH_2_OFFSET))(month, year);
		}

		static ::System::DateTime Yesterday(::System::DateTime value)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_YESTERDAY_OFFSET))(value);
		}

		static ::System::DateTime YesterdayMidnight(::System::DateTime value)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_YESTERDAYMIDNIGHT_OFFSET))(value);
		}

		static ::System::DateTime Tomorrow(::System::DateTime value)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOMORROW_OFFSET))(value);
		}

		static ::System::DateTime TomorrowMidnight(::System::DateTime value)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOMORROWMIDNIGHT_OFFSET))(value);
		}

		static ::System::Boolean IsSameDay(::System::DateTime value, ::System::DateTime compareDate)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISSAMEDAY_OFFSET))(value, compareDate);
		}

		static ::System::Boolean IsLaterDate(::System::DateTime value, ::System::DateTime compareDate)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISLATERDATE_OFFSET))(value, compareDate);
		}

		static ::System::Boolean IsOlderDate(::System::DateTime value, ::System::DateTime compareDate)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISOLDERDATE_OFFSET))(value, compareDate);
		}

		static ::System::Boolean IsToday(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISTODAY_OFFSET))(date);
		}

		static ::System::Boolean IsTomorrow(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISTOMORROW_OFFSET))(date);
		}

		static ::System::Boolean IsYesterday(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYESTERDAY_OFFSET))(date);
		}

		static ::System::Boolean IsOlderThanASecond(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISOLDERTHANASECOND_OFFSET))(date);
		}

		static ::System::Boolean IsOlderThanAMinute(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISOLDERTHANAMINUTE_OFFSET))(date);
		}

		static ::System::Boolean IsOlderThanAnHour(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISOLDERTHANANHOUR_OFFSET))(date);
		}

		static ::System::Boolean IsOlderThanADay(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISOLDERTHANADAY_OFFSET))(date);
		}

		static ::System::Boolean IsOlderThanAWeek(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISOLDERTHANAWEEK_OFFSET))(date);
		}

		static ::System::Boolean IsOlderThanAFortnight(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISOLDERTHANAFORTNIGHT_OFFSET))(date);
		}

		static ::System::Boolean IsOlderThanAMonth(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISOLDERTHANAMONTH_OFFSET))(date);
		}

		static ::System::Boolean IsOlderThanHalfYear(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISOLDERTHANHALFYEAR_OFFSET))(date);
		}

		static ::System::Boolean IsOlderThanAYear(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISOLDERTHANAYEAR_OFFSET))(date);
		}

		static ::System::Boolean IsOlderThan(::System::DateTime firstDate, ::System::DateTime secondDate)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISOLDERTHAN_OFFSET))(firstDate, secondDate);
		}

		static ::System::Boolean IsYoungerThanASecond(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYOUNGERTHANASECOND_OFFSET))(date);
		}

		static ::System::Boolean IsYoungerThanAMinute(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYOUNGERTHANAMINUTE_OFFSET))(date);
		}

		static ::System::Boolean IsYoungerThanAnHour(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYOUNGERTHANANHOUR_OFFSET))(date);
		}

		static ::System::Boolean IsYoungerThanADay(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYOUNGERTHANADAY_OFFSET))(date);
		}

		static ::System::Boolean IsYoungerThanAWeek(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYOUNGERTHANAWEEK_OFFSET))(date);
		}

		static ::System::Boolean IsYoungerThanAFortnight(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYOUNGERTHANAFORTNIGHT_OFFSET))(date);
		}

		static ::System::Boolean IsYoungerThanAMonth(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYOUNGERTHANAMONTH_OFFSET))(date);
		}

		static ::System::Boolean IsYoungerThanHalfYear(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYOUNGERTHANHALFYEAR_OFFSET))(date);
		}

		static ::System::Boolean IsYoungerThanAYear(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYOUNGERTHANAYEAR_OFFSET))(date);
		}

		static ::System::Boolean IsYoungerThanADecade(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYOUNGERTHANADECADE_OFFSET))(date);
		}

		static ::System::Boolean IsYoungerThanACentury(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYOUNGERTHANACENTURY_OFFSET))(date);
		}

		static ::System::Boolean IsYoungerThan(::System::DateTime firstDate, ::System::DateTime secondDate)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISYOUNGERTHAN_OFFSET))(firstDate, secondDate);
		}

		static ::System::DateTime AddASecond(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDASECOND_OFFSET))(date);
		}

		static ::System::DateTime AddAMinute(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDAMINUTE_OFFSET))(date);
		}

		static ::System::DateTime AddHalfAnHour(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDHALFANHOUR_OFFSET))(date);
		}

		static ::System::DateTime AddAnHour(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDANHOUR_OFFSET))(date);
		}

		static ::System::DateTime AddADay(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDADAY_OFFSET))(date);
		}

		static ::System::DateTime AddAWeek(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDAWEEK_OFFSET))(date);
		}

		static ::System::DateTime AddAFortnight(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDAFORTNIGHT_OFFSET))(date);
		}

		static ::System::DateTime AddAMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDAMONTH_OFFSET))(date);
		}

		static ::System::DateTime AddAYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDAYEAR_OFFSET))(date);
		}

		static ::System::DateTime AddADecade(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDADECADE_OFFSET))(date);
		}

		static ::System::DateTime AddWeeks(::System::DateTime date, ::System::Int32 weeks)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDWEEKS_OFFSET))(date, weeks);
		}

		static ::System::DateTime AddFortnights(::System::DateTime date, ::System::Int32 fortnights)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDFORTNIGHTS_OFFSET))(date, fortnights);
		}

		static ::System::DateTime AddACentury(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDACENTURY_OFFSET))(date);
		}

		static ::System::DateTime AddDecades(::System::DateTime date, ::System::Int32 decades)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDDECADES_OFFSET))(date, decades);
		}

		static ::System::DateTime AddCenturies(::System::DateTime date, ::System::Int32 centuries)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ADDCENTURIES_OFFSET))(date, centuries);
		}

		static ::System::DateTime SubtractASecond(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTASECOND_OFFSET))(date);
		}

		static ::System::DateTime SubtractAMinute(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTAMINUTE_OFFSET))(date);
		}

		static ::System::DateTime SubtractHalfAnHour(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTHALFANHOUR_OFFSET))(date);
		}

		static ::System::DateTime SubtractAnHour(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTANHOUR_OFFSET))(date);
		}

		static ::System::DateTime SubtractADay(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTADAY_OFFSET))(date);
		}

		static ::System::DateTime SubtractAWeek(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTAWEEK_OFFSET))(date);
		}

		static ::System::DateTime SubtractAFortnight(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTAFORTNIGHT_OFFSET))(date);
		}

		static ::System::DateTime SubtractAMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTAMONTH_OFFSET))(date);
		}

		static ::System::DateTime SubtractAYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTAYEAR_OFFSET))(date);
		}

		static ::System::DateTime SubtractADecade(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTADECADE_OFFSET))(date);
		}

		static ::System::DateTime SubtractACentury(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTACENTURY_OFFSET))(date);
		}

		static ::System::DateTime SubtractTicks(::System::DateTime date, ::System::Int32 ticks)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTTICKS_OFFSET))(date, ticks);
		}

		static ::System::DateTime SubtractMilliSeconds(::System::DateTime date, ::System::Int32 milliSeconds)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTMILLISECONDS_OFFSET))(date, milliSeconds);
		}

		static ::System::DateTime SubtractSeconds(::System::DateTime date, ::System::Int32 seconds)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTSECONDS_OFFSET))(date, seconds);
		}

		static ::System::DateTime SubtractMinutes(::System::DateTime date, ::System::Int32 minutes)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTMINUTES_OFFSET))(date, minutes);
		}

		static ::System::DateTime SubtractHours(::System::DateTime date, ::System::Int32 hours)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTHOURS_OFFSET))(date, hours);
		}

		static ::System::DateTime SubtractDays(::System::DateTime date, ::System::Int32 days)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTDAYS_OFFSET))(date, days);
		}

		static ::System::DateTime SubtractWeeks(::System::DateTime date, ::System::Int32 weeks)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTWEEKS_OFFSET))(date, weeks);
		}

		static ::System::DateTime SubtractFortnights(::System::DateTime date, ::System::Int32 fortnights)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTFORTNIGHTS_OFFSET))(date, fortnights);
		}

		static ::System::DateTime SubtractMonths(::System::DateTime date, ::System::Int32 months)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTMONTHS_OFFSET))(date, months);
		}

		static ::System::DateTime SubtractYears(::System::DateTime date, ::System::Int32 years)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTYEARS_OFFSET))(date, years);
		}

		static ::System::DateTime SubtractDecades(::System::DateTime date, ::System::Int32 decades)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTDECADES_OFFSET))(date, decades);
		}

		static ::System::DateTime SubtractCenturies(::System::DateTime date, ::System::Int32 centuries)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_SUBTRACTCENTURIES_OFFSET))(date, centuries);
		}

		static ::System::Int64 GetMonthsSince(::System::DateTime time)
		{
			return ((::System::Int64(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETMONTHSSINCE_OFFSET))(time);
		}

		static ::System::Int64 GetYearsSince(::System::DateTime time)
		{
			return ((::System::Int64(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETYEARSSINCE_OFFSET))(time);
		}

		static ::System::Boolean IsAMonday(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISAMONDAY_OFFSET))(date);
		}

		static ::System::Boolean IsATuesday(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISATUESDAY_OFFSET))(date);
		}

		static ::System::Boolean IsAWednesday(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISAWEDNESDAY_OFFSET))(date);
		}

		static ::System::Boolean IsAThursday(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISATHURSDAY_OFFSET))(date);
		}

		static ::System::Boolean IsAFriday(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISAFRIDAY_OFFSET))(date);
		}

		static ::System::Boolean IsASaturday(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISASATURDAY_OFFSET))(date);
		}

		static ::System::Boolean IsASunday(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISASUNDAY_OFFSET))(date);
		}

		static ::System::Boolean IsInJanuary(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISINJANUARY_OFFSET))(date);
		}

		static ::System::Boolean IsInFebruary(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISINFEBRUARY_OFFSET))(date);
		}

		static ::System::Boolean IsInMarch(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISINMARCH_OFFSET))(date);
		}

		static ::System::Boolean IsInApril(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISINAPRIL_OFFSET))(date);
		}

		static ::System::Boolean IsInMay(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISINMAY_OFFSET))(date);
		}

		static ::System::Boolean IsInJune(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISINJUNE_OFFSET))(date);
		}

		static ::System::Boolean IsInJuly(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISINJULY_OFFSET))(date);
		}

		static ::System::Boolean IsInAugust(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISINAUGUST_OFFSET))(date);
		}

		static ::System::Boolean IsInSeptember(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISINSEPTEMBER_OFFSET))(date);
		}

		static ::System::Boolean IsInOctober(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISINOCTOBER_OFFSET))(date);
		}

		static ::System::Boolean IsInNovember(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISINNOVEMBER_OFFSET))(date);
		}

		static ::System::Boolean IsInDecember(::System::DateTime date)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_ISINDECEMBER_OFFSET))(date);
		}

		static ::System::DateTime GetFirstDayOccurrenceOfTheMonth(::System::DateTime date, ::System::DayOfWeek day)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTDAYOCCURRENCEOFTHEMONTH_OFFSET))(date, day);
		}

		static ::System::DateTime GetFirstMondayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTMONDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetFirstTuesdayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTTUESDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetFirstWednesdayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTWEDNESDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetFirstThursdayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTTHURSDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetFirstFridayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTFRIDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetFirstSaturdayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTSATURDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetFirstSundayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTSUNDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetFirstDayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetLastDayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetLastDayOccurrenceOfTheMonth(::System::DateTime date, ::System::DayOfWeek day)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTDAYOCCURRENCEOFTHEMONTH_OFFSET))(date, day);
		}

		static ::System::DateTime GetLastMondayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTMONDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetLastTuesdayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTTUESDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetLastWednesdayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTWEDNESDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetLastThursdayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTTHURSDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetLastFridayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTFRIDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetLastSaturdayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTSATURDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetLastSundayOfTheMonth(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTSUNDAYOFTHEMONTH_OFFSET))(date);
		}

		static ::System::DateTime GetFirstDayOccurrenceOfTheYear(::System::DateTime date, ::System::DayOfWeek day)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTDAYOCCURRENCEOFTHEYEAR_OFFSET))(date, day);
		}

		static ::System::DateTime GetFirstMondayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTMONDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetFirstTuesdayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTTUESDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetFirstWednesdayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTWEDNESDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetFirstThursdayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTTHURSDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetFirstFridayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTFRIDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetFirstSaturdayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTSATURDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetFirstSundayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTSUNDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetFirstDayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETFIRSTDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetLastDayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetLastDayOccurrenceOfTheYear(::System::DateTime date, ::System::DayOfWeek day)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTDAYOCCURRENCEOFTHEYEAR_OFFSET))(date, day);
		}

		static ::System::DateTime GetLastMondayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTMONDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetLastTuesdayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTTUESDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetLastWednesdayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTWEDNESDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetLastThursdayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTTHURSDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetLastFridayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTFRIDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetLastSaturdayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTSATURDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetLastSundayOfTheYear(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETLASTSUNDAYOFTHEYEAR_OFFSET))(date);
		}

		static ::System::DateTime GetNextMonday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETNEXTMONDAY_OFFSET))(date);
		}

		static ::System::DateTime GetNextTuesday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETNEXTTUESDAY_OFFSET))(date);
		}

		static ::System::DateTime GetNextWednesday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETNEXTWEDNESDAY_OFFSET))(date);
		}

		static ::System::DateTime GetNextThursday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETNEXTTHURSDAY_OFFSET))(date);
		}

		static ::System::DateTime GetNextFriday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETNEXTFRIDAY_OFFSET))(date);
		}

		static ::System::DateTime GetNextSaturday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETNEXTSATURDAY_OFFSET))(date);
		}

		static ::System::DateTime GetNextSunday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETNEXTSUNDAY_OFFSET))(date);
		}

		static ::System::DateTime GetNextDay(::System::DateTime date, ::System::DayOfWeek day)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETNEXTDAY_OFFSET))(date, day);
		}

		static ::System::DateTime GetPreviousMonday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETPREVIOUSMONDAY_OFFSET))(date);
		}

		static ::System::DateTime GetPreviousTuesday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETPREVIOUSTUESDAY_OFFSET))(date);
		}

		static ::System::DateTime GetPreviousWednesday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETPREVIOUSWEDNESDAY_OFFSET))(date);
		}

		static ::System::DateTime GetPreviousThursday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETPREVIOUSTHURSDAY_OFFSET))(date);
		}

		static ::System::DateTime GetPreviousFriday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETPREVIOUSFRIDAY_OFFSET))(date);
		}

		static ::System::DateTime GetPreviousSaturday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETPREVIOUSSATURDAY_OFFSET))(date);
		}

		static ::System::DateTime GetPreviousSunday(::System::DateTime date)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETPREVIOUSSUNDAY_OFFSET))(date);
		}

		static ::System::DateTime GetPreviousDay(::System::DateTime date, ::System::DayOfWeek day)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETPREVIOUSDAY_OFFSET))(date, day);
		}

		static ::System::String* GetDayString(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETDAYSTRING_OFFSET))(date);
		}

		static ::System::String* GetMonthString(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_GETMONTHSTRING_OFFSET))(date);
		}

		static ::System::String* ToDdMmYySlash(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TODDMMYYSLASH_OFFSET))(date);
		}

		static ::System::String* ToDdMmYyDot(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TODDMMYYDOT_OFFSET))(date);
		}

		static ::System::String* ToDdMmYyHyphen(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TODDMMYYHYPHEN_OFFSET))(date);
		}

		static ::System::String* ToDdMmYyWithSep(::System::DateTime date, ::System::String* separator)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TODDMMYYWITHSEP_OFFSET))(date, separator);
		}

		static ::System::String* ToDdMmYyyySlash(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TODDMMYYYYSLASH_OFFSET))(date);
		}

		static ::System::String* ToDdMmYyyyDot(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TODDMMYYYYDOT_OFFSET))(date);
		}

		static ::System::String* ToDdMmYyyyHyphen(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TODDMMYYYYHYPHEN_OFFSET))(date);
		}

		static ::System::String* ToDdMmYyyyWithSep(::System::DateTime date, ::System::String* separator)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TODDMMYYYYWITHSEP_OFFSET))(date, separator);
		}

		static ::System::String* ToMmDdYySlash(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOMMDDYYSLASH_OFFSET))(date);
		}

		static ::System::String* ToMmDdYyDot(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOMMDDYYDOT_OFFSET))(date);
		}

		static ::System::String* ToMmDdYyHyphen(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOMMDDYYHYPHEN_OFFSET))(date);
		}

		static ::System::String* ToMmDdYyWithSep(::System::DateTime date, ::System::String* separator)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOMMDDYYWITHSEP_OFFSET))(date, separator);
		}

		static ::System::String* ToMmDdYyyySlash(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOMMDDYYYYSLASH_OFFSET))(date);
		}

		static ::System::String* ToMmDdYyyyDot(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOMMDDYYYYDOT_OFFSET))(date);
		}

		static ::System::String* ToMmDdYyyyHyphen(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOMMDDYYYYHYPHEN_OFFSET))(date);
		}

		static ::System::String* ToMmDdYyyyWithSep(::System::DateTime date, ::System::String* separator)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOMMDDYYYYWITHSEP_OFFSET))(date, separator);
		}

		static ::System::String* ToYyMmDdSlash(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOYYMMDDSLASH_OFFSET))(date);
		}

		static ::System::String* ToYyMmDdDot(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOYYMMDDDOT_OFFSET))(date);
		}

		static ::System::String* ToYyMmDdHyphen(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOYYMMDDHYPHEN_OFFSET))(date);
		}

		static ::System::String* ToYyMmDdWithSep(::System::DateTime date, ::System::String* separator)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOYYMMDDWITHSEP_OFFSET))(date, separator);
		}

		static ::System::String* ToYyyyMmDdSlash(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOYYYYMMDDSLASH_OFFSET))(date);
		}

		static ::System::String* ToYyyyMmDdDot(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOYYYYMMDDDOT_OFFSET))(date);
		}

		static ::System::String* ToYyyyMmDdHyphen(::System::DateTime date)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOYYYYMMDDHYPHEN_OFFSET))(date);
		}

		static ::System::String* ToYyyyMmDdWithSep(::System::DateTime date, ::System::String* separator)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DATETIMEX_TOYYYYMMDDWITHSEP_OFFSET))(date, separator);
		}
	};
}
