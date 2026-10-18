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

#define RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D413F50)
#define RPG_GAMECORE_AVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D421770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRow_TypeDefinitionIndex = 12708;

	class AvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* AssistBgOffset; // 0x10
		::System::String* AvatarGachaResultImgPath; // 0x18
		::System::String* AvatarVOTag; // 0x20
		::Il2CppArray<::System::Single>* PlayerCardOffset; // 0x28
		::System::String* AvatarCutinFrontImgPath; // 0x30
		::Il2CppArray<::System::UInt32>* RankIDList; // 0x38
		::System::String* AvatarMiniIconPath; // 0x40
		::System::String* AvatarCutinBgImgPath; // 0x48
		::System::String* SideAvatarHeadIconPath; // 0x50
		::System::String* AvatarCutinImgPath; // 0x58
		::System::String* UIAvatarModelPath; // 0x60
		::System::String* ActionAvatarHeadIconPath; // 0x68
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0x70
		::Il2CppArray<::System::Single>* AvatarTrialOffset; // 0x78
		::System::String* UltraSkillCutInPrefabPath; // 0x80
		::System::String* DefaultAvatarModelPath; // 0x88
		::Il2CppArray<::System::Single>* AssistOffset; // 0x90
		::Il2CppArray<::System::UInt32>* SkillList; // 0x98
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0xA0
		::System::String* AIPath; // 0xA8
		::System::String* AvatarSideIconPath; // 0xB0
		::System::String* ManikinJsonPath; // 0xB8
		::System::String* DefaultAvatarHeadIconPath; // 0xC0
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0xC8
		::System::String* JsonPath; // 0xD0
		::System::String* SkilltreePrefabPath; // 0xD8
		::System::String* WaitingAvatarHeadIconPath; // 0xE0
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0xE8
		::System::UInt32 ExpGroup; // 0xEC
		::System::UInt32 AvatarID; // 0xF0
		::System::UInt32 AdventurePlayerID; // 0xF4
		::RPG::GameCore::FixPoint SPNeed; // 0xF8
		::RPG::Client::TextID AvatarName; // 0x100
		::System::UInt32 MaxRank; // 0x110
		::RPG::GameCore::AttackDamageType DamageType; // 0x114
		::System::UInt32 NatureID; // 0x118
		::System::Boolean Release; // 0x11C
		::RPG::Client::TextID AvatarInitialSkinDesc; // 0x120
		::RPG::Client::TextID AvatarFullName; // 0x130
		::RPG::GameCore::CombatPowerAvatarRarityType Rarity; // 0x140
		::System::UInt32 MaxPromotion; // 0x144
		::RPG::Client::TextID AvatarInitialSkinName; // 0x148
		::RPG::Client::TextID AvatarCutinIntroText; // 0x158
		::RPG::Client::TextID AvatarDesc; // 0x168

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
