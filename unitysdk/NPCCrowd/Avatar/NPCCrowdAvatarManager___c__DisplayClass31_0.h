#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Animation { class NPCCPUAnimationSlotInfo; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE57C0B0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS31_0__POSTLOADAVATARACCESSORYGALGAME_B__0_OFFSET UNITYSDK_OFFSET(0xE57C0C0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass31_0_TypeDefinitionIndex = 60724;

	class NPCCrowdAvatarManager___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::NPCCrowd::Accessories::NPCAccessory* accessory; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PostLoadAvatarAccessoryGalgame_b__0(::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS31_0__POSTLOADAVATARACCESSORYGALGAME_B__0_OFFSET))(this, slot);
		}
	};
}
