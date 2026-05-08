#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"

namespace QWER { class CRunner___c__DisplayClass51_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { class Task; }

#define QWER_CRUNNER___C__DISPLAYCLASS51_0___POST_B__0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE88F30)
#define QWER_CRUNNER___C__DISPLAYCLASS51_0___POST_B__0_D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1BE891C0)
#define QWER_CRUNNER___C__DISPLAYCLASS51_0___POST_B__0_D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE88F20)

namespace QWER
{
	inline static constexpr unsigned int CRunner___c__DisplayClass51_0___Post_b__0_d_TypeDefinitionIndex = 85855;

	class CRunner___c__DisplayClass51_0___Post_b__0_d : public ::System::Object
	{
	public:
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::QWER::CRunner___c__DisplayClass51_0* __4__this; // 0x30
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x38
		::System::Object* state; // 0x40
		::System::Threading::Tasks::Task* _t_5__1; // 0x48
		::System::Int32 __1__state; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER___C__DISPLAYCLASS51_0___POST_B__0_D__CTOR_OFFSET))(this);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER___C__DISPLAYCLASS51_0___POST_B__0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + QWER_CRUNNER___C__DISPLAYCLASS51_0___POST_B__0_D_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
