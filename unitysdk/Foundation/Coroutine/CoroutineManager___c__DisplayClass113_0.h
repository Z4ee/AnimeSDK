#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER___C__DISPLAYCLASS113_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D882960)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___C__DISPLAYCLASS113_0___INJECTDELAY_B__0_OFFSET UNITYSDK_OFFSET(0x1D882970)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager___c__DisplayClass113_0_TypeDefinitionIndex = 8019;

	class CoroutineManager___c__DisplayClass113_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Single>* proc; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___C__DISPLAYCLASS113_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* __InjectDelay_b__0(::System::Collections::Generic::IEnumerator_1<::System::Single>* _p0_, ::Foundation::Coroutine::CoroutineHandle _p1_)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___C__DISPLAYCLASS113_0___INJECTDELAY_B__0_OFFSET))(this, _p0_, _p1_);
		}
	};
}
