#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyIneritType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BattleEventLifeBinding.h"
#include "unitysdk/RPG/GameCore/CharacterConfig.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SERVANTCONFIG_METHOD_3_B889F2F56102372C_OFFSET UNITYSDK_OFFSET(0x1D4D9AC0)
#define RPG_GAMECORE_SERVANTCONFIG_METHOD_3_FB8141C3AC00DE88_OFFSET UNITYSDK_OFFSET(0x1D4D9630)
#define RPG_GAMECORE_SERVANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D99A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantConfig_TypeDefinitionIndex = 16355;

	class ServantConfig : public ::RPG::GameCore::CharacterConfig
	{
	public:
		::RPG::GameCore::BattleEventLifeBinding LifeBinding; // 0x220
		::RPG::GameCore::TeamLocationType LocationType; // 0x224
		::System::Boolean AddToTeamFormation; // 0x228
		::RPG::GameCore::AttackDamageType DamageType; // 0x22C
		::System::Boolean EffectAttachToSummonerTimeline; // 0x230
		::RPG::GameCore::AbilityPropertyIneritType PropertyInherit; // 0x234
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* SyncPropertyExceptList; // 0x238
		::RPG::MVector3 ViewModeServantFollowOffset; // 0x240
		::System::Single ViewModeServantFollowYawAngle; // 0x24C
		::System::Boolean IsPlayerControlled; // 0x250

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FB8141C3AC00DE88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTCONFIG_METHOD_3_FB8141C3AC00DE88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B889F2F56102372C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTCONFIG_METHOD_3_B889F2F56102372C_OFFSET))(a1, a2);
		}
	};
}
