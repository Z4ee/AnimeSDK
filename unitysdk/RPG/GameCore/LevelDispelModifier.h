#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELDISPELMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xE690A50)
#define RPG_GAMECORE_LEVELDISPELMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE690AF0)
#define RPG_GAMECORE_LEVELDISPELMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE690AA0)
#define RPG_GAMECORE_LEVELDISPELMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xE6909E0)
#define RPG_GAMECORE_LEVELDISPELMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xE690B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDispelModifier_TypeDefinitionIndex = 56955;

	class LevelDispelModifier : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x18
		::RPG::GameCore::GameEntity* Instigator; // 0x20
		::System::Boolean MuteVisualEffect; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISPELMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelDispelModifier* Init(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::RPG::GameCore::LevelDispelModifier*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISPELMODIFIER_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISPELMODIFIER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISPELMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISPELMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
