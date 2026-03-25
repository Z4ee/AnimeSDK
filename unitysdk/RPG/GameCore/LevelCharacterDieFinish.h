#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELCHARACTERDIEFINISH_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97E080)
#define RPG_GAMECORE_LEVELCHARACTERDIEFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97E120)
#define RPG_GAMECORE_LEVELCHARACTERDIEFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97E0D0)
#define RPG_GAMECORE_LEVELCHARACTERDIEFINISH_INIT_OFFSET UNITYSDK_OFFSET(0xA97E020)
#define RPG_GAMECORE_LEVELCHARACTERDIEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0xA97E170)
#define RPG_GAMECORE_LEVELCHARACTERDIEFINISH___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97E180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterDieFinish_TypeDefinitionIndex = 45661;

	class LevelCharacterDieFinish : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::String* CharacterName; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDIEFINISH__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterDieFinish* Init(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::RPG::GameCore::LevelCharacterDieFinish*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDIEFINISH_INIT_OFFSET))(this, pEntity);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDIEFINISH_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDIEFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDIEFINISH_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDIEFINISH___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
