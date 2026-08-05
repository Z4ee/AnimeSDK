#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager___c__DisplayClass19_0; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7774B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_2__LOGIN_B__7_OFFSET UNITYSDK_OFFSET(0x1D7775F0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_2__LOGIN_B__8_OFFSET UNITYSDK_OFFSET(0x1D7774C0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_2__LOGIN_B__9_OFFSET UNITYSDK_OFFSET(0x1D777520)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass19_2_TypeDefinitionIndex = 21514;

	class ComboManager___c__DisplayClass19_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* callbackModel; // 0x10
		::MiHoYo::SDK::Win::ComboManager___c__DisplayClass19_0* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_2__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_2__LOGIN_B__8_OFFSET))(this);
		}

		::System::Void _Login_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_2__LOGIN_B__9_OFFSET))(this);
		}

		::System::Void _Login_b__7(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_2__LOGIN_B__7_OFFSET))(this, result);
		}
	};
}
