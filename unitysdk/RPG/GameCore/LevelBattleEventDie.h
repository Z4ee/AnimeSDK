#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BDEF820)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDEF8C0)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDEF870)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_INIT_OFFSET UNITYSDK_OFFSET(0x1BDEF7B0)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDEF910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBattleEventDie_TypeDefinitionIndex = 54230;

	class LevelBattleEventDie : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::System::String* CharacterName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBattleEventDie* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelBattleEventDie*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
