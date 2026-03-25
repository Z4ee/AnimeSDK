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

#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x91B8C70)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTENERGYBAR_OFFSET UNITYSDK_OFFSET(0x91B98A0)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x91B9220)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTSPECIALSP_OFFSET UNITYSDK_OFFSET(0x91B95E0)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x91B9800)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GET_CURRENTSP_OFFSET UNITYSDK_OFFSET(0x91B92C0)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_RPG_CLIENT_IPROPERTYFORMULACONTEXT_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x91B8AA0)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x91B8A90)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER__GETABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x91B94E0)
#define RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER__GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x91B8B00)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGridFightRolePropertyProvider_TypeDefinitionIndex = 52941;

	class BattleGridFightRolePropertyProvider : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBattleGameContext* _BattleGameContext; // 0x10
		::RPG::Client::GridFightRole* _Role; // 0x18
		::RPG::GameCore::BattleGridFightAvatarData* _AvatarData; // 0x20
		::RPG::GameCore::GameEntity* _Entity; // 0x28
		::RPG::GameCore::TurnBasedAbilityComponent* _AbilityComponent; // 0x30

		::System::Void _ctor(::RPG::GameCore::BattleGridFightAvatarData* avatarData, ::RPG::Client::GridFightRole* role, ::RPG::Client::GridFightBattleGameContext* gameContext)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER__CTOR_OFFSET))(this, avatarData, role, gameContext);
		}

		::RPG::GameCore::FixPoint RPG_Client_IPropertyFormulaContext_GetProperty(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_RPG_CLIENT_IPROPERTYFORMULACONTEXT_GETPROPERTY_OFFSET))(this, type);
		}

		::RPG::Client::GridFightRoleProperty* GetProperty(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER_GETPROPERTY_OFFSET))(this, type);
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

		::RPG::GameCore::FixPoint _GetProperty(::RPG::GameCore::AbilityProperty property)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER__GETPROPERTY_OFFSET))(this, property);
		}

		::RPG::GameCore::TurnBasedAbilityComponent* _GetAbilityComponent()
		{
			return ((::RPG::GameCore::TurnBasedAbilityComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGRIDFIGHTROLEPROPERTYPROVIDER__GETABILITYCOMPONENT_OFFSET))(this);
		}
	};
}
