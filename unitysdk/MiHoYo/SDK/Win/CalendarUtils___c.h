#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_WIN_CALENDARUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C39F210)
#define MIHOYO_SDK_WIN_CALENDARUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C39F250)
#define MIHOYO_SDK_WIN_CALENDARUTILS___C__GETMONTHSTRINGARRAY_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C39F260)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CalendarUtils___c_TypeDefinitionIndex = 21030;

	class CalendarUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CalendarUtils___c_TypeDefinitionIndex)->GetStaticField(0x9F10);
		}
		static ::MiHoYo::SDK::Win::CalendarUtils___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::CalendarUtils___c**)Il2CppClass::FromTypeDefinitionIndex(CalendarUtils___c_TypeDefinitionIndex)->GetStaticField(0x9F18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS___C__CTOR_OFFSET))(this);
		}

		::System::String* _GetMonthStringArray_b__8_0(::System::Int32 number)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS___C__GETMONTHSTRINGARRAY_B__8_0_OFFSET))(this, number);
		}
	};
}
