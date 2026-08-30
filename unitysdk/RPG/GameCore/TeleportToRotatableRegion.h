#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TELEPORTTOROTATABLEREGION_METHOD_3_0CBCA87102F077C4_OFFSET UNITYSDK_OFFSET(0x1E1D0AD0)
#define RPG_GAMECORE_TELEPORTTOROTATABLEREGION_METHOD_3_DF52A9DA33B68B91_OFFSET UNITYSDK_OFFSET(0x1E1D0B10)
#define RPG_GAMECORE_TELEPORTTOROTATABLEREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D0B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeleportToRotatableRegion_TypeDefinitionIndex = 20678;

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

		static ::System::Void Method_3_0CBCA87102F077C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeleportToRotatableRegion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeleportToRotatableRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOROTATABLEREGION_METHOD_3_0CBCA87102F077C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF52A9DA33B68B91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeleportToRotatableRegion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeleportToRotatableRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOROTATABLEREGION_METHOD_3_DF52A9DA33B68B91_OFFSET))(a1, a2);
		}
	};
}
