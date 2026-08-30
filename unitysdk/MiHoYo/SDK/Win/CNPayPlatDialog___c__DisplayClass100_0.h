#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::Win { class CNPayPlatDialog; }

#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG___C__DISPLAYCLASS100_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF52D0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG___C__DISPLAYCLASS100_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x15CFE1D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatDialog___c__DisplayClass100_0_TypeDefinitionIndex = 9495;

	class CNPayPlatDialog___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* goods; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG___C__DISPLAYCLASS100_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::CNPayPlatDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::CNPayPlatDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG___C__DISPLAYCLASS100_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
