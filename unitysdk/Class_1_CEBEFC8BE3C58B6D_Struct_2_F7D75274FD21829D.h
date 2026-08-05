#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_CEBEFC8BE3C58B6D;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_CEBEFC8BE3C58B6D_STRUCT_2_F7D75274FD21829D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FBD00)
#define CLASS_1_CEBEFC8BE3C58B6D_STRUCT_2_F7D75274FD21829D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_CEBEFC8BE3C58B6D_Struct_2_F7D75274FD21829D_TypeDefinitionIndex = 53412;

struct alignas(8) Class_1_CEBEFC8BE3C58B6D_Struct_2_F7D75274FD21829D
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_0; // 0x10
	::Class_1_CEBEFC8BE3C58B6D* Field_2_7; // 0x18
	::MoleMole::Cameras::CameraTrackBlending* Field_2_5; // 0x20
	::MoleMole::Cameras::CameraTrackBlending* Field_2_6; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x30
	::PipelineCamera::ScopedDelegateHandle Field_2_4; // 0x40
	::System::Int32 Field_2_1; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_STRUCT_2_F7D75274FD21829D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_STRUCT_2_F7D75274FD21829D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
