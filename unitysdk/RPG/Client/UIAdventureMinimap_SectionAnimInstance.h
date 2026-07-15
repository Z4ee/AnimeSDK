#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_SectionAnimInstance_TypeDefinitionIndex = 65992;

	struct alignas(4) UIAdventureMinimap_SectionAnimInstance
	{
		::System::Single LifeTime; // 0x10
		::System::Int32 SectionImageIdx; // 0x14
		::System::Int32 ZoneID; // 0x18
		::System::Int32 SectionIdx; // 0x1C
	};
}
