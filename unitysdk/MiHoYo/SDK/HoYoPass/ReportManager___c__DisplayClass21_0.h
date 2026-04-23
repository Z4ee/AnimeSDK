#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17554540)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS21_0__DEBUG_B__0_OFFSET UNITYSDK_OFFSET(0x175553F0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int ReportManager___c__DisplayClass21_0_TypeDefinitionIndex = 7381;

	class ReportManager___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::String* module; // 0x10
		::System::String* msg; // 0x18
		::System::String* eventName; // 0x20
		::System::Int32 tkCode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _Debug_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS21_0__DEBUG_B__0_OFFSET))(this);
		}
	};
}
