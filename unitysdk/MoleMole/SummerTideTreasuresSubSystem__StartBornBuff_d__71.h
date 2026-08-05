#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class SummerTideTreasuresSubSystem; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTBORNBUFF_D__71_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D37E0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTBORNBUFF_D__71_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem__StartBornBuff_d__71_TypeDefinitionIndex = 80759;

	struct alignas(8) SummerTideTreasuresSubSystem__StartBornBuff_d__71
	{
		::MoleMole::SummerTideTreasuresSubSystem* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::System::Single bornInterval; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Boolean checkDis; // 0x38
		::System::Int32 num; // 0x3C
		::System::Int32 _i_5__2; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTBORNBUFF_D__71_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTBORNBUFF_D__71_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
