#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927_1;
class Class_2_3CC769D284A54927_1_Class_1_51D734184190C0D7_1;
class Class_3_48A3D3A34C52331D_37;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_91845EA8FF39F52C_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F22F0)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_91845EA8FF39F52C_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_91845EA8FF39F52C_1_TypeDefinitionIndex = 86338;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_91845EA8FF39F52C_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x10
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask Field_2_5; // 0x28
	::Class_2_3CC769D284A54927_1_Class_1_51D734184190C0D7_1* Field_2_3; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x40
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_48A3D3A34C52331D_37*> Field_2_10; // 0x50
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> Field_2_11; // 0x68
	::System::Int32 Field_2_0; // 0x78
	::System::Single Field_2_8; // 0x7C
	::System::Single Field_2_7; // 0x80
	::System::Single Field_2_6; // 0x84
	::System::Int32 Field_2_4; // 0x88

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_91845EA8FF39F52C_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_91845EA8FF39F52C_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
