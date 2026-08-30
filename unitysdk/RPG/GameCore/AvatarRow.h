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

#define RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C58CBD0)
#define RPG_GAMECORE_AVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C59A3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRow_TypeDefinitionIndex = 12618;

	class AvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* AssistBgOffset; // 0x10
		::System::String* AvatarCutinBgImgPath; // 0x18
		::System::String* AvatarCutinFrontImgPath; // 0x20
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0x28
		::System::String* DefaultAvatarHeadIconPath; // 0x30
		::System::String* AvatarCutinImgPath; // 0x38
		::System::String* ActionAvatarHeadIconPath; // 0x40
		::System::String* WaitingAvatarHeadIconPath; // 0x48
		::System::String* AIPath; // 0x50
		::Il2CppArray<::System::Single>* PlayerCardOffset; // 0x58
		::System::String* AvatarVOTag; // 0x60
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0x68
		::Il2CppArray<::System::UInt32>* SkillList; // 0x70
		::Il2CppArray<::System::UInt32>* RankIDList; // 0x78
		::System::String* ManikinJsonPath; // 0x80
		::System::String* AvatarMiniIconPath; // 0x88
		::System::String* SkilltreePrefabPath; // 0x90
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x98
		::System::String* DefaultAvatarModelPath; // 0xA0
		::System::String* JsonPath; // 0xA8
		::System::String* AvatarGachaResultImgPath; // 0xB0
		::System::String* AvatarSideIconPath; // 0xB8
		::Il2CppArray<::System::Single>* AssistOffset; // 0xC0
		::System::String* UIAvatarModelPath; // 0xC8
		::Il2CppArray<::System::Single>* AvatarTrialOffset; // 0xD0
		::System::String* UltraSkillCutInPrefabPath; // 0xD8
		::System::String* SideAvatarHeadIconPath; // 0xE0
		::RPG::Client::TextID AvatarFullName; // 0xE8
		::System::UInt32 MaxPromotion; // 0xF8
		::System::UInt32 AvatarID; // 0xFC
		::RPG::GameCore::AttackDamageType DamageType; // 0x100
		::RPG::GameCore::CombatPowerAvatarRarityType Rarity; // 0x104
		::RPG::Client::TextID AvatarInitialSkinName; // 0x108
		::System::Boolean Release; // 0x118
		::System::UInt32 AdventurePlayerID; // 0x11C
		::System::UInt32 NatureID; // 0x120
		::System::UInt32 MaxRank; // 0x124
		::RPG::Client::TextID AvatarDesc; // 0x128
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x138
		::System::UInt32 ExpGroup; // 0x13C
		::RPG::GameCore::FixPoint SPNeed; // 0x140
		::RPG::Client::TextID AvatarName; // 0x148
		::RPG::Client::TextID AvatarCutinIntroText; // 0x158
		::RPG::Client::TextID AvatarInitialSkinDesc; // 0x168

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
