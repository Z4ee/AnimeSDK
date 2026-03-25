#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class BindByMail; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16053CF0)
#define MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16053E90)
#define MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16053EF0)
#define MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16053EA0)
#define MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16053CE0)
#define MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44__CTOR_OFFSET UNITYSDK_OFFSET(0x16053BB0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindByMail__CountDown_d__44_TypeDefinitionIndex = 8109;

	class BindByMail__CountDown_d__44 : public ::System::Object
	{
	public:
		::System::String* _countDownTimeUnit_5__2; // 0x10
		::System::Object* __2__current; // 0x18
		::MiHoYo::SDK::Win::BindByMail* __4__this; // 0x20
		::System::Single _startTime_5__1; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Single time; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL__COUNTDOWN_D__44__CTOR_OFFSET))(this, __1__state);
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
