#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TELEPORTTOROTATABLEREGION_METHOD_3_7ABD475A088DE650_OFFSET UNITYSDK_OFFSET(0x19093B70)
#define RPG_GAMECORE_TELEPORTTOROTATABLEREGION_METHOD_3_DF52A9DA33B68B91_OFFSET UNITYSDK_OFFSET(0x19093BF0)
#define RPG_GAMECORE_TELEPORTTOROTATABLEREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x19093BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeleportToRotatableRegion_TypeDefinitionIndex = 19906;

	class TeleportToRotatableRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* TargetRegionIndex; // 0x18
		::RPG::GameCore::DynamicFloat* TargetAnchorGroupID; // 0x20
		::RPG::GameCore::DynamicFloat* TargetAnchorInstanceID; // 0x28
		::RPG::GameCore::DynamicString* SpecialPerformType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOROTATABLEREGION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7ABD475A088DE650(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeleportToRotatableRegion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeleportToRotatableRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOROTATABLEREGION_METHOD_3_7ABD475A088DE650_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF52A9DA33B68B91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeleportToRotatableRegion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeleportToRotatableRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOROTATABLEREGION_METHOD_3_DF52A9DA33B68B91_OFFSET))(a1, a2);
		}
	};
}
