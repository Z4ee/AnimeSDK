#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D43702405C026A47;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_D43702405C026A47_STRUCT_2_DEED8A1B057201B8_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5942F0)
#define CLASS_1_D43702405C026A47_STRUCT_2_DEED8A1B057201B8_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_D43702405C026A47_Struct_2_DEED8A1B057201B8_1_TypeDefinitionIndex = 64056;

struct alignas(8) Class_1_D43702405C026A47_Struct_2_DEED8A1B057201B8_1
{
	::System::String* Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x18
	::Class_1_D43702405C026A47* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_4; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D43702405C026A47_STRUCT_2_DEED8A1B057201B8_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_D43702405C026A47_STRUCT_2_DEED8A1B057201B8_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
