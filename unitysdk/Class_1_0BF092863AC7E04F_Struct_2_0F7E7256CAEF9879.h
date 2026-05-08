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

#define CLASS_1_0BF092863AC7E04F_STRUCT_2_0F7E7256CAEF9879_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B0880)
#define CLASS_1_0BF092863AC7E04F_STRUCT_2_0F7E7256CAEF9879_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_0BF092863AC7E04F_Struct_2_0F7E7256CAEF9879_TypeDefinitionIndex = 74507;

struct alignas(8) Class_1_0BF092863AC7E04F_Struct_2_0F7E7256CAEF9879
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x10
	::PipelineCamera::ScopedDelegateHandle Field_2_8; // 0x20
	::Class_1_0BF092863AC7E04F* Field_2_2; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x30
	::MoleMole::Cameras::TelescopeCameraConfig* Field_2_7; // 0x38
	::System::Single Field_2_6; // 0x40
	::System::Single Field_2_5; // 0x44
	::System::Int32 Field_2_0; // 0x48
	::UnityEngine::Vector3 Field_2_3; // 0x4C
	::UnityEngine::Quaternion Field_2_4; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_STRUCT_2_0F7E7256CAEF9879_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_STRUCT_2_0F7E7256CAEF9879_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
