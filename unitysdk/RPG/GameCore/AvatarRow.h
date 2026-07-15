#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A077730)
#define RPG_GAMECORE_AVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A084F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRow_TypeDefinitionIndex = 12229;

	class AvatarRow : public ::System::Object
	{
	public:
		::System::String* UIAvatarModelPath; // 0x10
		::System::String* UltraSkillCutInPrefabPath; // 0x18
		::Il2CppArray<::System::Single>* AvatarTrialOffset; // 0x20
		::System::String* AvatarMiniIconPath; // 0x28
		::System::String* AvatarVOTag; // 0x30
		::Il2CppArray<::System::UInt32>* RankIDList; // 0x38
		::System::String* JsonPath; // 0x40
		::Il2CppArray<::System::Single>* PlayerCardOffset; // 0x48
		::System::String* AvatarCutinFrontImgPath; // 0x50
		::System::String* WaitingAvatarHeadIconPath; // 0x58
		::System::String* AvatarGachaResultImgPath; // 0x60
		::System::String* SkilltreePrefabPath; // 0x68
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x70
		::System::String* AIPath; // 0x78
		::Il2CppArray<::System::Single>* AssistOffset; // 0x80
		::Il2CppArray<::System::Single>* AssistBgOffset; // 0x88
		::System::String* SideAvatarHeadIconPath; // 0x90
		::System::String* ManikinJsonPath; // 0x98
		::Il2CppArray<::System::UInt32>* SkillList; // 0xA0
		::System::String* DefaultAvatarModelPath; // 0xA8
		::System::String* AvatarCutinImgPath; // 0xB0
		::System::String* DefaultAvatarHeadIconPath; // 0xB8
		::System::String* AvatarCutinBgImgPath; // 0xC0
		::System::String* AvatarSideIconPath; // 0xC8
		::System::String* ActionAvatarHeadIconPath; // 0xD0
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0xD8
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0xE0
		::RPG::Client::TextID AvatarCutinIntroText; // 0xE8
		::System::UInt32 AdventurePlayerID; // 0xF8
		::System::UInt32 AvatarID; // 0xFC
		::RPG::Client::TextID AvatarInitialSkinName; // 0x100
		::RPG::Client::TextID AvatarDesc; // 0x110
		::RPG::Client::TextID AvatarName; // 0x120
		::System::Boolean Release; // 0x130
		::System::UInt32 ExpGroup; // 0x134
		::RPG::GameCore::FixPoint SPNeed; // 0x138
		::RPG::Client::TextID AvatarInitialSkinDesc; // 0x140
		::RPG::GameCore::CombatPowerAvatarRarityType Rarity; // 0x150
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x154
		::RPG::Client::TextID AvatarFullName; // 0x158
		::System::UInt32 MaxPromotion; // 0x168
		::System::UInt32 NatureID; // 0x16C
		::RPG::GameCore::AttackDamageType DamageType; // 0x170
		::System::UInt32 MaxRank; // 0x174

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
