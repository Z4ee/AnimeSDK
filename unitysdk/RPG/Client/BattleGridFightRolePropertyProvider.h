#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xC9189E0)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTENERGYBAR_OFFSET UNITYSDK_OFFSET(0xC919560)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xC919070)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTSPECIALSP_OFFSET UNITYSDK_OFFSET(0xC919330)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0xC9194C0)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTSP_OFFSET UNITYSDK_OFFSET(0xC919110)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_RPG_CLIENT_IPROPERTYFORMULACONTEXT_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xC9188B0)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xC9188A0)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER__GETABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC9192A0)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER__GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xC918910)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGridFightRolePropertyProvider_TypeDefinitionIndex = 65255;

	class BattleGridFightRolePropertyProvider : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedAbilityComponent* _AbilityComponent; // 0x10
		::RPG::GameCore::GameEntity* _Entity; // 0x18
		::RPG::Client::GridFightBattleGameContext* _BattleGameContext; // 0x20
		::RPG::GameCore::BattleGridFightAvatarData* _AvatarData; // 0x28
		::RPG::Client::GridFightRole* _Role; // 0x30

		::System::Void _ctor(::RPG::GameCore::BattleGridFightAvatarData* a1, ::RPG::Client::GridFightRole* a2, ::RPG::Client::GridFightBattleGameContext* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint RPG_Client_IPropertyFormulaContext_GetProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_RPG_CLIENT_IPROPERTYFORMULACONTEXT_GETPROPERTY_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleProperty* GetProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GETPROPERTY_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentHP()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTHP_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentSP()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTSP_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentSpecialSP()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTSPECIALSP_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentSpeed()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTSPEED_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentEnergyBar()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTENERGYBAR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _GetProperty(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER__GETPROPERTY_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnBasedAbilityComponent* _GetAbilityComponent()
		{
			return ((::RPG::GameCore::TurnBasedAbilityComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER__GETABILITYCOMPONENT_OFFSET))(this);
		}
	};
}
