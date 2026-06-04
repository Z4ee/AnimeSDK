#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELCHARACTERDIE_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE3A330)
#define RPG_GAMECORE_LEVELCHARACTERDIE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE3A3D0)
#define RPG_GAMECORE_LEVELCHARACTERDIE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE3A380)
#define RPG_GAMECORE_LEVELCHARACTERDIE_INIT_OFFSET UNITYSDK_OFFSET(0xCE3A2C0)
#define RPG_GAMECORE_LEVELCHARACTERDIE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE3A420)
#define RPG_GAMECORE_LEVELCHARACTERDIE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE3A430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterDie_TypeDefinitionIndex = 53009;

	class LevelCharacterDie : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::String* CharacterName; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDIE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterDie* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelCharacterDie*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDIE_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDIE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDIE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDIE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERDIE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
