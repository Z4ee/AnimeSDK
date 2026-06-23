#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Struct_2_9D8B950D8621E6B3.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_508;
class Class_1_7FE6687E3546072C;
class Class_1_B7C41BE725AAED79;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_7FE6687E3546072C_STRUCT_2_3E4F5CC13CB42DBC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x67A5D0)
#define CLASS_1_7FE6687E3546072C_STRUCT_2_3E4F5CC13CB42DBC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_7FE6687E3546072C_Struct_2_3E4F5CC13CB42DBC_TypeDefinitionIndex = 71935;

struct alignas(8) Class_1_7FE6687E3546072C_Struct_2_3E4F5CC13CB42DBC
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Struct_2_9D8B950D8621E6B3> Field_2_7; // 0x10
	::Class_0_16E4307DCC419505_508* Field_2_4; // 0x30
	::Class_1_7FE6687E3546072C* Field_2_3; // 0x38
	::System::String* Field_2_2; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Struct_2_9D8B950D8621E6B3> Field_2_1; // 0x48
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_B7C41BE725AAED79*> Field_2_6; // 0x68
	::System::Int32 Field_2_0; // 0x80
	::System::Int32 Field_2_5; // 0x84

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FE6687E3546072C_STRUCT_2_3E4F5CC13CB42DBC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_7FE6687E3546072C_STRUCT_2_3E4F5CC13CB42DBC_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
