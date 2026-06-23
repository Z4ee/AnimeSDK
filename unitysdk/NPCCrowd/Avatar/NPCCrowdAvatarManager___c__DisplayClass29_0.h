#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/FNPCAttachPointNameHandle.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class NPCCPUAnimationSlotInfo; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD945750)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS29_0__POSTLOADAVATARGOGALGAME_B__1_OFFSET UNITYSDK_OFFSET(0xD945760)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS29_0__POSTLOADAVATARGOGALGAME_B__2_OFFSET UNITYSDK_OFFSET(0xD945780)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass29_0_TypeDefinitionIndex = 66893;

	class NPCCrowdAvatarManager___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::NPCCrowd::FNPCAttachPointNameHandle middlePointNameHandle; // 0x10
		::NPCCrowd::FNPCAttachPointNameHandle headBoneNameHandle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PostLoadAvatarGoGalgame_b__1(::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* slotInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS29_0__POSTLOADAVATARGOGALGAME_B__1_OFFSET))(this, slotInfo);
		}

		::System::Boolean _PostLoadAvatarGoGalgame_b__2(::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* slotInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS29_0__POSTLOADAVATARGOGALGAME_B__2_OFFSET))(this, slotInfo);
		}
	};
}
