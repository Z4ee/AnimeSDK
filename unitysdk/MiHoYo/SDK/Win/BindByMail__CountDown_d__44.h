#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class BindByMail; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18476D10)
#define MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18476EB0)
#define MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18476F10)
#define MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18476EC0)
#define MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18476D00)
#define MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44__CTOR_OFFSET UNITYSDK_OFFSET(0x18476C20)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindByMail__CountDown_d__44_TypeDefinitionIndex = 9158;

	class BindByMail__CountDown_d__44 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::BindByMail* __4__this; // 0x10
		::System::String* _countDownTimeUnit_5__2; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Single time; // 0x2C
		::System::Single _startTime_5__1; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
