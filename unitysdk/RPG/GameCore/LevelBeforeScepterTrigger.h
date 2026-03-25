#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97D2A0)
#define RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97D250)
#define RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_GET_SCEPTER_OFFSET UNITYSDK_OFFSET(0xA97D2F0)
#define RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_INIT_OFFSET UNITYSDK_OFFSET(0xA97D200)
#define RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_SET_SCEPTER_OFFSET UNITYSDK_OFFSET(0xA97D300)
#define RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA97D310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBeforeScepterTrigger_TypeDefinitionIndex = 45726;

	class LevelBeforeScepterTrigger : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _Scepter_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBeforeScepterTrigger* Init(::RPG::GameCore::GameEntity* pScepter)
		{
			return ((::RPG::GameCore::LevelBeforeScepterTrigger*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_INIT_OFFSET))(this, pScepter);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Scepter()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_GET_SCEPTER_OFFSET))(this);
		}

		::System::Void set_Scepter(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_SET_SCEPTER_OFFSET))(this, value);
		}
	};
}
