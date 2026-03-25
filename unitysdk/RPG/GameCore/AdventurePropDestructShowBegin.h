#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA84C100)
#define RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_GETPROP_OFFSET UNITYSDK_OFFSET(0xA84C1A0)
#define RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA84C150)
#define RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_INIT_OFFSET UNITYSDK_OFFSET(0xA84C0B0)
#define RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA84C1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePropDestructShowBegin_TypeDefinitionIndex = 45524;

	class AdventurePropDestructShowBegin : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _Prop; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePropDestructShowBegin* Init(::RPG::GameCore::GameEntity* prop)
		{
			return ((::RPG::GameCore::AdventurePropDestructShowBegin*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_INIT_OFFSET))(this, prop);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetProp()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_GETPROP_OFFSET))(this);
		}
	};
}
