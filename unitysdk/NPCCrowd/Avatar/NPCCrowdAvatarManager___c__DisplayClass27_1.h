#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Animation { class NPCCPUAnimationSlotInfo; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS27_1__BINDBONESLOTSGALGAME_B__2_OFFSET UNITYSDK_OFFSET(0xD43A3B0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS27_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD43A3A0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass27_1_TypeDefinitionIndex = 66895;

	class NPCCrowdAvatarManager___c__DisplayClass27_1 : public ::System::Object
	{
	public:
		::NPCCrowd::Accessories::NPCAccessory* accessory; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS27_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _BindBoneSlotsGalgame_b__2(::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS27_1__BINDBONESLOTSGALGAME_B__2_OFFSET))(this, slot);
		}
	};
}
