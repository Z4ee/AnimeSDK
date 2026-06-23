#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0BF092863AC7E04F;
namespace MoleMole::Cameras { class TelescopeCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_0BF092863AC7E04F_STRUCT_2_0F7E7256CAEF9879_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x74EFB0)
#define CLASS_1_0BF092863AC7E04F_STRUCT_2_0F7E7256CAEF9879_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_0BF092863AC7E04F_Struct_2_0F7E7256CAEF9879_TypeDefinitionIndex = 80072;

struct alignas(8) Class_1_0BF092863AC7E04F_Struct_2_0F7E7256CAEF9879
{
	::Class_1_0BF092863AC7E04F* Field_2_2; // 0x10
	::PipelineCamera::ScopedDelegateHandle Field_2_8; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x20
	::MoleMole::Cameras::TelescopeCameraConfig* Field_2_7; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x30
	::UnityEngine::Vector3 Field_2_3; // 0x40
	::UnityEngine::Quaternion Field_2_4; // 0x4C
	::System::Single Field_2_5; // 0x5C
	::System::Single Field_2_6; // 0x60
	::System::Int32 Field_2_0; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_STRUCT_2_0F7E7256CAEF9879_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_STRUCT_2_0F7E7256CAEF9879_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
