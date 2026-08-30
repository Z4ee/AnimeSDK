#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::HoYoPass { class AgeGateManager; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B94A7D0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS31_0__SHOWAGEGATECONFIRMDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x1B94BF10)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS31_0__SHOWAGEGATECONFIRMDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x1B94C000)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass31_0_TypeDefinitionIndex = 8223;

	class AgeGateManager___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::AgeGateManager* __4__this; // 0x10
		::MiHoYo::SDK::JSONObject* cbody; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAgeGateConfirmDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS31_0__SHOWAGEGATECONFIRMDIALOG_B__0_OFFSET))(this);
		}

		::System::Void _ShowAgeGateConfirmDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS31_0__SHOWAGEGATECONFIRMDIALOG_B__1_OFFSET))(this);
		}
	};
}
