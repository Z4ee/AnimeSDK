#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::HoYoPass { class AgeGateManager; }
namespace System { class Action; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B324CB0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS32_0__SHOWAGEGATEBIRTHDAYDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x1B324CC0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS32_0__SHOWAGEGATEBIRTHDAYDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x1B325110)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS32_0__SHOWAGEGATEBIRTHDAYDIALOG_B__3_OFFSET UNITYSDK_OFFSET(0x1B325060)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass32_0_TypeDefinitionIndex = 20029;

	class AgeGateManager___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* cbody; // 0x10
		::System::Action* __9__3; // 0x18
		::MiHoYo::SDK::HoYoPass::AgeGateManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAgeGateBirthdayDialog_b__0(::System::Int32 year, ::System::Int32 month, ::System::Int64 birthdayTimestamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS32_0__SHOWAGEGATEBIRTHDAYDIALOG_B__0_OFFSET))(this, year, month, birthdayTimestamp);
		}

		::System::Void _ShowAgeGateBirthdayDialog_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS32_0__SHOWAGEGATEBIRTHDAYDIALOG_B__3_OFFSET))(this);
		}

		::System::Void _ShowAgeGateBirthdayDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS32_0__SHOWAGEGATEBIRTHDAYDIALOG_B__1_OFFSET))(this);
		}
	};
}
