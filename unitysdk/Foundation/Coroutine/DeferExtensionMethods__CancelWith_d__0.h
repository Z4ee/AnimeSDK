#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C5C2230)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C5C2610)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C5C2670)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C5C2620)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C5C2220)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C2210)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int DeferExtensionMethods__CancelWith_d__0_TypeDefinitionIndex = 8316;

	class DeferExtensionMethods__CancelWith_d__0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine; // 0x10
		::UnityEngine::GameObject* gameObject; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single __2__current; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__0__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
