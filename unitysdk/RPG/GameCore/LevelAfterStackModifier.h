#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xE67FBE0)
#define RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE67FC80)
#define RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE67FC30)
#define RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xE67FB90)
#define RPG_GAMECORE_LEVELAFTERSTACKMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xE67FCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAfterStackModifier_TypeDefinitionIndex = 56954;

	class LevelAfterStackModifier : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSTACKMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelAfterStackModifier* Init(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::RPG::GameCore::LevelAfterStackModifier*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
