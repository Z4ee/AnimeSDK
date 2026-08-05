#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_59C132113475898E;
class Class_2_59C132113475898E_Class_1_9BFD28ECD33E44BF_2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_59C132113475898E_STRUCT_2_1889BD8C3B692F58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x86E1E0)
#define CLASS_2_59C132113475898E_STRUCT_2_1889BD8C3B692F58_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_59C132113475898E_Struct_2_1889BD8C3B692F58_TypeDefinitionIndex = 70770;

struct alignas(8) Class_2_59C132113475898E_Struct_2_1889BD8C3B692F58
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x10
	::Class_2_59C132113475898E_Class_1_9BFD28ECD33E44BF_2* Field_2_4; // 0x20
	::System::Threading::CancellationToken Field_2_5; // 0x28
	::Class_2_59C132113475898E* Field_2_6; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_7; // 0x38
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_STRUCT_2_1889BD8C3B692F58_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_STRUCT_2_1889BD8C3B692F58_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
