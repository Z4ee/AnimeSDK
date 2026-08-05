#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_3_1C214E03D1E1228E;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_1C214E03D1E1228E_STRUCT_2_14B399B7E2E49AA8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x60FF40)
#define CLASS_3_1C214E03D1E1228E_STRUCT_2_14B399B7E2E49AA8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_1C214E03D1E1228E_Struct_2_14B399B7E2E49AA8_TypeDefinitionIndex = 63353;

struct alignas(8) Class_3_1C214E03D1E1228E_Struct_2_14B399B7E2E49AA8
{
	::Class_3_1C214E03D1E1228E* Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x18
	::System::Int32 Field_2_1; // 0x28
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_6; // 0x2C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C214E03D1E1228E_STRUCT_2_14B399B7E2E49AA8_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_1C214E03D1E1228E_STRUCT_2_14B399B7E2E49AA8_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
