#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ABB13E12DFC246CE_Enum_3_4AAA2F4694F9E394.h"
#include "unitysdk/Class_2_3A7CC933E49505B0_Struct_2_0839504A496058D2.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_ABB13E12DFC246CE_Class_1_DBC388EAA88E6AE1;
class Class_2_3A7CC933E49505B0;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3A7CC933E49505B0_STRUCT_2_7F790C30609F6466_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7948F0)
#define CLASS_2_3A7CC933E49505B0_STRUCT_2_7F790C30609F6466_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3A7CC933E49505B0_Struct_2_7F790C30609F6466_TypeDefinitionIndex = 52172;

struct alignas(8) Class_2_3A7CC933E49505B0_Struct_2_7F790C30609F6466
{
	::System::Threading::CancellationToken Field_2_4; // 0x10
	::Class_2_3A7CC933E49505B0_Struct_2_0839504A496058D2 Field_2_5; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_1_ABB13E12DFC246CE_Enum_3_4AAA2F4694F9E394> Field_2_1; // 0x28
	::Class_2_3A7CC933E49505B0* Field_2_2; // 0x40
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_ABB13E12DFC246CE_Class_1_DBC388EAA88E6AE1*> Field_2_6; // 0x48
	::System::Int32 Field_2_3; // 0x60
	::System::Int32 Field_2_0; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_STRUCT_2_7F790C30609F6466_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_STRUCT_2_7F790C30609F6466_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
