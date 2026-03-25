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
namespace System { class String; }

#define RPG_GAMECORE_SERVANTCONFIG_METHOD_3_302838C57322931A_OFFSET UNITYSDK_OFFSET(0x1769FA00)
#define RPG_GAMECORE_SERVANTCONFIG_METHOD_3_B889F2F56102372C_OFFSET UNITYSDK_OFFSET(0x1769FBD0)
#define RPG_GAMECORE_SERVANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1769FBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantConfig_TypeDefinitionIndex = 15137;

	class ServantConfig : public ::RPG::GameCore::CharacterConfig
	{
	public:
		::RPG::GameCore::BattleEventLifeBinding LifeBinding; // 0x200
		::RPG::GameCore::TeamLocationType LocationType; // 0x204
		::System::Boolean AddToTeamFormation; // 0x208
		::RPG::GameCore::AttackDamageType DamageType; // 0x20C
		::RPG::GameCore::AbilityPropertyIneritType PropertyInherit; // 0x210
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* SyncPropertyExceptList; // 0x218
		::RPG::MVector3 ViewModeServantFollowOffset; // 0x220
		::System::Single ViewModeServantFollowYawAngle; // 0x22C
		::System::Boolean IsPlayerControlled; // 0x230
		::System::String* AIPath; // 0x238

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_302838C57322931A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTCONFIG_METHOD_3_302838C57322931A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B889F2F56102372C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTCONFIG_METHOD_3_B889F2F56102372C_OFFSET))(a1, a2);
		}
	};
}
