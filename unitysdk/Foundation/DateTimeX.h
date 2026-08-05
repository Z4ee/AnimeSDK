#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_DATETIMEX_ADDACENTURY_OFFSET UNITYSDK_OFFSET(0x1D9605A0)
#define FOUNDATION_DATETIMEX_ADDADAY_OFFSET UNITYSDK_OFFSET(0x1D960100)
#define FOUNDATION_DATETIMEX_ADDADECADE_OFFSET UNITYSDK_OFFSET(0x1D960430)
#define FOUNDATION_DATETIMEX_ADDAFORTNIGHT_OFFSET UNITYSDK_OFFSET(0x1D960260)
#define FOUNDATION_DATETIMEX_ADDAMINUTE_OFFSET UNITYSDK_OFFSET(0x1D95FFE0)
#define FOUNDATION_DATETIMEX_ADDAMONTH_OFFSET UNITYSDK_OFFSET(0x1D960360)
#define FOUNDATION_DATETIMEX_ADDANHOUR_OFFSET UNITYSDK_OFFSET(0x1D9600A0)
#define FOUNDATION_DATETIMEX_ADDASECOND_OFFSET UNITYSDK_OFFSET(0x1D95FF80)
#define FOUNDATION_DATETIMEX_ADDAWEEK_OFFSET UNITYSDK_OFFSET(0x1D960160)
#define FOUNDATION_DATETIMEX_ADDAYEAR_OFFSET UNITYSDK_OFFSET(0x1D9603C0)
#define FOUNDATION_DATETIMEX_ADDCENTURIES_OFFSET UNITYSDK_OFFSET(0x1D960640)
#define FOUNDATION_DATETIMEX_ADDDECADES_OFFSET UNITYSDK_OFFSET(0x1D9604D0)
#define FOUNDATION_DATETIMEX_ADDFORTNIGHTS_OFFSET UNITYSDK_OFFSET(0x1D9602F0)
#define FOUNDATION_DATETIMEX_ADDHALFANHOUR_OFFSET UNITYSDK_OFFSET(0x1D960040)
#define FOUNDATION_DATETIMEX_ADDWEEKS_OFFSET UNITYSDK_OFFSET(0x1D9601F0)
#define FOUNDATION_DATETIMEX_DATEFROMDAY_1_OFFSET UNITYSDK_OFFSET(0x1D95E510)
#define FOUNDATION_DATETIMEX_DATEFROMDAY_OFFSET UNITYSDK_OFFSET(0x1D95E3D0)
#define FOUNDATION_DATETIMEX_DATEFROMMONTH_1_OFFSET UNITYSDK_OFFSET(0x1D95E6B0)
#define FOUNDATION_DATETIMEX_DATEFROMMONTH_OFFSET UNITYSDK_OFFSET(0x1D95E570)
#define FOUNDATION_DATETIMEX_ENDOFMONTH_1_OFFSET UNITYSDK_OFFSET(0x1D95EB60)
#define FOUNDATION_DATETIMEX_ENDOFMONTH_2_OFFSET UNITYSDK_OFFSET(0x1D95ECA0)
#define FOUNDATION_DATETIMEX_ENDOFMONTH_OFFSET UNITYSDK_OFFSET(0x1D95E9E0)
#define FOUNDATION_DATETIMEX_FIRSTOFMONTH_1_OFFSET UNITYSDK_OFFSET(0x1D95E860)
#define FOUNDATION_DATETIMEX_FIRSTOFMONTH_2_OFFSET UNITYSDK_OFFSET(0x1D95E990)
#define FOUNDATION_DATETIMEX_FIRSTOFMONTH_OFFSET UNITYSDK_OFFSET(0x1D95E710)
#define FOUNDATION_DATETIMEX_GETDAYSTRING_OFFSET UNITYSDK_OFFSET(0x1D963E40)
#define FOUNDATION_DATETIMEX_GETFIRSTDAYOCCURRENCEOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D961ED0)
#define FOUNDATION_DATETIMEX_GETFIRSTDAYOCCURRENCEOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D962B50)
#define FOUNDATION_DATETIMEX_GETFIRSTDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D9620A0)
#define FOUNDATION_DATETIMEX_GETFIRSTDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D962D10)
#define FOUNDATION_DATETIMEX_GETFIRSTFRIDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D9624B0)
#define FOUNDATION_DATETIMEX_GETFIRSTFRIDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D962F90)
#define FOUNDATION_DATETIMEX_GETFIRSTMONDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D962370)
#define FOUNDATION_DATETIMEX_GETFIRSTMONDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D962E50)
#define FOUNDATION_DATETIMEX_GETFIRSTSATURDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D962500)
#define FOUNDATION_DATETIMEX_GETFIRSTSATURDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D962FE0)
#define FOUNDATION_DATETIMEX_GETFIRSTSUNDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D962550)
#define FOUNDATION_DATETIMEX_GETFIRSTSUNDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D963030)
#define FOUNDATION_DATETIMEX_GETFIRSTTHURSDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D962460)
#define FOUNDATION_DATETIMEX_GETFIRSTTHURSDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D962F40)
#define FOUNDATION_DATETIMEX_GETFIRSTTUESDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D9623C0)
#define FOUNDATION_DATETIMEX_GETFIRSTTUESDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D962EA0)
#define FOUNDATION_DATETIMEX_GETFIRSTWEDNESDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D962410)
#define FOUNDATION_DATETIMEX_GETFIRSTWEDNESDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D962EF0)
#define FOUNDATION_DATETIMEX_GETLASTDAYOCCURRENCEOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D962770)
#define FOUNDATION_DATETIMEX_GETLASTDAYOCCURRENCEOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D9631C0)
#define FOUNDATION_DATETIMEX_GETLASTDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D9625A0)
#define FOUNDATION_DATETIMEX_GETLASTDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D963080)
#define FOUNDATION_DATETIMEX_GETLASTFRIDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D962A60)
#define FOUNDATION_DATETIMEX_GETLASTFRIDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D963500)
#define FOUNDATION_DATETIMEX_GETLASTMONDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D962920)
#define FOUNDATION_DATETIMEX_GETLASTMONDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D9633C0)
#define FOUNDATION_DATETIMEX_GETLASTSATURDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D962AB0)
#define FOUNDATION_DATETIMEX_GETLASTSATURDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D963550)
#define FOUNDATION_DATETIMEX_GETLASTSUNDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D962B00)
#define FOUNDATION_DATETIMEX_GETLASTSUNDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D9635A0)
#define FOUNDATION_DATETIMEX_GETLASTTHURSDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D962A10)
#define FOUNDATION_DATETIMEX_GETLASTTHURSDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D9634B0)
#define FOUNDATION_DATETIMEX_GETLASTTUESDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D962970)
#define FOUNDATION_DATETIMEX_GETLASTTUESDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D963410)
#define FOUNDATION_DATETIMEX_GETLASTWEDNESDAYOFTHEMONTH_OFFSET UNITYSDK_OFFSET(0x1D9629C0)
#define FOUNDATION_DATETIMEX_GETLASTWEDNESDAYOFTHEYEAR_OFFSET UNITYSDK_OFFSET(0x1D963460)
#define FOUNDATION_DATETIMEX_GETMONTHSSINCE_OFFSET UNITYSDK_OFFSET(0x1D961330)
#define FOUNDATION_DATETIMEX_GETMONTHSTRING_OFFSET UNITYSDK_OFFSET(0x1D963F30)
#define FOUNDATION_DATETIMEX_GETNEXTDAY_OFFSET UNITYSDK_OFFSET(0x1D9621F0)
#define FOUNDATION_DATETIMEX_GETNEXTFRIDAY_OFFSET UNITYSDK_OFFSET(0x1D963730)
#define FOUNDATION_DATETIMEX_GETNEXTMONDAY_OFFSET UNITYSDK_OFFSET(0x1D9635F0)
#define FOUNDATION_DATETIMEX_GETNEXTSATURDAY_OFFSET UNITYSDK_OFFSET(0x1D963780)
#define FOUNDATION_DATETIMEX_GETNEXTSUNDAY_OFFSET UNITYSDK_OFFSET(0x1D9637D0)
#define FOUNDATION_DATETIMEX_GETNEXTTHURSDAY_OFFSET UNITYSDK_OFFSET(0x1D9636E0)
#define FOUNDATION_DATETIMEX_GETNEXTTUESDAY_OFFSET UNITYSDK_OFFSET(0x1D963640)
#define FOUNDATION_DATETIMEX_GETNEXTWEDNESDAY_OFFSET UNITYSDK_OFFSET(0x1D963690)
#define FOUNDATION_DATETIMEX_GETPREVIOUSDAY_OFFSET UNITYSDK_OFFSET(0x1D962870)
#define FOUNDATION_DATETIMEX_GETPREVIOUSFRIDAY_OFFSET UNITYSDK_OFFSET(0x1D963BA0)
#define FOUNDATION_DATETIMEX_GETPREVIOUSMONDAY_OFFSET UNITYSDK_OFFSET(0x1D963820)
#define FOUNDATION_DATETIMEX_GETPREVIOUSSATURDAY_OFFSET UNITYSDK_OFFSET(0x1D963C80)
#define FOUNDATION_DATETIMEX_GETPREVIOUSSUNDAY_OFFSET UNITYSDK_OFFSET(0x1D963D60)
#define FOUNDATION_DATETIMEX_GETPREVIOUSTHURSDAY_OFFSET UNITYSDK_OFFSET(0x1D963AC0)
#define FOUNDATION_DATETIMEX_GETPREVIOUSTUESDAY_OFFSET UNITYSDK_OFFSET(0x1D963900)
#define FOUNDATION_DATETIMEX_GETPREVIOUSWEDNESDAY_OFFSET UNITYSDK_OFFSET(0x1D9639E0)
#define FOUNDATION_DATETIMEX_GETYEARSSINCE_OFFSET UNITYSDK_OFFSET(0x1D961510)
#define FOUNDATION_DATETIMEX_ISAFRIDAY_OFFSET UNITYSDK_OFFSET(0x1D961900)
#define FOUNDATION_DATETIMEX_ISAMONDAY_OFFSET UNITYSDK_OFFSET(0x1D961740)
#define FOUNDATION_DATETIMEX_ISASATURDAY_OFFSET UNITYSDK_OFFSET(0x1D961970)
#define FOUNDATION_DATETIMEX_ISASUNDAY_OFFSET UNITYSDK_OFFSET(0x1D9619E0)
#define FOUNDATION_DATETIMEX_ISATHURSDAY_OFFSET UNITYSDK_OFFSET(0x1D961890)
#define FOUNDATION_DATETIMEX_ISATUESDAY_OFFSET UNITYSDK_OFFSET(0x1D9617B0)
#define FOUNDATION_DATETIMEX_ISAWEDNESDAY_OFFSET UNITYSDK_OFFSET(0x1D961820)
#define FOUNDATION_DATETIMEX_ISBETWEEN_OFFSET UNITYSDK_OFFSET(0x1D95E200)
#define FOUNDATION_DATETIMEX_ISINAPRIL_OFFSET UNITYSDK_OFFSET(0x1D961B70)
#define FOUNDATION_DATETIMEX_ISINAUGUST_OFFSET UNITYSDK_OFFSET(0x1D961CF0)
#define FOUNDATION_DATETIMEX_ISINDECEMBER_OFFSET UNITYSDK_OFFSET(0x1D961E70)
#define FOUNDATION_DATETIMEX_ISINFEBRUARY_OFFSET UNITYSDK_OFFSET(0x1D961AB0)
#define FOUNDATION_DATETIMEX_ISINJANUARY_OFFSET UNITYSDK_OFFSET(0x1D961A50)
#define FOUNDATION_DATETIMEX_ISINJULY_OFFSET UNITYSDK_OFFSET(0x1D961C90)
#define FOUNDATION_DATETIMEX_ISINJUNE_OFFSET UNITYSDK_OFFSET(0x1D961C30)
#define FOUNDATION_DATETIMEX_ISINMARCH_OFFSET UNITYSDK_OFFSET(0x1D961B10)
#define FOUNDATION_DATETIMEX_ISINMAY_OFFSET UNITYSDK_OFFSET(0x1D961BD0)
#define FOUNDATION_DATETIMEX_ISINNOVEMBER_OFFSET UNITYSDK_OFFSET(0x1D961E10)
#define FOUNDATION_DATETIMEX_ISINOCTOBER_OFFSET UNITYSDK_OFFSET(0x1D961DB0)
#define FOUNDATION_DATETIMEX_ISINSEPTEMBER_OFFSET UNITYSDK_OFFSET(0x1D961D50)
#define FOUNDATION_DATETIMEX_ISLATERDATE_OFFSET UNITYSDK_OFFSET(0x1D95EF50)
#define FOUNDATION_DATETIMEX_ISOLDERDATE_OFFSET UNITYSDK_OFFSET(0x1D95EFB0)
#define FOUNDATION_DATETIMEX_ISOLDERTHANADAY_OFFSET UNITYSDK_OFFSET(0x1D95F430)
#define FOUNDATION_DATETIMEX_ISOLDERTHANAFORTNIGHT_OFFSET UNITYSDK_OFFSET(0x1D95F530)
#define FOUNDATION_DATETIMEX_ISOLDERTHANAMINUTE_OFFSET UNITYSDK_OFFSET(0x1D95F2F0)
#define FOUNDATION_DATETIMEX_ISOLDERTHANAMONTH_OFFSET UNITYSDK_OFFSET(0x1D95F5B0)
#define FOUNDATION_DATETIMEX_ISOLDERTHANANHOUR_OFFSET UNITYSDK_OFFSET(0x1D95F390)
#define FOUNDATION_DATETIMEX_ISOLDERTHANASECOND_OFFSET UNITYSDK_OFFSET(0x1D95F250)
#define FOUNDATION_DATETIMEX_ISOLDERTHANAWEEK_OFFSET UNITYSDK_OFFSET(0x1D95F4B0)
#define FOUNDATION_DATETIMEX_ISOLDERTHANAYEAR_OFFSET UNITYSDK_OFFSET(0x1D95F770)
#define FOUNDATION_DATETIMEX_ISOLDERTHANHALFYEAR_OFFSET UNITYSDK_OFFSET(0x1D95F6C0)
#define FOUNDATION_DATETIMEX_ISOLDERTHAN_OFFSET UNITYSDK_OFFSET(0x1D95F660)
#define FOUNDATION_DATETIMEX_ISSAMEDAY_OFFSET UNITYSDK_OFFSET(0x1D95EEE0)
#define FOUNDATION_DATETIMEX_ISTODAY_OFFSET UNITYSDK_OFFSET(0x1D95F010)
#define FOUNDATION_DATETIMEX_ISTOMORROW_OFFSET UNITYSDK_OFFSET(0x1D95F0B0)
#define FOUNDATION_DATETIMEX_ISYESTERDAY_OFFSET UNITYSDK_OFFSET(0x1D95F180)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANACENTURY_OFFSET UNITYSDK_OFFSET(0x1D95FEC0)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANADAY_OFFSET UNITYSDK_OFFSET(0x1D95F980)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANADECADE_OFFSET UNITYSDK_OFFSET(0x1D95FE00)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANAFORTNIGHT_OFFSET UNITYSDK_OFFSET(0x1D95FB20)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANAMINUTE_OFFSET UNITYSDK_OFFSET(0x1D95F8A0)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANAMONTH_OFFSET UNITYSDK_OFFSET(0x1D95FBE0)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANANHOUR_OFFSET UNITYSDK_OFFSET(0x1D95F910)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANASECOND_OFFSET UNITYSDK_OFFSET(0x1D95F830)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANAWEEK_OFFSET UNITYSDK_OFFSET(0x1D95FA00)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANAYEAR_OFFSET UNITYSDK_OFFSET(0x1D95FD40)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHANHALFYEAR_OFFSET UNITYSDK_OFFSET(0x1D95FC90)
#define FOUNDATION_DATETIMEX_ISYOUNGERTHAN_OFFSET UNITYSDK_OFFSET(0x1D95FAC0)
#define FOUNDATION_DATETIMEX_MIDNIGHT_OFFSET UNITYSDK_OFFSET(0x1D95E270)
#define FOUNDATION_DATETIMEX_SUBTRACTACENTURY_OFFSET UNITYSDK_OFFSET(0x1D9610B0)
#define FOUNDATION_DATETIMEX_SUBTRACTADAY_OFFSET UNITYSDK_OFFSET(0x1D960A70)
#define FOUNDATION_DATETIMEX_SUBTRACTADECADE_OFFSET UNITYSDK_OFFSET(0x1D960F70)
#define FOUNDATION_DATETIMEX_SUBTRACTAFORTNIGHT_OFFSET UNITYSDK_OFFSET(0x1D960C40)
#define FOUNDATION_DATETIMEX_SUBTRACTAMINUTE_OFFSET UNITYSDK_OFFSET(0x1D960800)
#define FOUNDATION_DATETIMEX_SUBTRACTAMONTH_OFFSET UNITYSDK_OFFSET(0x1D960D10)
#define FOUNDATION_DATETIMEX_SUBTRACTANHOUR_OFFSET UNITYSDK_OFFSET(0x1D960980)
#define FOUNDATION_DATETIMEX_SUBTRACTASECOND_OFFSET UNITYSDK_OFFSET(0x1D960710)
#define FOUNDATION_DATETIMEX_SUBTRACTAWEEK_OFFSET UNITYSDK_OFFSET(0x1D960B60)
#define FOUNDATION_DATETIMEX_SUBTRACTAYEAR_OFFSET UNITYSDK_OFFSET(0x1D960E00)
#define FOUNDATION_DATETIMEX_SUBTRACTCENTURIES_OFFSET UNITYSDK_OFFSET(0x1D961100)
#define FOUNDATION_DATETIMEX_SUBTRACTDAYS_OFFSET UNITYSDK_OFFSET(0x1D960B00)
#define FOUNDATION_DATETIMEX_SUBTRACTDECADES_OFFSET UNITYSDK_OFFSET(0x1D960FC0)
#define FOUNDATION_DATETIMEX_SUBTRACTFORTNIGHTS_OFFSET UNITYSDK_OFFSET(0x1D960C90)
#define FOUNDATION_DATETIMEX_SUBTRACTHALFANHOUR_OFFSET UNITYSDK_OFFSET(0x1D9608F0)
#define FOUNDATION_DATETIMEX_SUBTRACTHOURS_OFFSET UNITYSDK_OFFSET(0x1D960A10)
#define FOUNDATION_DATETIMEX_SUBTRACTMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1D9612D0)
#define FOUNDATION_DATETIMEX_SUBTRACTMINUTES_OFFSET UNITYSDK_OFFSET(0x1D960890)
#define FOUNDATION_DATETIMEX_SUBTRACTMONTHS_OFFSET UNITYSDK_OFFSET(0x1D960DA0)
#define FOUNDATION_DATETIMEX_SUBTRACTSECONDS_OFFSET UNITYSDK_OFFSET(0x1D9607A0)
#define FOUNDATION_DATETIMEX_SUBTRACTTICKS_OFFSET UNITYSDK_OFFSET(0x1D9611F0)
#define FOUNDATION_DATETIMEX_SUBTRACTWEEKS_OFFSET UNITYSDK_OFFSET(0x1D960BB0)
#define FOUNDATION_DATETIMEX_SUBTRACTYEARS_OFFSET UNITYSDK_OFFSET(0x1D960EA0)
#define FOUNDATION_DATETIMEX_TODDMMYYDOT_OFFSET UNITYSDK_OFFSET(0x1D9640D0)
#define FOUNDATION_DATETIMEX_TODDMMYYHYPHEN_OFFSET UNITYSDK_OFFSET(0x1D9641A0)
#define FOUNDATION_DATETIMEX_TODDMMYYSLASH_OFFSET UNITYSDK_OFFSET(0x1D964000)
#define FOUNDATION_DATETIMEX_TODDMMYYWITHSEP_OFFSET UNITYSDK_OFFSET(0x1D964270)
#define FOUNDATION_DATETIMEX_TODDMMYYYYDOT_OFFSET UNITYSDK_OFFSET(0x1D964470)
#define FOUNDATION_DATETIMEX_TODDMMYYYYHYPHEN_OFFSET UNITYSDK_OFFSET(0x1D964550)
#define FOUNDATION_DATETIMEX_TODDMMYYYYSLASH_OFFSET UNITYSDK_OFFSET(0x1D964390)
#define FOUNDATION_DATETIMEX_TODDMMYYYYWITHSEP_OFFSET UNITYSDK_OFFSET(0x1D964630)
#define FOUNDATION_DATETIMEX_TOMMDDYYDOT_OFFSET UNITYSDK_OFFSET(0x1D964830)
#define FOUNDATION_DATETIMEX_TOMMDDYYHYPHEN_OFFSET UNITYSDK_OFFSET(0x1D964900)
#define FOUNDATION_DATETIMEX_TOMMDDYYSLASH_OFFSET UNITYSDK_OFFSET(0x1D964760)
#define FOUNDATION_DATETIMEX_TOMMDDYYWITHSEP_OFFSET UNITYSDK_OFFSET(0x1D9649D0)
#define FOUNDATION_DATETIMEX_TOMMDDYYYYDOT_OFFSET UNITYSDK_OFFSET(0x1D964BD0)
#define FOUNDATION_DATETIMEX_TOMMDDYYYYHYPHEN_OFFSET UNITYSDK_OFFSET(0x1D964CB0)
#define FOUNDATION_DATETIMEX_TOMMDDYYYYSLASH_OFFSET UNITYSDK_OFFSET(0x1D964AF0)
#define FOUNDATION_DATETIMEX_TOMMDDYYYYWITHSEP_OFFSET UNITYSDK_OFFSET(0x1D964D90)
#define FOUNDATION_DATETIMEX_TOMORROWMIDNIGHT_OFFSET UNITYSDK_OFFSET(0x1D95EE50)
#define FOUNDATION_DATETIMEX_TOMORROW_OFFSET UNITYSDK_OFFSET(0x1D95EDF0)
#define FOUNDATION_DATETIMEX_TOYYMMDDDOT_OFFSET UNITYSDK_OFFSET(0x1D964F90)
#define FOUNDATION_DATETIMEX_TOYYMMDDHYPHEN_OFFSET UNITYSDK_OFFSET(0x1D965060)
#define FOUNDATION_DATETIMEX_TOYYMMDDSLASH_OFFSET UNITYSDK_OFFSET(0x1D964EC0)
#define FOUNDATION_DATETIMEX_TOYYMMDDWITHSEP_OFFSET UNITYSDK_OFFSET(0x1D965130)
#define FOUNDATION_DATETIMEX_TOYYYYMMDDDOT_OFFSET UNITYSDK_OFFSET(0x1D965330)
#define FOUNDATION_DATETIMEX_TOYYYYMMDDHYPHEN_OFFSET UNITYSDK_OFFSET(0x1D965410)
#define FOUNDATION_DATETIMEX_TOYYYYMMDDSLASH_OFFSET UNITYSDK_OFFSET(0x1D965250)
#define FOUNDATION_DATETIMEX_TOYYYYMMDDWITHSEP_OFFSET UNITYSDK_OFFSET(0x1D9654F0)
#define FOUNDATION_DATETIMEX_YESTERDAYMIDNIGHT_OFFSET UNITYSDK_OFFSET(0x1D95ED60)
#define FOUNDATION_DATETIMEX_YESTERDAY_OFFSET UNITYSDK_OFFSET(0x1D95ED00)

namespace Foundation
{
	inline static constexpr unsigned int DateTimeX_TypeDefinitionIndex = 7954;

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
