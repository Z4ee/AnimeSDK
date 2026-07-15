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

#define RPG_GAMECORE_BATTLEEVENTCONFIG_METHOD_3_6AA35509C73FAB96_OFFSET UNITYSDK_OFFSET(0x1A3E8BC0)
#define RPG_GAMECORE_BATTLEEVENTCONFIG_METHOD_3_71435E9C52426DA5_OFFSET UNITYSDK_OFFSET(0x1A3E8E00)
#define RPG_GAMECORE_BATTLEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E8CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventConfig_TypeDefinitionIndex = 15876;

	class BattleEventConfig : public ::RPG::GameCore::CharacterConfig
	{
	public:
		::System::String* ActionIconPath; // 0x220
		::System::Boolean AllowTriggerEffectWithoutModel; // 0x228
		::System::Boolean HaveActionDelay; // 0x229
		::RPG::GameCore::BattleEventLifeBinding LifeBinding; // 0x22C
		::RPG::GameCore::CharacterFormationType FormationType; // 0x230
		::RPG::GameCore::TeamLocationType LocationType; // 0x234
		::RPG::GameCore::AttackDamageType DamageType; // 0x238
		::System::Boolean IsPlayerControlled; // 0x23C
		::System::String* AIPath; // 0x240
		::System::Int32 MaxSP; // 0x248
		::RPG::GameCore::BattleEventButtonType BattleEventButtonID; // 0x24C
		::RPG::GameCore::BattleEventButtonSlotType ButtonSlotType; // 0x250
		::System::UInt32 ButtonSlotIndex; // 0x254
		::RPG::GameCore::CharacterResourceLoadOption ResourceLoadOption; // 0x258
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x25C

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
