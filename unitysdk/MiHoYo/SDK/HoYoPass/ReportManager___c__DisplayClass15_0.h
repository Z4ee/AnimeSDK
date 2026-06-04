#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class ReportManager; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS15_0__BUSINESSREPORT_B__0_OFFSET UNITYSDK_OFFSET(0x1833C500)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1833B070)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int ReportManager___c__DisplayClass15_0_TypeDefinitionIndex = 8282;

	class ReportManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::ReportManager* __4__this; // 0x10
		::System::String* content; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _BusinessReport_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS15_0__BUSINESSREPORT_B__0_OFFSET))(this);
		}
	};
}
