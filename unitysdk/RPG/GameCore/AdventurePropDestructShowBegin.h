#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x15414260)
#define RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_GETPROP_OFFSET UNITYSDK_OFFSET(0x15414300)
#define RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x154142B0)
#define RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_INIT_OFFSET UNITYSDK_OFFSET(0x15414210)
#define RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x15414340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePropDestructShowBegin_TypeDefinitionIndex = 54083;

	class AdventurePropDestructShowBegin : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* _Prop; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePropDestructShowBegin* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AdventurePropDestructShowBegin*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPDESTRUCTSHOWBEGIN_INIT_OFFSET))(this, a1);
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
