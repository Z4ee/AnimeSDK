#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_59C132113475898E;
class Class_2_59C132113475898E_Class_1_C40C6E99261D653F;
class Class_3_472679C84451629A_21;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_59C132113475898E_STRUCT_2_416EFA9240145E8F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x703590)
#define CLASS_2_59C132113475898E_STRUCT_2_416EFA9240145E8F_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_59C132113475898E_Struct_2_416EFA9240145E8F_TypeDefinitionIndex = 53048;

struct alignas(8) Class_2_59C132113475898E_Struct_2_416EFA9240145E8F
{
	::Class_2_59C132113475898E_Class_1_C40C6E99261D653F* Field_2_6; // 0x10
	::System::Threading::CancellationToken Field_2_5; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_3_472679C84451629A_21*> Field_2_1; // 0x30
	::Class_2_59C132113475898E* Field_2_4; // 0x48
	::System::Int32 Field_2_2; // 0x50
	::System::Int32 Field_2_0; // 0x54
	::System::Int32 Field_2_3; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_STRUCT_2_416EFA9240145E8F_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_STRUCT_2_416EFA9240145E8F_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
