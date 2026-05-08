#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PayVendor.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::Win { class OverseaPayDialog; }

#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x194D57F0)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG___C__DISPLAYCLASS67_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x194D5800)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayDialog___c__DisplayClass67_0_TypeDefinitionIndex = 20130;

	class OverseaPayDialog___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* vendorsObject; // 0x10
		::MiHoYo::SDK::JSONNode* info; // 0x18
		::MiHoYo::SDK::PayVendor vendor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::OverseaPayDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaPayDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG___C__DISPLAYCLASS67_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
