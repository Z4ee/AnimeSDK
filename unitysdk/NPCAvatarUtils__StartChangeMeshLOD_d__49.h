#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_F2DAD7F45F518868;
class Class_3_FFD0045B4597F294;
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCAVATARUTILS__STARTCHANGEMESHLOD_D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x48EC50)
#define NPCAVATARUTILS__STARTCHANGEMESHLOD_D__49_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int NPCAvatarUtils__StartChangeMeshLOD_d__49_TypeDefinitionIndex = 52699;

struct alignas(8) NPCAvatarUtils__StartChangeMeshLOD_d__49
{
	::Class_3_FFD0045B4597F294* materialComponent; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
	::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* _tasks_5__4; // 0x20
	::Class_3_F2DAD7F45F518868* npcComp; // 0x28
	::System::Threading::CancellationToken cancellationToken; // 0x30
	::NPCCrowd::Lod::NPCCrowdLodRuntimeData* _lodRuntimeData_5__2; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x40
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x50
	::System::Boolean _needFade_5__3; // 0x60
	::System::Boolean forceNoFade; // 0x61
	::System::Boolean _useGpuLod_5__5; // 0x62
	::NPCCrowd::Lod::ELODLevel lod; // 0x64
	::System::Int32 __1__state; // 0x68
	::NPCCrowd::Lod::ELODLevel oldLod; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__STARTCHANGEMESHLOD_D__49_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__STARTCHANGEMESHLOD_D__49_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
