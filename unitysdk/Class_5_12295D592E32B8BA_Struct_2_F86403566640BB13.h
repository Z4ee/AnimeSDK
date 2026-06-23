#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_12295D592E32B8BA_STRUCT_2_F86403566640BB13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BEDC0)
#define CLASS_5_12295D592E32B8BA_STRUCT_2_F86403566640BB13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_5_12295D592E32B8BA_Struct_2_F86403566640BB13_TypeDefinitionIndex = 65832;

struct alignas(8) Class_5_12295D592E32B8BA_Struct_2_F86403566640BB13
{
	::System::Action* Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_STRUCT_2_F86403566640BB13_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_STRUCT_2_F86403566640BB13_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
