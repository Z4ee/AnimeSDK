#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0E0FDB8D70D6AE90_Class_1_61AE483B33052410_28;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_0E0FDB8D70D6AE90_STRUCT_2_8C8AE54874AF4317_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8642B0)
#define CLASS_1_0E0FDB8D70D6AE90_STRUCT_2_8C8AE54874AF4317_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_0E0FDB8D70D6AE90_Struct_2_8C8AE54874AF4317_TypeDefinitionIndex = 91446;

struct alignas(8) Class_1_0E0FDB8D70D6AE90_Struct_2_8C8AE54874AF4317
{
	::Class_1_0E0FDB8D70D6AE90_Class_1_61AE483B33052410_28* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x18
	::System::Action* Field_2_1; // 0x28
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> Field_2_10; // 0x30
	::System::Action* Field_2_7; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_2; // 0x48
	::System::Nullable_1<::System::Int32> Field_2_6; // 0x60
	::System::Int32 Field_2_0; // 0x68
	::System::Int32 Field_2_3; // 0x6C
	::System::Nullable_1<::System::Int32> Field_2_4; // 0x70
	::System::Boolean Field_2_11; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_STRUCT_2_8C8AE54874AF4317_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_STRUCT_2_8C8AE54874AF4317_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
