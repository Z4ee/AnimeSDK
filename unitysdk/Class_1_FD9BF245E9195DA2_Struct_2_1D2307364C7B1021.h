#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_FD9BF245E9195DA2;
namespace MoleMole::Cameras { class BezierSurfaceCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_FD9BF245E9195DA2_STRUCT_2_1D2307364C7B1021_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x86A9B0)
#define CLASS_1_FD9BF245E9195DA2_STRUCT_2_1D2307364C7B1021_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_FD9BF245E9195DA2_Struct_2_1D2307364C7B1021_TypeDefinitionIndex = 79786;

struct alignas(8) Class_1_FD9BF245E9195DA2_Struct_2_1D2307364C7B1021
{
	::PipelineCamera::ScopedDelegateHandle Field_2_7; // 0x10
	::Class_1_FD9BF245E9195DA2* Field_2_1; // 0x18
	::MoleMole::Cameras::BezierSurfaceCameraConfig* Field_2_0; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_2; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x30
	::System::Int32 Field_2_3; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_STRUCT_2_1D2307364C7B1021_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_STRUCT_2_1D2307364C7B1021_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
