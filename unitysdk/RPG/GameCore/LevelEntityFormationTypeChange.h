#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D6A20)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D69D0)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_FORMATIONTYPE_OFFSET UNITYSDK_OFFSET(0xB6D6A80)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_ISTEAMCHARACTER_OFFSET UNITYSDK_OFFSET(0xB6D6A90)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xB6D6A70)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D69C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityFormationTypeChange_TypeDefinitionIndex = 52344;

	class LevelEntityFormationTypeChange : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Entity; // 0x10
		::System::Boolean _IsTeamCharacter; // 0x18
		::RPG::GameCore::CharacterFormationType _FormationType; // 0x1C

		::System::Void _ctor(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::CharacterFormationType formationType, ::System::Boolean isTeamCharacter)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterFormationType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE__CTOR_OFFSET))(this, pEntity, formationType, isTeamCharacter);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_SOURCEENTITY_OFFSET))(this);
		}

		::RPG::GameCore::CharacterFormationType get_FormationType()
		{
			return ((::RPG::GameCore::CharacterFormationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_FORMATIONTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsTeamCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_ISTEAMCHARACTER_OFFSET))(this);
		}
	};
}
