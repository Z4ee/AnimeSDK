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

#define RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E64A0)
#define RPG_GAMECORE_AVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F3CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRow_TypeDefinitionIndex = 12708;

	class AvatarRow : public ::System::Object
	{
	public:
		::System::String* ManikinJsonPath; // 0x10
		::System::String* AvatarSideIconPath; // 0x18
		::System::String* UIAvatarModelPath; // 0x20
		::System::String* DefaultAvatarModelPath; // 0x28
		::System::String* AvatarMiniIconPath; // 0x30
		::System::String* JsonPath; // 0x38
		::System::String* AvatarCutinFrontImgPath; // 0x40
		::Il2CppArray<::System::UInt32>* RankIDList; // 0x48
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0x50
		::System::String* AIPath; // 0x58
		::Il2CppArray<::System::Single>* AssistOffset; // 0x60
		::System::String* WaitingAvatarHeadIconPath; // 0x68
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0x70
		::System::String* ActionAvatarHeadIconPath; // 0x78
		::Il2CppArray<::System::UInt32>* SkillList; // 0x80
		::Il2CppArray<::System::Single>* AvatarTrialOffset; // 0x88
		::System::String* SkilltreePrefabPath; // 0x90
		::System::String* AvatarVOTag; // 0x98
		::Il2CppArray<::System::Single>* AssistBgOffset; // 0xA0
		::System::String* UltraSkillCutInPrefabPath; // 0xA8
		::System::String* AvatarCutinBgImgPath; // 0xB0
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0xB8
		::System::String* AvatarCutinImgPath; // 0xC0
		::System::String* AvatarGachaResultImgPath; // 0xC8
		::Il2CppArray<::System::Single>* PlayerCardOffset; // 0xD0
		::System::String* SideAvatarHeadIconPath; // 0xD8
		::System::String* DefaultAvatarHeadIconPath; // 0xE0
		::RPG::Client::TextID AvatarInitialSkinName; // 0xE8
		::RPG::Client::TextID AvatarInitialSkinDesc; // 0xF8
		::RPG::Client::TextID AvatarDesc; // 0x108
		::System::UInt32 AvatarID; // 0x118
		::RPG::GameCore::CombatPowerAvatarRarityType Rarity; // 0x11C
		::System::Boolean Release; // 0x120
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x124
		::RPG::Client::TextID AvatarName; // 0x128
		::RPG::Client::TextID AvatarFullName; // 0x138
		::RPG::Client::TextID AvatarCutinIntroText; // 0x148
		::System::UInt32 MaxRank; // 0x158
		::System::UInt32 AdventurePlayerID; // 0x15C
		::RPG::GameCore::FixPoint SPNeed; // 0x160
		::System::UInt32 ExpGroup; // 0x168
		::System::UInt32 NatureID; // 0x16C
		::System::UInt32 MaxPromotion; // 0x170
		::RPG::GameCore::AttackDamageType DamageType; // 0x174

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
