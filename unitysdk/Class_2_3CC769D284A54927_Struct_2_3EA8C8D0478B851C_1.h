#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_3EA8C8D0478B851C_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F5700)
#define CLASS_2_3CC769D284A54927_STRUCT_2_3EA8C8D0478B851C_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_3EA8C8D0478B851C_1_TypeDefinitionIndex = 76695;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_3EA8C8D0478B851C_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x10
	::System::Threading::CancellationTokenSource* Field_2_6; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_2_3CC769D284A54927* Field_2_0; // 0x38
	::System::Boolean Field_2_7; // 0x40
	::System::Boolean Field_2_11; // 0x41
	::System::Boolean Field_2_4; // 0x42
	::System::Boolean Field_2_5; // 0x43
	::System::Int32 Field_2_2; // 0x44
	::System::Int32 Field_2_10; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_3EA8C8D0478B851C_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_3EA8C8D0478B851C_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
