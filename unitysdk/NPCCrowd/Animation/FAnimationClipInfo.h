#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_FANIMATIONCLIPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x332CF0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FAnimationClipInfo_TypeDefinitionIndex = 43822;

	struct alignas(8) FAnimationClipInfo
	{
		::System::String* animName; // 0x10
		::System::Int32 animID; // 0x18

		::System::Void _ctor(::System::String* inAnimName, ::System::Int32 inAnimID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FANIMATIONCLIPINFO__CTOR_OFFSET))(this, inAnimName, inAnimID);
		}
	};
}
