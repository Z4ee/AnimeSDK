#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Struct_2_31852543D3677906.h"
#include "unitysdk/Struct_2_55C21A1C92240CC8.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_76DB84416A8BD8BA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_523713A408D9D32E_STRUCT_2_963BA19EA76FBE0C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8510B0)
#define CLASS_1_523713A408D9D32E_STRUCT_2_963BA19EA76FBE0C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B600)

inline static constexpr unsigned int Class_1_523713A408D9D32E_Struct_2_963BA19EA76FBE0C_TypeDefinitionIndex = 50247;

struct alignas(8) Class_1_523713A408D9D32E_Struct_2_963BA19EA76FBE0C
{
	::Class_1_76DB84416A8BD8BA* Field_2_7; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Struct_2_31852543D3677906> Field_2_6; // 0x38
	::Struct_2_55C21A1C92240CC8 Field_2_0; // 0x48
	::System::Int32 Field_2_2; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_523713A408D9D32E_STRUCT_2_963BA19EA76FBE0C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_523713A408D9D32E_STRUCT_2_963BA19EA76FBE0C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
