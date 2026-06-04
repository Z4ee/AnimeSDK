#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WIN_CALENDARUTILS_DATEFORMATTOTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1849CC80)
#define MIHOYO_SDK_WIN_CALENDARUTILS_FORMATMONTH_OFFSET UNITYSDK_OFFSET(0x1849D7C0)
#define MIHOYO_SDK_WIN_CALENDARUTILS_FORMATTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1849C640)
#define MIHOYO_SDK_WIN_CALENDARUTILS_FORMATTIME_OFFSET UNITYSDK_OFFSET(0x1849C850)
#define MIHOYO_SDK_WIN_CALENDARUTILS_FORMATYEARMONTH_OFFSET UNITYSDK_OFFSET(0x1849CA80)
#define MIHOYO_SDK_WIN_CALENDARUTILS_GETCURRENTYEAR_OFFSET UNITYSDK_OFFSET(0x1849D9D0)
#define MIHOYO_SDK_WIN_CALENDARUTILS_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1849CDE0)
#define MIHOYO_SDK_WIN_CALENDARUTILS_GETMONTHINYEAR_OFFSET UNITYSDK_OFFSET(0x1849CF00)
#define MIHOYO_SDK_WIN_CALENDARUTILS_GETMONTHSTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x1849D640)
#define MIHOYO_SDK_WIN_CALENDARUTILS_GETNEXTMONTH_OFFSET UNITYSDK_OFFSET(0x1849D940)
#define MIHOYO_SDK_WIN_CALENDARUTILS_ISVALIDDATE_OFFSET UNITYSDK_OFFSET(0x1849DB10)
#define MIHOYO_SDK_WIN_CALENDARUTILS_YEARGAPCALCULATE_OFFSET UNITYSDK_OFFSET(0x1849CF40)
#define MIHOYO_SDK_WIN_CALENDARUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1849DB40)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CalendarUtils_TypeDefinitionIndex = 8942;

	class CalendarUtils : public ::System::Object
	{
	public:
		// static const ::System::String* MODULE_NAME; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS__CTOR_OFFSET))(this);
		}

		static ::System::String* FormatTimestamp(::System::Int64 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::Int64, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_FORMATTIMESTAMP_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatTime(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_FORMATTIME_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* FormatYearMonth(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_FORMATYEARMONTH_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 DateFormatToTimestamp(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_DATEFORMATTOTIMESTAMP_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetDaysInMonth(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_GETDAYSINMONTH_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetMonthInYear(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_GETMONTHINYEAR_OFFSET))(a1);
		}

		static ::System::Int32 YearGapCalculate(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_YEARGAPCALCULATE_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::String*>* GetMonthStringArray()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_GETMONTHSTRINGARRAY_OFFSET))();
		}

		static ::System::String* FormatMonth(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_FORMATMONTH_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> GetNextMonth(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_GETNEXTMONTH_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetCurrentYear()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_GETCURRENTYEAR_OFFSET))();
		}

		static ::System::Boolean IsValidDate(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_ISVALIDDATE_OFFSET))(a1, a2, a3);
		}
	};
}
