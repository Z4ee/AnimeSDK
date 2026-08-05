#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_92DACB0281238082;
namespace MoleMole::Cameras { class BangbooAdjustmentCameraConfig; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_92DACB0281238082_STRUCT_2_78CB21BCB4D02828_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BE470)
#define CLASS_1_92DACB0281238082_STRUCT_2_78CB21BCB4D02828_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_92DACB0281238082_Struct_2_78CB21BCB4D02828_TypeDefinitionIndex = 75578;

struct alignas(8) Class_1_92DACB0281238082_Struct_2_78CB21BCB4D02828
{
	::MoleMole::Cameras::BangbooAdjustmentCameraConfig* Field_2_11; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x28
	::PipelineCamera::ScopedDelegateHandle Field_2_10; // 0x30
	::Nap::NapECS::EcsWorld* Field_2_4; // 0x38
	::Class_1_92DACB0281238082* Field_2_6; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::UInt32 Field_2_5; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_STRUCT_2_78CB21BCB4D02828_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_STRUCT_2_78CB21BCB4D02828_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
