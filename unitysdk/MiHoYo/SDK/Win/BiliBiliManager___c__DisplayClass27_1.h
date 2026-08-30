#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::Win { class BiliBiliManager___c__DisplayClass27_0; }

#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS27_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E79E0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS27_1__ONCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1B7E7F30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliManager___c__DisplayClass27_1_TypeDefinitionIndex = 9268;

	class BiliBiliManager___c__DisplayClass27_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* initCallback; // 0x10
		::MiHoYo::SDK::Win::BiliBiliManager___c__DisplayClass27_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS27_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS27_1__ONCALLBACK_B__0_OFFSET))(this);
		}
	};
}
