#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0B2D0)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS23_0__ERROR_B__0_OFFSET UNITYSDK_OFFSET(0x15F0C420)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int ReportManager___c__DisplayClass23_0_TypeDefinitionIndex = 7332;

	class ReportManager___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::String* eventName; // 0x10
		::System::String* module; // 0x18
		::System::String* msg; // 0x20
		::System::Int32 tkCode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _Error_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS23_0__ERROR_B__0_OFFSET))(this);
		}
	};
}
