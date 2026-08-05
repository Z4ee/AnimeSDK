#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class SummerTideTreasuresSubSystem; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTBORNMONSTER_D__72_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x868B80)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTBORNMONSTER_D__72_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem__StartBornMonster_d__72_TypeDefinitionIndex = 80764;

	struct alignas(8) SummerTideTreasuresSubSystem__StartBornMonster_d__72
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::MoleMole::SummerTideTreasuresSubSystem* __4__this; // 0x28
		::System::Int32 _count_5__2; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Boolean checkDis; // 0x38
		::System::Single bornInterval; // 0x3C
		::System::Int32 intervalNum; // 0x40
		::System::Int32 _i_5__3; // 0x44
		::System::Int32 num; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTBORNMONSTER_D__72_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTBORNMONSTER_D__72_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
