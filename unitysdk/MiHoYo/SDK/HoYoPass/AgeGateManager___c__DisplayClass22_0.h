#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::HoYoPass { class AgeGateManager; }
namespace System { class Action; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE2F20)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS22_0__SHOWAGEGATEBIRTHDAYDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x15EE3750)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS22_0__SHOWAGEGATEBIRTHDAYDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x15EE3B30)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS22_0__SHOWAGEGATEBIRTHDAYDIALOG_B__3_OFFSET UNITYSDK_OFFSET(0x15EE3AC0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass22_0_TypeDefinitionIndex = 7259;

	class AgeGateManager___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MiHoYo::SDK::HoYoPass::AgeGateManager* __4__this; // 0x18
		::MiHoYo::SDK::JSONObject* cbody; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAgeGateBirthdayDialog_b__0(::System::Int32 year, ::System::Int32 month, ::System::Int64 birthdayTimestamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS22_0__SHOWAGEGATEBIRTHDAYDIALOG_B__0_OFFSET))(this, year, month, birthdayTimestamp);
		}

		::System::Void _ShowAgeGateBirthdayDialog_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS22_0__SHOWAGEGATEBIRTHDAYDIALOG_B__3_OFFSET))(this);
		}

		::System::Void _ShowAgeGateBirthdayDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS22_0__SHOWAGEGATEBIRTHDAYDIALOG_B__1_OFFSET))(this);
		}
	};
}
