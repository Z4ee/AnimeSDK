#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3A7CC933E49505B0;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3A7CC933E49505B0_STRUCT_2_F2263714C7FE3BC2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76F780)
#define CLASS_2_3A7CC933E49505B0_STRUCT_2_F2263714C7FE3BC2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3A7CC933E49505B0_Struct_2_F2263714C7FE3BC2_TypeDefinitionIndex = 70961;

struct alignas(8) Class_2_3A7CC933E49505B0_Struct_2_F2263714C7FE3BC2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::System::Threading::CancellationToken Field_2_5; // 0x20
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::System::Boolean, ::System::String*>> Field_2_7; // 0x28
	::Class_2_3A7CC933E49505B0* Field_2_6; // 0x48
	::System::Int32 Field_2_3; // 0x50
	::System::Int32 Field_2_0; // 0x54
	::System::Int32 Field_2_4; // 0x58
	::System::Int32 Field_2_2; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_STRUCT_2_F2263714C7FE3BC2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_STRUCT_2_F2263714C7FE3BC2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
