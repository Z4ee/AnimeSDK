#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_3EA8C8D0478B851C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x41FFD0)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_3EA8C8D0478B851C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_3EA8C8D0478B851C_TypeDefinitionIndex = 57626;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_3EA8C8D0478B851C
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x10
	::System::Threading::CancellationTokenSource* Field_2_5; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x38
	::System::Int32 Field_2_3; // 0x40
	::System::Boolean Field_2_7; // 0x44
	::System::Boolean Field_2_8; // 0x45
	::System::Boolean Field_2_6; // 0x46
	::System::Boolean Field_2_4; // 0x47
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_3EA8C8D0478B851C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_3EA8C8D0478B851C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
