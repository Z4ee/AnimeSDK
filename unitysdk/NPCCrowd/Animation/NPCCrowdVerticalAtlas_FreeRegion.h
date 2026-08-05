#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_FREEREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdVerticalAtlas_FreeRegion_TypeDefinitionIndex = 64504;

	struct alignas(4) NPCCrowdVerticalAtlas_FreeRegion
	{
		::System::Int32 offsetY; // 0x10
		::System::Int32 height; // 0x14

		::System::Void _ctor(::System::Int32 offsetY, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_FREEREGION__CTOR_OFFSET))(this, offsetY, height);
		}
	};
}
