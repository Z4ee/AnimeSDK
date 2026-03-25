#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager___c__DisplayClass18_0; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1608FF50)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1__LOGIN_B__2_OFFSET UNITYSDK_OFFSET(0x16093600)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1__LOGIN_B__3_OFFSET UNITYSDK_OFFSET(0x160935A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass18_1_TypeDefinitionIndex = 8024;

	class ComboManager___c__DisplayClass18_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::ComboManager___c__DisplayClass18_0* CS___8__locals1; // 0x10
		::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* callbackModel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1__LOGIN_B__3_OFFSET))(this);
		}

		::System::Void _Login_b__2(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1__LOGIN_B__2_OFFSET))(this, result);
		}
	};
}
