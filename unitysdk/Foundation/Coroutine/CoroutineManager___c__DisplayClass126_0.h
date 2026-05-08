#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class AsyncOperation; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER___C__DISPLAYCLASS126_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A75F0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___C__DISPLAYCLASS126_0__WAITUNTILDONE_B__0_OFFSET UNITYSDK_OFFSET(0x1C1A7600)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager___c__DisplayClass126_0_TypeDefinitionIndex = 7854;

	class CoroutineManager___c__DisplayClass126_0 : public ::System::Object
	{
	public:
		::UnityEngine::AsyncOperation* operation; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___C__DISPLAYCLASS126_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _WaitUntilDone_b__0(::System::Collections::Generic::IEnumerator_1<::System::Single>* input, ::Foundation::Coroutine::CoroutineHandle tag)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___C__DISPLAYCLASS126_0__WAITUNTILDONE_B__0_OFFSET))(this, input, tag);
		}
	};
}
