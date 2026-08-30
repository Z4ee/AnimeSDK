#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELRESISTMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE699BD0)
#define RPG_GAMECORE_LEVELRESISTMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE699B80)
#define RPG_GAMECORE_LEVELRESISTMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xE699B10)
#define RPG_GAMECORE_LEVELRESISTMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xE699C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelResistModifier_TypeDefinitionIndex = 56956;

	class LevelResistModifier : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Taker; // 0x18
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::GameEntity* Caster; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELRESISTMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelResistModifier* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::RPG::GameCore::LevelResistModifier*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELRESISTMODIFIER_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELRESISTMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELRESISTMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
