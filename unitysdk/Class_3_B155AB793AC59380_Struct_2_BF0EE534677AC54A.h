#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_3_B155AB793AC59380;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_3_B155AB793AC59380_STRUCT_2_BF0EE534677AC54A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7535C0)
#define CLASS_3_B155AB793AC59380_STRUCT_2_BF0EE534677AC54A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6069D0)

inline static constexpr unsigned int Class_3_B155AB793AC59380_Struct_2_BF0EE534677AC54A_TypeDefinitionIndex = 76352;

struct alignas(8) Class_3_B155AB793AC59380_Struct_2_BF0EE534677AC54A
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::System::Threading::CancellationTokenSource* Field_2_3; // 0x30
	::Class_3_B155AB793AC59380* Field_2_2; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x40
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B155AB793AC59380_STRUCT_2_BF0EE534677AC54A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_B155AB793AC59380_STRUCT_2_BF0EE534677AC54A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
