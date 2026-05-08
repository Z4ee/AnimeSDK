#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { class Task; }

#define QWER_CTASKHELPER____D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE8B4C0)
#define QWER_CTASKHELPER____D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1BE8B6E0)
#define QWER_CTASKHELPER____D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8AF20)

namespace QWER
{
	inline static constexpr unsigned int CTaskHelper____d__2_TypeDefinitionIndex = 85871;

	class CTaskHelper____d__2 : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task* task; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x18
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER____D__2__CTOR_OFFSET))(this);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER____D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER____D__2_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
