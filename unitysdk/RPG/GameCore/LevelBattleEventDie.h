#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97CDC0)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97CE60)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97CE10)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_INIT_OFFSET UNITYSDK_OFFSET(0xA97CD60)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE__CTOR_OFFSET UNITYSDK_OFFSET(0xA97CEB0)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97CEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBattleEventDie_TypeDefinitionIndex = 45668;

	class LevelBattleEventDie : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::String* CharacterName; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBattleEventDie* Init(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::RPG::GameCore::LevelBattleEventDie*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE_INIT_OFFSET))(this, pEntity);
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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
