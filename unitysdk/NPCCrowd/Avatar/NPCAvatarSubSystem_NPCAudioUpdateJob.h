#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_NPCAUDIOUPDATEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6F4B90)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarSubSystem_NPCAudioUpdateJob_TypeDefinitionIndex = 58538;

	struct alignas(4) NPCAvatarSubSystem_NPCAudioUpdateJob
	{
		::UnityEngine::Vector3 ListenerPos; // 0x10
		::System::Single UnscaledTime; // 0x1C

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_NPCAUDIOUPDATEJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
