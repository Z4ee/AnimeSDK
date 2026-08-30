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

#define RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE3DB40)
#define RPG_GAMECORE_AVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE4B350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRow_TypeDefinitionIndex = 12618;

	class AvatarRow : public ::System::Object
	{
	public:
		::System::String* DefaultAvatarModelPath; // 0x10
		::System::String* AvatarMiniIconPath; // 0x18
		::System::String* SkilltreePrefabPath; // 0x20
		::System::String* DefaultAvatarHeadIconPath; // 0x28
		::System::String* UIAvatarModelPath; // 0x30
		::Il2CppArray<::System::UInt32>* SkillList; // 0x38
		::System::String* AvatarCutinImgPath; // 0x40
		::System::String* SideAvatarHeadIconPath; // 0x48
		::System::String* AvatarCutinBgImgPath; // 0x50
		::Il2CppArray<::System::Single>* AssistBgOffset; // 0x58
		::System::String* AvatarVOTag; // 0x60
		::Il2CppArray<::System::Single>* AssistOffset; // 0x68
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x70
		::System::String* JsonPath; // 0x78
		::System::String* WaitingAvatarHeadIconPath; // 0x80
		::System::String* ManikinJsonPath; // 0x88
		::System::String* AvatarGachaResultImgPath; // 0x90
		::Il2CppArray<::System::UInt32>* RankIDList; // 0x98
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0xA0
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0xA8
		::Il2CppArray<::System::Single>* PlayerCardOffset; // 0xB0
		::System::String* AvatarCutinFrontImgPath; // 0xB8
		::Il2CppArray<::System::Single>* AvatarTrialOffset; // 0xC0
		::System::String* ActionAvatarHeadIconPath; // 0xC8
		::System::String* AvatarSideIconPath; // 0xD0
		::System::String* UltraSkillCutInPrefabPath; // 0xD8
		::System::String* AIPath; // 0xE0
		::RPG::GameCore::FixPoint SPNeed; // 0xE8
		::RPG::Client::TextID AvatarName; // 0xF0
		::RPG::GameCore::CombatPowerAvatarRarityType Rarity; // 0x100
		::RPG::GameCore::AttackDamageType DamageType; // 0x104
		::RPG::Client::TextID AvatarInitialSkinName; // 0x108
		::RPG::Client::TextID AvatarFullName; // 0x118
		::RPG::Client::TextID AvatarInitialSkinDesc; // 0x128
		::RPG::Client::TextID AvatarDesc; // 0x138
		::System::UInt32 MaxPromotion; // 0x148
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x14C
		::System::Boolean Release; // 0x150
		::System::UInt32 AvatarID; // 0x154
		::RPG::Client::TextID AvatarCutinIntroText; // 0x158
		::System::UInt32 AdventurePlayerID; // 0x168
		::System::UInt32 MaxRank; // 0x16C
		::System::UInt32 NatureID; // 0x170
		::System::UInt32 ExpGroup; // 0x174

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
