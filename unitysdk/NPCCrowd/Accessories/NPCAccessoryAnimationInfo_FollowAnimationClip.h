#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONINFO_FOLLOWANIMATIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x13DE8950)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimationInfo_FollowAnimationClip_TypeDefinitionIndex = 50970;

	class NPCAccessoryAnimationInfo_FollowAnimationClip : public ::System::Object
	{
	public:
		::System::Int32 npcAnimationID; // 0x10
		::System::Int32 accessoryAnimationID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONINFO_FOLLOWANIMATIONCLIP__CTOR_OFFSET))(this);
		}
	};
}
