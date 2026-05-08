#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IAlertDialog; }
namespace System { class Action; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197DE140)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS30_0__SHOWAGEGATEBLOCKINGDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x197DE150)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass30_0_TypeDefinitionIndex = 19128;

	class AgeGateManager___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Action* onConfirmCallback; // 0x10
		::MiHoYo::SDK::UI::OS::IAlertDialog* alertDialog; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAgeGateBlockingDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS30_0__SHOWAGEGATEBLOCKINGDIALOG_B__0_OFFSET))(this);
		}
	};
}
