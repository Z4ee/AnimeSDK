#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6CB280)
#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6CB230)
#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xB6CB0B0)
#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CB2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBeforeAddModifier_TypeDefinitionIndex = 52321;

	class LevelBeforeAddModifier : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::System::String* AbilityName; // 0x148
		::RPG::GameCore::GameEntity* Receiver; // 0x150
		::RPG::GameCore::GameEntity* Caster; // 0x158
		::System::String* ModifierName; // 0x160
		::RPG::GameCore::TurnBasedModifierConfig* ModifierConfig; // 0x168
		::System::Int32 LifeTime; // 0x170
		::System::Boolean IsSuccess; // 0x174
		::System::Boolean DisableFloatingMessage; // 0x175
		::RPG::GameCore::FixPoint BaseChance; // 0x178
		::RPG::GameCore::FixPoint Chance; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFOREADDMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBeforeAddModifier* Init(::RPG::GameCore::GameEntity* caster, ::RPG::GameCore::GameEntity* receiver, ::RPG::GameCore::TurnBasedModifierConfig* config, ::System::String* abilityName, ::System::String* modifierName, ::RPG::GameCore::FixPoint baseChance, ::RPG::GameCore::FixPoint chance, ::System::Boolean isSuccess, ::System::Int32 lifeTime, ::Struct_2_5909FD7779934CCA changeParams, ::System::Boolean disableFloatingMessage)
		{
			return ((::RPG::GameCore::LevelBeforeAddModifier*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierConfig*, ::System::String*, ::System::String*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean, ::System::Int32, ::Struct_2_5909FD7779934CCA, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFOREADDMODIFIER_INIT_OFFSET))(this, caster, receiver, config, abilityName, modifierName, baseChance, chance, isSuccess, lifeTime, changeParams, disableFloatingMessage);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFOREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFOREADDMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
