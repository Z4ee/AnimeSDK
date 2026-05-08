#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER___C__DISPLAYCLASS127_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A76E0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___C__DISPLAYCLASS127_0___STARTWHENDONE_B__0_OFFSET UNITYSDK_OFFSET(0x1C1A76F0)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager___c__DisplayClass127_0_TypeDefinitionIndex = 7842;

	class CoroutineManager___c__DisplayClass127_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Single>* pausedProc; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___C__DISPLAYCLASS127_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* __StartWhenDone_b__0(::System::Collections::Generic::IEnumerator_1<::System::Single>* _p0_, ::Foundation::Coroutine::CoroutineHandle _p1_)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___C__DISPLAYCLASS127_0___STARTWHENDONE_B__0_OFFSET))(this, _p0_, _p1_);
		}
	};
}
