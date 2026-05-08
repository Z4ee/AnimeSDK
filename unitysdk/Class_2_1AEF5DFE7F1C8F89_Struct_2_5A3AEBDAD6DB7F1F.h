#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_1AEF5DFE7F1C8F89;
class Class_2_D0F43E2E93E0D88C;
class Class_2_D0F43E2E93E0D88C_Class_2_789DB209FB3DF9F3;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_5A3AEBDAD6DB7F1F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x72FD60)
#define CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_5A3AEBDAD6DB7F1F_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_1AEF5DFE7F1C8F89_Struct_2_5A3AEBDAD6DB7F1F_TypeDefinitionIndex = 65029;

struct alignas(8) Class_2_1AEF5DFE7F1C8F89_Struct_2_5A3AEBDAD6DB7F1F
{
	::Class_2_1AEF5DFE7F1C8F89* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87> Field_2_9; // 0x20
	::Class_2_D0F43E2E93E0D88C* Field_2_5; // 0x30
	::System::Action* Field_2_3; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x40
	::Class_2_D0F43E2E93E0D88C_Class_2_789DB209FB3DF9F3* Field_2_6; // 0x50
	::System::Single Field_2_7; // 0x58
	::System::Int32 Field_2_0; // 0x5C
	::System::Single Field_2_4; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_5A3AEBDAD6DB7F1F_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_5A3AEBDAD6DB7F1F_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
