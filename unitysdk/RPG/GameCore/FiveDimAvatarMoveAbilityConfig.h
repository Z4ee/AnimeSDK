#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimAvatarMoveAbility.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMAVATARMOVEABILITYCONFIG_METHOD_2_9CC942FD0650A0F0_OFFSET UNITYSDK_OFFSET(0x1D0A1ED0)
#define RPG_GAMECORE_FIVEDIMAVATARMOVEABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A2300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAvatarMoveAbilityConfig_TypeDefinitionIndex = 16532;

	class FiveDimAvatarMoveAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimAvatarMoveAbility Ability; // 0x10
		::System::Boolean LockMaxJumpEnergy; // 0x14
		::System::UInt32 MaxJumpEnergy; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAVATARMOVEABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9CC942FD0650A0F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAvatarMoveAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAvatarMoveAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAVATARMOVEABILITYCONFIG_METHOD_2_9CC942FD0650A0F0_OFFSET))(a1, a2);
		}
	};
}
