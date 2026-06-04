#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaVerifyPhone; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__COUNTDOWN_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x182A19F0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__COUNTDOWN_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x182A1B90)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__COUNTDOWN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x182A1BF0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__COUNTDOWN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x182A1BA0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__COUNTDOWN_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x182A19E0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__COUNTDOWN_D__42__CTOR_OFFSET UNITYSDK_OFFSET(0x182A1940)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaVerifyPhone__CountDown_d__42_TypeDefinitionIndex = 9166;

	class OverseaVerifyPhone__CountDown_d__42 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::String* _countDownTimeUnit_5__2; // 0x18
		::MiHoYo::SDK::Win::OverseaVerifyPhone* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Single _startTime_5__1; // 0x2C
		::System::Single time; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__COUNTDOWN_D__42__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__COUNTDOWN_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__COUNTDOWN_D__42_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__COUNTDOWN_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__COUNTDOWN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__COUNTDOWN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
