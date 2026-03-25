#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_UTIL__ADDTIME_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16024F10)
#define MIHOYO_SDK_UTIL__ADDTIME_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16024F90)
#define MIHOYO_SDK_UTIL__ADDTIME_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16024FF0)
#define MIHOYO_SDK_UTIL__ADDTIME_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16024FA0)
#define MIHOYO_SDK_UTIL__ADDTIME_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16024F00)
#define MIHOYO_SDK_UTIL__ADDTIME_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x160247A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Util__AddTime_d__1_TypeDefinitionIndex = 7195;

	class Util__AddTime_d__1 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Action* action; // 0x18
		::System::Single seconds; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL__ADDTIME_D__1__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL__ADDTIME_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL__ADDTIME_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL__ADDTIME_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL__ADDTIME_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL__ADDTIME_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
