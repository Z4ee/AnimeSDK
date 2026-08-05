#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_NPCTURNINGPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x102B8E20)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCTurningParameters_TypeDefinitionIndex = 73237;

	class NPCTurningParameters : public ::System::Object
	{
	public:
		::System::Single minAngle; // 0x10
		::System::Single maxAngle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCTURNINGPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}
