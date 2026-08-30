#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_3.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELCHARACTERCREATE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18452540)
#define RPG_GAMECORE_LEVELCHARACTERCREATE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x184524F0)
#define RPG_GAMECORE_LEVELCHARACTERCREATE_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x18452590)
#define RPG_GAMECORE_LEVELCHARACTERCREATE__CTOR_OFFSET UNITYSDK_OFFSET(0x184524E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterCreate_TypeDefinitionIndex = 56942;

	class LevelCharacterCreate : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::Enum_3_ED790DAC948A65A9_3 CreateReason; // 0x18

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Enum_3_ED790DAC948A65A9_3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Enum_3_ED790DAC948A65A9_3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERCREATE__CTOR_OFFSET))(this, a1, a2);
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
