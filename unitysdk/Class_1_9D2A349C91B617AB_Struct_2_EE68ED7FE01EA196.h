#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_9D2A349C91B617AB;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_9D2A349C91B617AB_STRUCT_2_EE68ED7FE01EA196_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C30C0)
#define CLASS_1_9D2A349C91B617AB_STRUCT_2_EE68ED7FE01EA196_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_9D2A349C91B617AB_Struct_2_EE68ED7FE01EA196_TypeDefinitionIndex = 86942;

struct alignas(8) Class_1_9D2A349C91B617AB_Struct_2_EE68ED7FE01EA196
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x18
	::System::Action* Field_2_6; // 0x28
	::Class_1_9D2A349C91B617AB* Field_2_7; // 0x30
	::System::Int32 Field_2_1; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_STRUCT_2_EE68ED7FE01EA196_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_STRUCT_2_EE68ED7FE01EA196_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
