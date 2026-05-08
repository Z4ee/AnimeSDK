#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_1AEF5DFE7F1C8F89;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_AB99B9D296E25851_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D75C0)
#define CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_AB99B9D296E25851_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_1AEF5DFE7F1C8F89_Struct_2_AB99B9D296E25851_TypeDefinitionIndex = 65028;

struct alignas(8) Class_2_1AEF5DFE7F1C8F89_Struct_2_AB99B9D296E25851
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::System::String* Field_2_4; // 0x18
	::System::String* Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x28
	::Class_2_1AEF5DFE7F1C8F89* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40
	::System::Single Field_2_5; // 0x44
	::System::Single Field_2_6; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_AB99B9D296E25851_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_AB99B9D296E25851_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
