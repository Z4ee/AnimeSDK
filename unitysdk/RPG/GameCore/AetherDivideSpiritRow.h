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

#define RPG_GAMECORE_AETHERDIVIDESPIRITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE6E030)
#define RPG_GAMECORE_AETHERDIVIDESPIRITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE701E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritRow_TypeDefinitionIndex = 10547;

	class AetherDivideSpiritRow : public ::System::Object
	{
	public:
		::System::String* ActionAvatarHeadIconPath; // 0x10
		::System::String* AvatarVOTag; // 0x18
		::Il2CppArray<::System::UInt32>* RecommendPassiveSkillList; // 0x20
		::System::String* AIPath; // 0x28
		::System::String* DefaultAvatarModelPath; // 0x30
		::System::String* DefaultAvatarHeadIconPath; // 0x38
		::System::String* TeamRightPrefabPath; // 0x40
		::System::String* UltraSkillCutInPrefabPath; // 0x48
		::Il2CppArray<::RPG::GameCore::AetherPassiveSkillType>* PassiveSkillSlotList; // 0x50
		::System::String* WaitingAvatarHeadIconPath; // 0x58
		::System::String* SideAvatarHeadIconPath; // 0x60
		::System::String* AtlasAvatarHeadIconPath; // 0x68
		::System::String* ManikinAvatarModelPath; // 0x70
		::System::String* MiddleAvatarHeadIconPath; // 0x78
		::System::String* TeamLeftPrefabPath; // 0x80
		::System::String* JsonPath; // 0x88
		::Il2CppArray<::System::UInt32>* SkillList; // 0x90
		::System::String* ManikinJsonPath; // 0x98
		::System::String* AvatarSideIconPath; // 0xA0
		::RPG::GameCore::AetherRarityType Rarity; // 0xA8
		::System::UInt32 GymLocation; // 0xAC
		::RPG::GameCore::AetherSpiritType SpiritType; // 0xB0
		::System::UInt32 MaxPromotion; // 0xB4
		::RPG::Client::TextID SpiritDescription; // 0xB8
		::RPG::Client::TextID AvatarName; // 0xC8
		::System::UInt32 ExpItemID; // 0xD8
		::RPG::GameCore::AttackDamageType DamageType; // 0xDC
		::RPG::Client::TextID SpiritUnlockDescription; // 0xE0
		::System::UInt32 AvatarID; // 0xF0
		::RPG::GameCore::FixPoint SPMax; // 0xF8

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
