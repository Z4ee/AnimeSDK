#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR_GROWSIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarQuickGrowCalculator_GrowSimState_TypeDefinitionIndex = 62552;

	struct alignas(4) AvatarQuickGrowCalculator_GrowSimState
	{
		::System::UInt32 AvatarLevel; // 0x10
		::System::UInt32 AccumulatedExp; // 0x14
		::System::UInt32 PromotionLevel; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR_GROWSIMSTATE__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
