#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_320C82F6FBE288EC;
class Class_2_320C82F6FBE288EC_Class_1_1A520E7D82BE4A56_10;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_320C82F6FBE288EC_STRUCT_2_D473F93BD6D472D2_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x73C270)
#define CLASS_2_320C82F6FBE288EC_STRUCT_2_D473F93BD6D472D2_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_320C82F6FBE288EC_Struct_2_D473F93BD6D472D2_1_TypeDefinitionIndex = 66913;

struct alignas(8) Class_2_320C82F6FBE288EC_Struct_2_D473F93BD6D472D2_1
{
	::Class_2_320C82F6FBE288EC* Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x28
	::Class_2_320C82F6FBE288EC_Class_1_1A520E7D82BE4A56_10* Field_2_5; // 0x38
	::System::Threading::CancellationToken Field_2_11; // 0x40
	::System::Int32 Field_2_4; // 0x48
	::System::Int32 Field_2_0; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_320C82F6FBE288EC_STRUCT_2_D473F93BD6D472D2_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_320C82F6FBE288EC_STRUCT_2_D473F93BD6D472D2_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
