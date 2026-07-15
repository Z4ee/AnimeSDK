#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaGrantPhone; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__COUNTDOWN_D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1714AD40)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__COUNTDOWN_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1714AF40)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__COUNTDOWN_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1714AFA0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__COUNTDOWN_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1714AF50)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__COUNTDOWN_D__48_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1714AD30)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__COUNTDOWN_D__48__CTOR_OFFSET UNITYSDK_OFFSET(0x1714AC90)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGrantPhone__CountDown_d__48_TypeDefinitionIndex = 9192;

	class OverseaGrantPhone__CountDown_d__48 : public ::System::Object
	{
	public:
		::System::String* _countDownTimeUnit_5__2; // 0x10
		::MiHoYo::SDK::Win::OverseaGrantPhone* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Single time; // 0x28
		::System::Single _startTime_5__1; // 0x2C
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__COUNTDOWN_D__48__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__COUNTDOWN_D__48_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__COUNTDOWN_D__48_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__COUNTDOWN_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__COUNTDOWN_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__COUNTDOWN_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
