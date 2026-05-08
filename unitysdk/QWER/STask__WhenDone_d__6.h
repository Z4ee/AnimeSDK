#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/STask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"

namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define QWER_STASK__WHENDONE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE8C170)
#define QWER_STASK__WHENDONE_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1BE8C410)
#define QWER_STASK__WHENDONE_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8C080)

namespace QWER
{
	inline static constexpr unsigned int STask__WhenDone_d__6_TypeDefinitionIndex = 85865;

	class STask__WhenDone_d__6 : public ::System::Object
	{
	public:
		::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Exception*> __u__1; // 0x10
		::System::Exception* _o_5__1; // 0x18
		::System::Exception* __s__2; // 0x20
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x28
		::QWER::STask __4__this; // 0x40
		::System::Int32 __1__state; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_STASK__WHENDONE_D__6__CTOR_OFFSET))(this);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_STASK__WHENDONE_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + QWER_STASK__WHENDONE_D__6_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
