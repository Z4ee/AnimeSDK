#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventDroneSubsystem_BulletWeaponLogInfo_TypeDefinitionIndex = 47065;

	struct alignas(8) SummerEventDroneSubsystem_BulletWeaponLogInfo
	{
		::System::String* weaponKey; // 0x10
		::System::String* bulletAbilityName; // 0x18
	};
}
