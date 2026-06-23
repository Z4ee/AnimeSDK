#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_17106743E900C7CC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_17106743E900C7CC_STRUCT_2_67E8B59A0E6454E1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x759320)
#define CLASS_1_17106743E900C7CC_STRUCT_2_67E8B59A0E6454E1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

inline static constexpr unsigned int Class_1_17106743E900C7CC_Struct_2_67E8B59A0E6454E1_TypeDefinitionIndex = 46330;

struct alignas(8) Class_1_17106743E900C7CC_Struct_2_67E8B59A0E6454E1
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::Class_1_17106743E900C7CC* Field_2_3; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> Field_2_5; // 0x38
	::System::Int32 Field_2_0; // 0x48
	::System::Boolean Field_2_2; // 0x4C
	::System::Boolean Field_2_4; // 0x4D

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_STRUCT_2_67E8B59A0E6454E1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_STRUCT_2_67E8B59A0E6454E1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
