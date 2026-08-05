#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_3_095B11B5D0604C9F;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_3_095B11B5D0604C9F_STRUCT_2_BF0EE534677AC54A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x80FAD0)
#define CLASS_3_095B11B5D0604C9F_STRUCT_2_BF0EE534677AC54A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6D9240)

inline static constexpr unsigned int Class_3_095B11B5D0604C9F_Struct_2_BF0EE534677AC54A_TypeDefinitionIndex = 49301;

struct alignas(8) Class_3_095B11B5D0604C9F_Struct_2_BF0EE534677AC54A
{
	::System::Threading::CancellationTokenSource* Field_2_5; // 0x10
	::Class_3_095B11B5D0604C9F* Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_7; // 0x30
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_095B11B5D0604C9F_STRUCT_2_BF0EE534677AC54A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_095B11B5D0604C9F_STRUCT_2_BF0EE534677AC54A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
