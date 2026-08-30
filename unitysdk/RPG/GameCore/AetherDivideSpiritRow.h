#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/AetherRarityType.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDESPIRITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CBC9F30)
#define RPG_GAMECORE_AETHERDIVIDESPIRITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBCC120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritRow_TypeDefinitionIndex = 10888;

	class AetherDivideSpiritRow : public ::System::Object
	{
	public:
		::System::String* ManikinJsonPath; // 0x10
		::System::String* AvatarVOTag; // 0x18
		::System::String* MiddleAvatarHeadIconPath; // 0x20
		::Il2CppArray<::RPG::GameCore::AetherPassiveSkillType>* PassiveSkillSlotList; // 0x28
		::Il2CppArray<::System::UInt32>* RecommendPassiveSkillList; // 0x30
		::System::String* WaitingAvatarHeadIconPath; // 0x38
		::System::String* AtlasAvatarHeadIconPath; // 0x40
		::System::String* ActionAvatarHeadIconPath; // 0x48
		::System::String* AIPath; // 0x50
		::System::String* JsonPath; // 0x58
		::System::String* DefaultAvatarModelPath; // 0x60
		::System::String* SideAvatarHeadIconPath; // 0x68
		::System::String* UltraSkillCutInPrefabPath; // 0x70
		::System::String* TeamRightPrefabPath; // 0x78
		::System::String* TeamLeftPrefabPath; // 0x80
		::System::String* AvatarSideIconPath; // 0x88
		::System::String* ManikinAvatarModelPath; // 0x90
		::System::String* DefaultAvatarHeadIconPath; // 0x98
		::Il2CppArray<::System::UInt32>* SkillList; // 0xA0
		::System::UInt32 AvatarID; // 0xA8
		::RPG::GameCore::AetherRarityType Rarity; // 0xAC
		::System::UInt32 ExpItemID; // 0xB0
		::RPG::Client::TextID SpiritUnlockDescription; // 0xB8
		::RPG::GameCore::FixPoint SPMax; // 0xC8
		::System::UInt32 MaxPromotion; // 0xD0
		::System::UInt32 GymLocation; // 0xD4
		::RPG::Client::TextID SpiritDescription; // 0xD8
		::RPG::Client::TextID AvatarName; // 0xE8
		::RPG::GameCore::AetherSpiritType SpiritType; // 0xF8
		::RPG::GameCore::AttackDamageType DamageType; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideSpiritRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideSpiritRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
