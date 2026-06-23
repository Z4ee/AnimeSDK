#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_34E304ABF8E9FF08_Class_1_AD9FF58C3FE0E0EC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_34E304ABF8E9FF08_CLASS_1_AD9FF58C3FE0E0EC_STRUCT_2_D89AAD4C4872AD9F_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CEC80)
#define CLASS_2_34E304ABF8E9FF08_CLASS_1_AD9FF58C3FE0E0EC_STRUCT_2_D89AAD4C4872AD9F_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_34E304ABF8E9FF08_Class_1_AD9FF58C3FE0E0EC_Struct_2_D89AAD4C4872AD9F_1_TypeDefinitionIndex = 70850;

struct alignas(8) Class_2_34E304ABF8E9FF08_Class_1_AD9FF58C3FE0E0EC_Struct_2_D89AAD4C4872AD9F_1
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_2_34E304ABF8E9FF08_Class_1_AD9FF58C3FE0E0EC* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_5; // 0x28
	::System::Int32 Field_2_0; // 0x2C
	::UnityEngine::Vector3 Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34E304ABF8E9FF08_CLASS_1_AD9FF58C3FE0E0EC_STRUCT_2_D89AAD4C4872AD9F_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_34E304ABF8E9FF08_CLASS_1_AD9FF58C3FE0E0EC_STRUCT_2_D89AAD4C4872AD9F_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
