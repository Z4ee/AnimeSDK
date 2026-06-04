#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE39650)
#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE39600)
#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xCE39490)
#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xCE396A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBeforeAddModifier_TypeDefinitionIndex = 53018;

	class LevelBeforeAddModifier : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::String* ModifierName; // 0x18
		::System::String* AbilityName; // 0x20
		::RPG::GameCore::TurnBasedModifierConfig* ModifierConfig; // 0x28
		::RPG::GameCore::GameEntity* Receiver; // 0x30
		::RPG::GameCore::GameEntity* Caster; // 0x38
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x40
		::RPG::GameCore::FixPoint Chance; // 0x148
		::RPG::GameCore::FixPoint BaseChance; // 0x150
		::System::Boolean DisableFloatingMessage; // 0x158
		::System::Boolean IsSuccess; // 0x159
		::System::Int32 LifeTime; // 0x15C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFOREADDMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBeforeAddModifier* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedModifierConfig* a3, ::System::String* a4, ::System::String* a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7, ::System::Boolean a8, ::System::Int32 a9, ::Struct_2_5909FD7779934CCA a10, ::System::Boolean a11)
		{
			return ((::RPG::GameCore::LevelBeforeAddModifier*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierConfig*, ::System::String*, ::System::String*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean, ::System::Int32, ::Struct_2_5909FD7779934CCA, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFOREADDMODIFIER_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
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
