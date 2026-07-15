#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class AccountBinding; }

#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B69F530)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B69F680)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B69F6E0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B69F690)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B69F520)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88__CTOR_OFFSET UNITYSDK_OFFSET(0x1B69ED60)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AccountBinding__CaptchaResendCountdown_d__88_TypeDefinitionIndex = 8315;

	class AccountBinding__CaptchaResendCountdown_d__88 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::AccountBinding* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single _startTime_5__1; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
