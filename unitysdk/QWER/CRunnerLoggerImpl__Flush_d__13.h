#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"

namespace QWER { class CRunnerLoggerImpl; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { class Task; }

#define QWER_CRUNNERLOGGERIMPL__FLUSH_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE8AA20)
#define QWER_CRUNNERLOGGERIMPL__FLUSH_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1BE8ADE0)
#define QWER_CRUNNERLOGGERIMPL__FLUSH_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8A940)

namespace QWER
{
	inline static constexpr unsigned int CRunnerLoggerImpl__Flush_d__13_TypeDefinitionIndex = 85860;

	class CRunnerLoggerImpl__Flush_d__13 : public ::System::Object
	{
	public:
		::QWER::CRunnerLoggerImpl* __4__this; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x18
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x30
		::System::Threading::Tasks::Task* _oTask_5__3; // 0x38
		::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* _oTasks_5__1; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Int32 _i_5__2; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL__FLUSH_D__13__CTOR_OFFSET))(this);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL__FLUSH_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL__FLUSH_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
