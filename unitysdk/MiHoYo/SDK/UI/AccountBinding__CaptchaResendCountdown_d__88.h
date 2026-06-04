#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class AccountBinding; }

#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18435FC0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18436100)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18436160)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18436110)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18435FB0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CAPTCHARESENDCOUNTDOWN_D__88__CTOR_OFFSET UNITYSDK_OFFSET(0x18435680)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AccountBinding__CaptchaResendCountdown_d__88_TypeDefinitionIndex = 8303;

	class AccountBinding__CaptchaResendCountdown_d__88 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MiHoYo::SDK::UI::AccountBinding* __4__this; // 0x18
		::System::Single _startTime_5__1; // 0x20
		::System::Int32 __1__state; // 0x24

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
