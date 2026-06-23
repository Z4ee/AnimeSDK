#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class GrantBindPhone; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_GRANTBINDPHONE__COUNTDOWN_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C97D220)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE__COUNTDOWN_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C97D3F0)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE__COUNTDOWN_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C97D450)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE__COUNTDOWN_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C97D400)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE__COUNTDOWN_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C97D210)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE__COUNTDOWN_D__38__CTOR_OFFSET UNITYSDK_OFFSET(0x1C97D200)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GrantBindPhone__CountDown_d__38_TypeDefinitionIndex = 21260;

	class GrantBindPhone__CountDown_d__38 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MiHoYo::SDK::Win::GrantBindPhone* __4__this; // 0x18
		::System::String* _countDownTimeUnit_5__2; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Single _startTime_5__1; // 0x2C
		::System::Single time; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE__COUNTDOWN_D__38__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE__COUNTDOWN_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE__COUNTDOWN_D__38_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE__COUNTDOWN_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE__COUNTDOWN_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE__COUNTDOWN_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
