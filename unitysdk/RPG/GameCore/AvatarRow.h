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

#define RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F9D920)
#define RPG_GAMECORE_AVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FABFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRow_TypeDefinitionIndex = 11593;

	class AvatarRow : public ::System::Object
	{
	public:
		::System::String* ManikinJsonPath; // 0x10
		::System::String* SideAvatarHeadIconPath; // 0x18
		::Il2CppArray<::System::Single>* AssistOffset; // 0x20
		::System::String* UltraSkillCutInPrefabPath; // 0x28
		::System::String* AvatarCutinBgImgPath; // 0x30
		::System::String* AvatarGachaResultImgPath; // 0x38
		::System::String* AvatarCutinFrontImgPath; // 0x40
		::System::String* WaitingAvatarHeadIconPath; // 0x48
		::System::String* SkilltreePrefabPath; // 0x50
		::System::String* AvatarSideIconPath; // 0x58
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0x60
		::Il2CppArray<::System::Single>* AssistBgOffset; // 0x68
		::System::String* AvatarVOTag; // 0x70
		::System::String* UIAvatarModelPath; // 0x78
		::System::String* DefaultAvatarHeadIconPath; // 0x80
		::System::String* AvatarMiniIconPath; // 0x88
		::System::String* AvatarCutinImgPath; // 0x90
		::System::String* ActionAvatarHeadIconPath; // 0x98
		::System::String* AIPath; // 0xA0
		::System::String* JsonPath; // 0xA8
		::System::String* DefaultAvatarModelPath; // 0xB0
		::Il2CppArray<::System::Single>* AvatarTrialOffset; // 0xB8
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0xC0
		::Il2CppArray<::System::UInt32>* SkillList; // 0xC8
		::Il2CppArray<::System::UInt32>* RankIDList; // 0xD0
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0xD8
		::Il2CppArray<::System::Single>* PlayerCardOffset; // 0xE0
		::RPG::Client::TextID AvatarInitialSkinDesc; // 0xE8
		::RPG::Client::TextID AvatarDesc; // 0xF8
		::System::UInt32 MaxRank; // 0x108
		::System::UInt32 AvatarID; // 0x10C
		::RPG::GameCore::FixPoint SPNeed; // 0x110
		::System::UInt32 ExpGroup; // 0x118
		::System::UInt32 AdventurePlayerID; // 0x11C
		::RPG::Client::TextID AvatarCutinIntroText; // 0x120
		::System::UInt32 MaxPromotion; // 0x130
		::System::Boolean Release; // 0x134
		::RPG::Client::TextID AvatarName; // 0x138
		::System::UInt32 NatureID; // 0x148
		::RPG::GameCore::CombatPowerAvatarRarityType Rarity; // 0x14C
		::RPG::Client::TextID AvatarFullName; // 0x150
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x160
		::RPG::GameCore::AttackDamageType DamageType; // 0x164
		::RPG::Client::TextID AvatarInitialSkinName; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
