#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterAdventureSomatoType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureAIControllerConfig; }

#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_METHOD_2_6F92C3EC0C18F601_OFFSET UNITYSDK_OFFSET(0x1CB13AA0)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_ADVENTURESOMATOTYPE_OFFSET UNITYSDK_OFFSET(0x1CB158C0)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVMOVINGSTEERTURNBACKTURNSPEED_OFFSET UNITYSDK_OFFSET(0x1CB15900)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVMOVINGSTEERTURNSPEED_OFFSET UNITYSDK_OFFSET(0x1CB158F0)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVTURNBACKTURNSPEED_OFFSET UNITYSDK_OFFSET(0x1CB158E0)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVTURNSPEED_OFFSET UNITYSDK_OFFSET(0x1CB158D0)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_USENAVJUMPLAYER_OFFSET UNITYSDK_OFFSET(0x1CB15910)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB158A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitMoveConfig_TypeDefinitionIndex = 17383;

	class SummonUnitMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CharacterAdventureSomatoType AdventureSomatoType; // 0x10
		::System::Boolean EnablePlatformMove; // 0x14
		::System::Single NavTurnSpeed; // 0x18
		::System::Single NavTurnBackTurnSpeed; // 0x1C
		::System::Single NavMovingSteerTurnSpeed; // 0x20
		::System::Single NavMovingSteerTurnBackTurnSpeed; // 0x24
		::RPG::GameCore::AdventureAIControllerConfig* AdvAIControllerConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6F92C3EC0C18F601(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_METHOD_2_6F92C3EC0C18F601_OFFSET))(a1, a2);
		}

		::RPG::GameCore::CharacterAdventureSomatoType RPG_GameCore_IAdventureCharacterMoveConfig_get_AdventureSomatoType()
		{
			return ((::RPG::GameCore::CharacterAdventureSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_ADVENTURESOMATOTYPE_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterMoveConfig_get_NavTurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVTURNSPEED_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterMoveConfig_get_NavTurnBackTurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVTURNBACKTURNSPEED_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterMoveConfig_get_NavMovingSteerTurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVMOVINGSTEERTURNSPEED_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterMoveConfig_get_NavMovingSteerTurnBackTurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVMOVINGSTEERTURNBACKTURNSPEED_OFFSET))(this);
		}

		::System::Boolean RPG_GameCore_IAdventureCharacterMoveConfig_get_UseNavJumpLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_USENAVJUMPLAYER_OFFSET))(this);
		}
	};
}
