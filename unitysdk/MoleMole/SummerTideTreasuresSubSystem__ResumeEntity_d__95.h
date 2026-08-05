#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;
namespace MoleMole { class SummerTideTreasuresSubSystem; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__RESUMEENTITY_D__95_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D0D30)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__RESUMEENTITY_D__95_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem__ResumeEntity_d__95_TypeDefinitionIndex = 80768;

	struct alignas(8) SummerTideTreasuresSubSystem__ResumeEntity_d__95
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::EntityHandle e; // 0x18
		::MoleMole::SummerTideTreasuresSubSystem* __4__this; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::Class_3_C93CC3D2C2AC4067* _modelComponent_5__2; // 0x40
		::System::Int32 __1__state; // 0x48
		::UnityEngine::Quaternion q; // 0x4C
		::UnityEngine::Vector3 pos; // 0x5C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__RESUMEENTITY_D__95_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__RESUMEENTITY_D__95_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
