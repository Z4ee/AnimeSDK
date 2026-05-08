#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3590405E0F4D36CE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_3590405E0F4D36CE_STRUCT_2_7B9CDCA42AAAEDD7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7683F0)
#define CLASS_1_3590405E0F4D36CE_STRUCT_2_7B9CDCA42AAAEDD7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_3590405E0F4D36CE_Struct_2_7B9CDCA42AAAEDD7_TypeDefinitionIndex = 56906;

struct alignas(8) Class_1_3590405E0F4D36CE_Struct_2_7B9CDCA42AAAEDD7
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_4; // 0x10
	::Class_1_3590405E0F4D36CE* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3590405E0F4D36CE_STRUCT_2_7B9CDCA42AAAEDD7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_3590405E0F4D36CE_STRUCT_2_7B9CDCA42AAAEDD7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
