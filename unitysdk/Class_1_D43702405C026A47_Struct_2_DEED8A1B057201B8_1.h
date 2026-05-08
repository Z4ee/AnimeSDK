#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D43702405C026A47;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_D43702405C026A47_STRUCT_2_DEED8A1B057201B8_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x744430)
#define CLASS_1_D43702405C026A47_STRUCT_2_DEED8A1B057201B8_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_D43702405C026A47_Struct_2_DEED8A1B057201B8_1_TypeDefinitionIndex = 65770;

struct alignas(8) Class_1_D43702405C026A47_Struct_2_DEED8A1B057201B8_1
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Class_1_D43702405C026A47* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_4; // 0x20
	::System::String* Field_2_3; // 0x30
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
