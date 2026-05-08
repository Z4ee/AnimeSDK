#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS__SETACCESSORYMDBLOD_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x4B7AB0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS__SETACCESSORYMDBLOD_D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryUtils__SetAccessoryMdbLOD_d__7_TypeDefinitionIndex = 46221;

	struct alignas(8) NPCAccessoryUtils__SetAccessoryMdbLOD_d__7
	{
		::NPCCrowd::Accessories::NPCAccessory* acc; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::NPCCrowd::Lod::ELODLevel oldLod; // 0x30
		::System::Int32 __1__state; // 0x34
		::NPCCrowd::Lod::ELODLevel lod; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS__SETACCESSORYMDBLOD_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS__SETACCESSORYMDBLOD_D__7_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
