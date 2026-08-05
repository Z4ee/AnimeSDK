#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_586CFAEB475DA2D2;
class Class_2_586CFAEB475DA2D2_Class_1_73930065C88361FD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_586CFAEB475DA2D2_STRUCT_2_39E2ACAFCF33ABC8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F5D50)
#define CLASS_2_586CFAEB475DA2D2_STRUCT_2_39E2ACAFCF33ABC8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_586CFAEB475DA2D2_Struct_2_39E2ACAFCF33ABC8_TypeDefinitionIndex = 57803;

struct alignas(8) Class_2_586CFAEB475DA2D2_Struct_2_39E2ACAFCF33ABC8
{
	::Class_2_586CFAEB475DA2D2_Class_1_73930065C88361FD* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x18
	::Class_2_586CFAEB475DA2D2* Field_2_6; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x30
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_586CFAEB475DA2D2_STRUCT_2_39E2ACAFCF33ABC8_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_586CFAEB475DA2D2_STRUCT_2_39E2ACAFCF33ABC8_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
