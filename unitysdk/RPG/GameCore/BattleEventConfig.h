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

#define RPG_GAMECORE_BATTLEEVENTCONFIG_METHOD_3_71435E9C52426DA5_OFFSET UNITYSDK_OFFSET(0x16FD1910)
#define RPG_GAMECORE_BATTLEEVENTCONFIG_METHOD_3_DC3ABDC455848E05_OFFSET UNITYSDK_OFFSET(0x16FD1890)
#define RPG_GAMECORE_BATTLEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD18F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventConfig_TypeDefinitionIndex = 15133;

	class BattleEventConfig : public ::RPG::GameCore::CharacterConfig
	{
	public:
		::System::String* ActionIconPath; // 0x200
		::System::Boolean AllowTriggerEffectWithoutModel; // 0x208
		::System::Boolean HaveActionDelay; // 0x209
		::RPG::GameCore::BattleEventLifeBinding LifeBinding; // 0x20C
		::RPG::GameCore::CharacterFormationType FormationType; // 0x210
		::RPG::GameCore::TeamLocationType LocationType; // 0x214
		::RPG::GameCore::AttackDamageType DamageType; // 0x218
		::System::Boolean IsPlayerControlled; // 0x21C
		::System::String* AIPath; // 0x220
		::System::Int32 MaxSP; // 0x228
		::RPG::GameCore::BattleEventButtonType BattleEventButtonID; // 0x22C
		::RPG::GameCore::BattleEventButtonSlotType ButtonSlotType; // 0x230
		::System::UInt32 ButtonSlotIndex; // 0x234
		::RPG::GameCore::CharacterResourceLoadOption ResourceLoadOption; // 0x238
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x23C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DC3ABDC455848E05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTCONFIG_METHOD_3_DC3ABDC455848E05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_71435E9C52426DA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTCONFIG_METHOD_3_71435E9C52426DA5_OFFSET))(a1, a2);
		}
	};
}
