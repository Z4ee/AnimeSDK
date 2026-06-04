#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/BattleEventButtonSlotType.h"
#include "unitysdk/RPG/GameCore/BattleEventButtonType.h"
#include "unitysdk/RPG/GameCore/BattleEventLifeBinding.h"
#include "unitysdk/RPG/GameCore/CharacterConfig.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/CharacterResourceLoadOption.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTCONFIG_METHOD_3_6AA35509C73FAB96_OFFSET UNITYSDK_OFFSET(0x194C8920)
#define RPG_GAMECORE_BATTLEEVENTCONFIG_METHOD_3_71435E9C52426DA5_OFFSET UNITYSDK_OFFSET(0x194C8B60)
#define RPG_GAMECORE_BATTLEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194C8A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventConfig_TypeDefinitionIndex = 15702;

	class BattleEventConfig : public ::RPG::GameCore::CharacterConfig
	{
	public:
		::System::String* ActionIconPath; // 0x210
		::System::Boolean AllowTriggerEffectWithoutModel; // 0x218
		::System::Boolean HaveActionDelay; // 0x219
		::RPG::GameCore::BattleEventLifeBinding LifeBinding; // 0x21C
		::RPG::GameCore::CharacterFormationType FormationType; // 0x220
		::RPG::GameCore::TeamLocationType LocationType; // 0x224
		::RPG::GameCore::AttackDamageType DamageType; // 0x228
		::System::Boolean IsPlayerControlled; // 0x22C
		::System::String* AIPath; // 0x230
		::System::Int32 MaxSP; // 0x238
		::RPG::GameCore::BattleEventButtonType BattleEventButtonID; // 0x23C
		::RPG::GameCore::BattleEventButtonSlotType ButtonSlotType; // 0x240
		::System::UInt32 ButtonSlotIndex; // 0x244
		::RPG::GameCore::CharacterResourceLoadOption ResourceLoadOption; // 0x248
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x24C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6AA35509C73FAB96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTCONFIG_METHOD_3_6AA35509C73FAB96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_71435E9C52426DA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTCONFIG_METHOD_3_71435E9C52426DA5_OFFSET))(a1, a2);
		}
	};
}
