#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_3_FBBB9A824FF6A2E6;
class Class_3_FBBB9A824FF6A2E6_Class_1_456A9D29EFE2BEA6;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_FBBB9A824FF6A2E6_STRUCT_2_3566E50F0EB98E1C_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x84F500)
#define CLASS_3_FBBB9A824FF6A2E6_STRUCT_2_3566E50F0EB98E1C_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_3_FBBB9A824FF6A2E6_Struct_2_3566E50F0EB98E1C_1_TypeDefinitionIndex = 72400;

struct alignas(8) Class_3_FBBB9A824FF6A2E6_Struct_2_3566E50F0EB98E1C_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Class_3_FBBB9A824FF6A2E6* Field_2_2; // 0x30
	::Class_3_FBBB9A824FF6A2E6_Class_1_456A9D29EFE2BEA6* Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_STRUCT_2_3566E50F0EB98E1C_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_STRUCT_2_3566E50F0EB98E1C_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
