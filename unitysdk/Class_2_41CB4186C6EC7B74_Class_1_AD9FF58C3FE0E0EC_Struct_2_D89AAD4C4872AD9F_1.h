#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_41CB4186C6EC7B74_Class_1_AD9FF58C3FE0E0EC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_41CB4186C6EC7B74_CLASS_1_AD9FF58C3FE0E0EC_STRUCT_2_D89AAD4C4872AD9F_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C1430)
#define CLASS_2_41CB4186C6EC7B74_CLASS_1_AD9FF58C3FE0E0EC_STRUCT_2_D89AAD4C4872AD9F_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_41CB4186C6EC7B74_Class_1_AD9FF58C3FE0E0EC_Struct_2_D89AAD4C4872AD9F_1_TypeDefinitionIndex = 68275;

struct alignas(8) Class_2_41CB4186C6EC7B74_Class_1_AD9FF58C3FE0E0EC_Struct_2_D89AAD4C4872AD9F_1
{
	::Class_2_41CB4186C6EC7B74_Class_1_AD9FF58C3FE0E0EC* Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x18
	::UnityEngine::Vector3 Field_2_7; // 0x28
	::System::Single Field_2_4; // 0x34
	::UnityEngine::Vector3 Field_2_5; // 0x38
	::System::Int32 Field_2_1; // 0x44
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_11; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41CB4186C6EC7B74_CLASS_1_AD9FF58C3FE0E0EC_STRUCT_2_D89AAD4C4872AD9F_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_41CB4186C6EC7B74_CLASS_1_AD9FF58C3FE0E0EC_STRUCT_2_D89AAD4C4872AD9F_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
