#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_207206F45DEB584F;
namespace MoleMole::Cameras { class VariableCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_207206F45DEB584F_STRUCT_2_4BC3BFAA52EF792C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x87E2A0)
#define CLASS_1_207206F45DEB584F_STRUCT_2_4BC3BFAA52EF792C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_207206F45DEB584F_Struct_2_4BC3BFAA52EF792C_TypeDefinitionIndex = 75820;

struct alignas(8) Class_1_207206F45DEB584F_Struct_2_4BC3BFAA52EF792C
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::MoleMole::Cameras::VariableCameraConfig* Field_2_7; // 0x18
	::PipelineCamera::ScopedDelegateHandle Field_2_5; // 0x20
	::Class_1_207206F45DEB584F* Field_2_0; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::System::Boolean Field_2_6; // 0x40
	::System::Int32 Field_2_2; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_STRUCT_2_4BC3BFAA52EF792C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_STRUCT_2_4BC3BFAA52EF792C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
