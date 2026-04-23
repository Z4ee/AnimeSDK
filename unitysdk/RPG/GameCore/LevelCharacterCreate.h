#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_3.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELCHARACTERCREATE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6CBDB0)
#define RPG_GAMECORE_LEVELCHARACTERCREATE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6CBD60)
#define RPG_GAMECORE_LEVELCHARACTERCREATE_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xB6CBE00)
#define RPG_GAMECORE_LEVELCHARACTERCREATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CBD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterCreate_TypeDefinitionIndex = 52311;

	class LevelCharacterCreate : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::Enum_3_ED790DAC948A65A9_3 CreateReason; // 0x18

		::System::Void _ctor(::RPG::GameCore::GameEntity* pEntity, ::Enum_3_ED790DAC948A65A9_3 createReason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Enum_3_ED790DAC948A65A9_3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERCREATE__CTOR_OFFSET))(this, pEntity, createReason);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERCREATE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERCREATE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::String* get_CharacterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERCREATE_GET_CHARACTERNAME_OFFSET))(this);
		}
	};
}
