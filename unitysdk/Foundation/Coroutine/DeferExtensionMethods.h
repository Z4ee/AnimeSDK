#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS_CANCELWITH_1_OFFSET UNITYSDK_OFFSET(0x1BD336A0)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS_CANCELWITH_2_OFFSET UNITYSDK_OFFSET(0x1BD33730)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS_CANCELWITH_OFFSET UNITYSDK_OFFSET(0x1BD33610)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int DeferExtensionMethods_TypeDefinitionIndex = 7802;

	class DeferExtensionMethods : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* CancelWith(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS_CANCELWITH_OFFSET))(coroutine, gameObject);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* CancelWith_1(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::UnityEngine::GameObject* gameObject1, ::UnityEngine::GameObject* gameObject2)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS_CANCELWITH_1_OFFSET))(coroutine, gameObject1, gameObject2);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* CancelWith_2(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::UnityEngine::GameObject* gameObject1, ::UnityEngine::GameObject* gameObject2, ::UnityEngine::GameObject* gameObject3)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS_CANCELWITH_2_OFFSET))(coroutine, gameObject1, gameObject2, gameObject3);
		}
	};
}
