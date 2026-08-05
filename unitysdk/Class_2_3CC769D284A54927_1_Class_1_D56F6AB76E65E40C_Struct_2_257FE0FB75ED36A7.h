#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CC769D284A54927_1_Enum_3_00FFDC50F7969380.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927_1_Class_1_D56F6AB76E65E40C;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_CLASS_1_D56F6AB76E65E40C_STRUCT_2_257FE0FB75ED36A7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8919C0)
#define CLASS_2_3CC769D284A54927_1_CLASS_1_D56F6AB76E65E40C_STRUCT_2_257FE0FB75ED36A7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Class_1_D56F6AB76E65E40C_Struct_2_257FE0FB75ED36A7_TypeDefinitionIndex = 62903;

struct alignas(8) Class_2_3CC769D284A54927_1_Class_1_D56F6AB76E65E40C_Struct_2_257FE0FB75ED36A7
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x20
	::Class_2_3CC769D284A54927_1_Class_1_D56F6AB76E65E40C* Field_2_0; // 0x30
	::System::Int32 Field_2_3; // 0x38
	::Class_2_3CC769D284A54927_1_Enum_3_00FFDC50F7969380 Field_2_1; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_D56F6AB76E65E40C_STRUCT_2_257FE0FB75ED36A7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_D56F6AB76E65E40C_STRUCT_2_257FE0FB75ED36A7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
