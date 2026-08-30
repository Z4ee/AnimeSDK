#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD22B50)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD22B00)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_FORMATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1DD22BB0)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_ISTEAMCHARACTER_OFFSET UNITYSDK_OFFSET(0x1DD22BC0)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0x1DD22BA0)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD22AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityFormationTypeChange_TypeDefinitionIndex = 56975;

	class LevelEntityFormationTypeChange : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Entity; // 0x10
		::RPG::GameCore::CharacterFormationType _FormationType; // 0x18
		::System::Boolean _IsTeamCharacter; // 0x1C

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterFormationType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterFormationType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE__CTOR_OFFSET))(this, a1, a2, a3);
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
