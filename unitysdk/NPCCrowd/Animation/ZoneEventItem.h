#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_77E02A35C116A0EE_Enum_3_006F747AD33F415B.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimatorZoneSegmentWrap; }

#define NPCCROWD_ANIMATION_ZONEEVENTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x6B8F30)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ZoneEventItem_TypeDefinitionIndex = 79021;

	struct alignas(8) ZoneEventItem
	{
		::System::UInt32 entityId; // 0x10
		::System::Single normalizedTime; // 0x14
		::NPCCrowd::Animation::AnimatorZoneSegmentWrap* wrap; // 0x18
		::Struct_2_77E02A35C116A0EE_Enum_3_006F747AD33F415B type; // 0x20

		::System::Void _ctor(::System::UInt32 entityId, ::System::Single normalizedTime, ::NPCCrowd::Animation::AnimatorZoneSegmentWrap* wrap, ::Struct_2_77E02A35C116A0EE_Enum_3_006F747AD33F415B type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::NPCCrowd::Animation::AnimatorZoneSegmentWrap*, ::Struct_2_77E02A35C116A0EE_Enum_3_006F747AD33F415B))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ZONEEVENTITEM__CTOR_OFFSET))(this, entityId, normalizedTime, wrap, type);
		}
	};
}
