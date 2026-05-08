#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/System/ValueType.h"

class Class_3_774937F661BD03CC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_774937F661BD03CC_STRUCT_2_62BEACA48467DACA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x781CA0)
#define CLASS_3_774937F661BD03CC_STRUCT_2_62BEACA48467DACA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_3_774937F661BD03CC_Struct_2_62BEACA48467DACA_TypeDefinitionIndex = 43835;

struct alignas(8) Class_3_774937F661BD03CC_Struct_2_62BEACA48467DACA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x20
	::Class_3_774937F661BD03CC* Field_2_2; // 0x28
	::Struct_2_29439DBE2B63DCF3 Field_2_3; // 0x30
	::System::Int32 Field_2_0; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_774937F661BD03CC_STRUCT_2_62BEACA48467DACA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_774937F661BD03CC_STRUCT_2_62BEACA48467DACA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
