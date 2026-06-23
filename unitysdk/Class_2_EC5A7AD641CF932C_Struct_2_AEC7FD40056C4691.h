#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueType.h"

class Class_2_EC5A7AD641CF932C;
namespace System { template <typename T> class Func_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_AEC7FD40056C4691_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x69AA20)
#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_AEC7FD40056C4691_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Struct_2_AEC7FD40056C4691_TypeDefinitionIndex = 51039;

struct alignas(8) Class_2_EC5A7AD641CF932C_Struct_2_AEC7FD40056C4691
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_4; // 0x10
	::Class_2_EC5A7AD641CF932C* Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Func_1<::PipelineCamera::WorldBasicCameraData>* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_AEC7FD40056C4691_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_AEC7FD40056C4691_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
