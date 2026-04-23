#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELRESISTMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DEE50)
#define RPG_GAMECORE_LEVELRESISTMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DEE00)
#define RPG_GAMECORE_LEVELRESISTMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xB6DED90)
#define RPG_GAMECORE_LEVELRESISTMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DEEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelResistModifier_TypeDefinitionIndex = 52325;

	class LevelResistModifier : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Taker; // 0x18
		::RPG::GameCore::GameEntity* Caster; // 0x20
		::System::String* ModifierName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELRESISTMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelResistModifier* Init(::RPG::GameCore::GameEntity* caster, ::RPG::GameCore::GameEntity* taker, ::System::String* modifierName)
		{
			return ((::RPG::GameCore::LevelResistModifier*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELRESISTMODIFIER_INIT_OFFSET))(this, caster, taker, modifierName);
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
