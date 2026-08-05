#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_4AF8D6CF5BED3FDC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_4AF8D6CF5BED3FDC_STRUCT_2_1D09F395F9763127_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x72F160)
#define CLASS_1_4AF8D6CF5BED3FDC_STRUCT_2_1D09F395F9763127_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_4AF8D6CF5BED3FDC_Struct_2_1D09F395F9763127_TypeDefinitionIndex = 46006;

struct alignas(8) Class_1_4AF8D6CF5BED3FDC_Struct_2_1D09F395F9763127
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter Field_2_10; // 0x20
	::System::Threading::CancellationToken Field_2_7; // 0x30
	::Class_1_4AF8D6CF5BED3FDC* Field_2_5; // 0x38
	::UnityEngine::Vector3Int Field_2_6; // 0x40
	::System::Boolean Field_2_4; // 0x4C
	::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter Field_2_11; // 0x4D
	::System::Int32 Field_2_1; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF8D6CF5BED3FDC_STRUCT_2_1D09F395F9763127_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_4AF8D6CF5BED3FDC_STRUCT_2_1D09F395F9763127_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
