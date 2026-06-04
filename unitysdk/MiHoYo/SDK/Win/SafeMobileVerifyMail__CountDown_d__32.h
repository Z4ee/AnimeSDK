#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class SafeMobileVerifyMail; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__COUNTDOWN_D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x182C1620)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__COUNTDOWN_D__32_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x182C17C0)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__COUNTDOWN_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x182C1820)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__COUNTDOWN_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x182C17D0)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__COUNTDOWN_D__32_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x182C1610)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__COUNTDOWN_D__32__CTOR_OFFSET UNITYSDK_OFFSET(0x182C1570)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SafeMobileVerifyMail__CountDown_d__32_TypeDefinitionIndex = 9145;

	class SafeMobileVerifyMail__CountDown_d__32 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::SafeMobileVerifyMail* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* _countDownTimeUnit_5__2; // 0x20
		::System::Single time; // 0x28
		::System::Single _startTime_5__1; // 0x2C
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__COUNTDOWN_D__32__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__COUNTDOWN_D__32_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__COUNTDOWN_D__32_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__COUNTDOWN_D__32_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__COUNTDOWN_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__COUNTDOWN_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
