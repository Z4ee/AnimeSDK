#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/NPCCrowd/Lod/NPCLODRendererItem.h"
#include "unitysdk/System/ValueType.h"

class Class_3_FFD0045B4597F294;
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___STARTFADE_G__STARTFADEANDRELEASE_29_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x625C60)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___STARTFADE_G__STARTFADEANDRELEASE_29_0_D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager___StartFade_g__StartFadeAndRelease_29_0_d_TypeDefinitionIndex = 49538;

	struct alignas(8) NPCAccessoryManager___StartFade_g__StartFadeAndRelease_29_0_d
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Class_3_FFD0045B4597F294* matComponent; // 0x20
		::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* renderers; // 0x28
		::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x38
		::System::Int32 __1__state; // 0x48
		::System::Single fadeTime; // 0x4C
		::System::Boolean fadeIn; // 0x50
		::System::Int32 rendererInstanceID; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___STARTFADE_G__STARTFADEANDRELEASE_29_0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___STARTFADE_G__STARTFADEANDRELEASE_29_0_D_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
