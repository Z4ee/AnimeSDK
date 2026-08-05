#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3590405E0F4D36CE;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_3590405E0F4D36CE_STRUCT_2_DEED8A1B057201B8_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C7DF0)
#define CLASS_1_3590405E0F4D36CE_STRUCT_2_DEED8A1B057201B8_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_3590405E0F4D36CE_Struct_2_DEED8A1B057201B8_1_TypeDefinitionIndex = 54716;

struct alignas(8) Class_1_3590405E0F4D36CE_Struct_2_DEED8A1B057201B8_1
{
	::System::String* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_4; // 0x20
	::Class_1_3590405E0F4D36CE* Field_2_6; // 0x30
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3590405E0F4D36CE_STRUCT_2_DEED8A1B057201B8_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_3590405E0F4D36CE_STRUCT_2_DEED8A1B057201B8_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
