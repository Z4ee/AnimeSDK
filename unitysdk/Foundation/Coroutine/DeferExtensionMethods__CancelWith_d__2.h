#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DE325E0)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DE32AB0)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DE32B10)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DE32AC0)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DE325D0)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE325C0)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int DeferExtensionMethods__CancelWith_d__2_TypeDefinitionIndex = 8314;

	class DeferExtensionMethods__CancelWith_d__2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine; // 0x10
		::UnityEngine::GameObject* gameObject3; // 0x18
		::UnityEngine::GameObject* gameObject1; // 0x20
		::UnityEngine::GameObject* gameObject2; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Single __2__current; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__2__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
