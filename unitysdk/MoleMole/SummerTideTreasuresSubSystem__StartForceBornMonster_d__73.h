#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SummerTideTreasuresSubSystem; }
namespace MoleMole { class SummerTideTreasuresSubSystem_RuntimeAreaInfo; }
namespace MoleMole { class SummerTideTreasuresSubSystem_RuntimePointInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTFORCEBORNMONSTER_D__73_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8A5DB0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTFORCEBORNMONSTER_D__73_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem__StartForceBornMonster_d__73_TypeDefinitionIndex = 80763;

	struct alignas(8) SummerTideTreasuresSubSystem__StartForceBornMonster_d__73
	{
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*> __7__wrap2; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x38
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x48
		::MoleMole::SummerTideTreasuresSubSystem* __4__this; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* containsLst; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* blackLst; // 0x60
		::System::Collections::Generic::List_1_Enumerator<::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo*> __7__wrap4; // 0x68
		::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*> _kv_5__4; // 0x80
		::System::Single ignoreRadius; // 0x90
		::System::Int32 intervalNum; // 0x94
		::System::Int32 _count_5__2; // 0x98
		::System::Single radius; // 0x9C
		::System::Single bornInterval; // 0xA0
		::System::Boolean forceBorn; // 0xA4
		::System::Int32 __1__state; // 0xA8
		::UnityEngine::Vector3 center; // 0xAC

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTFORCEBORNMONSTER_D__73_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTFORCEBORNMONSTER_D__73_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
