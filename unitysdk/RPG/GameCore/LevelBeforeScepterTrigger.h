#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18451CD0)
#define RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18451C80)
#define RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_GET_SCEPTER_OFFSET UNITYSDK_OFFSET(0x18451D20)
#define RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_INIT_OFFSET UNITYSDK_OFFSET(0x18451C30)
#define RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_SET_SCEPTER_OFFSET UNITYSDK_OFFSET(0x18451D30)
#define RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18451D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBeforeScepterTrigger_TypeDefinitionIndex = 57010;

	class LevelBeforeScepterTrigger : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* _Scepter_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBeforeScepterTrigger* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelBeforeScepterTrigger*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_INIT_OFFSET))(this, a1);
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

		::System::Void set_Scepter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORESCEPTERTRIGGER_SET_SCEPTER_OFFSET))(this, a1);
		}
	};
}
