#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class SafeMobileBind; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_SAFEMOBILEBIND__COUNTDOWN_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A4231D0)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND__COUNTDOWN_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A4233A0)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND__COUNTDOWN_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A423400)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND__COUNTDOWN_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A4233B0)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND__COUNTDOWN_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A4231C0)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND__COUNTDOWN_D__34__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4231B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SafeMobileBind__CountDown_d__34_TypeDefinitionIndex = 20095;

	class SafeMobileBind__CountDown_d__34 : public ::System::Object
	{
	public:
		::System::String* _countDownTimeUnit_5__2; // 0x10
		::MiHoYo::SDK::Win::SafeMobileBind* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Single time; // 0x2C
		::System::Single _startTime_5__1; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND__COUNTDOWN_D__34__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND__COUNTDOWN_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND__COUNTDOWN_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND__COUNTDOWN_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND__COUNTDOWN_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND__COUNTDOWN_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
