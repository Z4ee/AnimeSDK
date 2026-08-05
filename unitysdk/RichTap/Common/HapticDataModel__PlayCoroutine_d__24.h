#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RichTap::Common { class HapticDataModel; }

#define RICHTAP_COMMON_HAPTICDATAMODEL__PLAYCOROUTINE_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F2287D0)
#define RICHTAP_COMMON_HAPTICDATAMODEL__PLAYCOROUTINE_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F228870)
#define RICHTAP_COMMON_HAPTICDATAMODEL__PLAYCOROUTINE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F2288D0)
#define RICHTAP_COMMON_HAPTICDATAMODEL__PLAYCOROUTINE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F228880)
#define RICHTAP_COMMON_HAPTICDATAMODEL__PLAYCOROUTINE_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F2287C0)
#define RICHTAP_COMMON_HAPTICDATAMODEL__PLAYCOROUTINE_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2285D0)

namespace RichTap::Common
{
	inline static constexpr unsigned int HapticDataModel__PlayCoroutine_d__24_TypeDefinitionIndex = 38765;

	class HapticDataModel__PlayCoroutine_d__24 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RichTap::Common::HapticDataModel* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single waitTime; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL__PLAYCOROUTINE_D__24__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL__PLAYCOROUTINE_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL__PLAYCOROUTINE_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL__PLAYCOROUTINE_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL__PLAYCOROUTINE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL__PLAYCOROUTINE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
