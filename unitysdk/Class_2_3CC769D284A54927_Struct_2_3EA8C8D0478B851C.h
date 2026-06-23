#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_3EA8C8D0478B851C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F7DB0)
#define CLASS_2_3CC769D284A54927_STRUCT_2_3EA8C8D0478B851C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_3EA8C8D0478B851C_TypeDefinitionIndex = 65362;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_3EA8C8D0478B851C
{
	::System::Threading::CancellationTokenSource* Field_2_5; // 0x10
	::Class_2_3CC769D284A54927* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x30
	::System::Boolean Field_2_4; // 0x40
	::System::Boolean Field_2_8; // 0x41
	::System::Boolean Field_2_6; // 0x42
	::System::Boolean Field_2_7; // 0x43
	::System::Int32 Field_2_0; // 0x44
	::System::Int32 Field_2_3; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_3EA8C8D0478B851C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_3EA8C8D0478B851C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
