#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager___c__DisplayClass15_0; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_1__CTOR_OFFSET UNITYSDK_OFFSET(0x184ACD20)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_1__LOGIN_B__2_OFFSET UNITYSDK_OFFSET(0x184ADBC0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_1__LOGIN_B__4_OFFSET UNITYSDK_OFFSET(0x184ADB20)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass15_1_TypeDefinitionIndex = 9067;

	class ComboManager___c__DisplayClass15_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::ComboManager___c__DisplayClass15_0* CS___8__locals1; // 0x10
		::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* callbackModel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_1__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_1__LOGIN_B__4_OFFSET))(this);
		}

		::System::Void _Login_b__2(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS15_1__LOGIN_B__2_OFFSET))(this, a1);
		}
	};
}
