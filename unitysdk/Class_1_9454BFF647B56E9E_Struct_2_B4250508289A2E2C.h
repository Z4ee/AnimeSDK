#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/Struct_2_6188FB36C2269853.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_9454BFF647B56E9E;
namespace MoleMole::Cameras { class TacticalCombatCameraConfig; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_9454BFF647B56E9E_STRUCT_2_B4250508289A2E2C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8BCBA0)
#define CLASS_1_9454BFF647B56E9E_STRUCT_2_B4250508289A2E2C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_9454BFF647B56E9E_Struct_2_B4250508289A2E2C_TypeDefinitionIndex = 50047;

struct alignas(8) Class_1_9454BFF647B56E9E_Struct_2_B4250508289A2E2C
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_0; // 0x10
	::PipelineCamera::ScopedDelegateHandle Field_2_4; // 0x18
	::MoleMole::Cameras::TacticalCombatCameraConfig* Field_2_6; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x28
	::Class_1_9454BFF647B56E9E* Field_2_7; // 0x38
	::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* Field_2_5; // 0x40
	::System::Int32 Field_2_1; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_STRUCT_2_B4250508289A2E2C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_STRUCT_2_B4250508289A2E2C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
