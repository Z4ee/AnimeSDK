#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading::Tasks { class Task; }

#define CLASS_2_C1491116B0527AAB_STRUCT_2_87C373068AD6DC0B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x701570)
#define CLASS_2_C1491116B0527AAB_STRUCT_2_87C373068AD6DC0B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x701580)

inline static constexpr unsigned int Class_2_C1491116B0527AAB_Struct_2_87C373068AD6DC0B_TypeDefinitionIndex = 82436;

struct alignas(8) Class_2_C1491116B0527AAB_Struct_2_87C373068AD6DC0B
{
	::System::Threading::CancellationTokenSource* Field_2_6; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> Field_2_8; // 0x18
	::System::Threading::Tasks::Task* Field_2_7; // 0x20
	::System::Action_1<::System::Boolean>* Field_2_5; // 0x28
	::System::Threading::CancellationTokenSource* Field_2_4; // 0x30
	::System::Runtime::CompilerServices::TaskAwaiter Field_2_9; // 0x38
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x40
	::System::Threading::Tasks::Task* Field_2_3; // 0x60
	::System::Int32 Field_2_0; // 0x68
	::System::TimeSpan Field_2_2; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1491116B0527AAB_STRUCT_2_87C373068AD6DC0B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_C1491116B0527AAB_STRUCT_2_87C373068AD6DC0B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
