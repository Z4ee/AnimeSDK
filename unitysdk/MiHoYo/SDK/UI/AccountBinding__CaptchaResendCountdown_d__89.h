#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class AccountBinding; }

#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__89_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B9C1CA0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__89_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B9C1E10)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__89_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B9C1E70)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__89_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B9C1E20)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__89_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B9C1C90)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__89__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C14D0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AccountBinding__CaptchaResendCountdown_d__89_TypeDefinitionIndex = 8332;

	class AccountBinding__CaptchaResendCountdown_d__89 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MiHoYo::SDK::UI::AccountBinding* __4__this; // 0x18
		::System::Single _startTime_5__1; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__89__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__89_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__89_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__89_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__89_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__89_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
