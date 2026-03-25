#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97D1A0)
#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97D150)
#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xA97CFE0)
#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA97D1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBeforeAddModifier_TypeDefinitionIndex = 45669;

	class LevelBeforeAddModifier : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Receiver; // 0x18
		::System::String* AbilityName; // 0x20
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x28
		::RPG::GameCore::GameEntity* Caster; // 0x158
		::System::String* ModifierName; // 0x160
		::RPG::GameCore::TurnBasedModifierConfig* ModifierConfig; // 0x168
		::System::Boolean IsSuccess; // 0x170
		::System::Boolean DisableFloatingMessage; // 0x171
		::System::Int32 LifeTime; // 0x174
		::RPG::GameCore::FixPoint Chance; // 0x178
		::RPG::GameCore::FixPoint BaseChance; // 0x180

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
