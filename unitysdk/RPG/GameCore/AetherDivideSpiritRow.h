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

#define RPG_GAMECORE_AETHERDIVIDESPIRITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE02EF0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE050E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritRow_TypeDefinitionIndex = 10888;

	class AetherDivideSpiritRow : public ::System::Object
	{
	public:
		::System::String* AvatarSideIconPath; // 0x10
		::System::String* AIPath; // 0x18
		::System::String* ActionAvatarHeadIconPath; // 0x20
		::System::String* DefaultAvatarHeadIconPath; // 0x28
		::System::String* AtlasAvatarHeadIconPath; // 0x30
		::System::String* ManikinAvatarModelPath; // 0x38
		::Il2CppArray<::System::UInt32>* SkillList; // 0x40
		::System::String* TeamLeftPrefabPath; // 0x48
		::System::String* WaitingAvatarHeadIconPath; // 0x50
		::System::String* JsonPath; // 0x58
		::System::String* DefaultAvatarModelPath; // 0x60
		::Il2CppArray<::System::UInt32>* RecommendPassiveSkillList; // 0x68
		::Il2CppArray<::RPG::GameCore::AetherPassiveSkillType>* PassiveSkillSlotList; // 0x70
		::System::String* SideAvatarHeadIconPath; // 0x78
		::System::String* MiddleAvatarHeadIconPath; // 0x80
		::System::String* UltraSkillCutInPrefabPath; // 0x88
		::System::String* TeamRightPrefabPath; // 0x90
		::System::String* AvatarVOTag; // 0x98
		::System::String* ManikinJsonPath; // 0xA0
		::System::UInt32 ExpItemID; // 0xA8
		::System::UInt32 AvatarID; // 0xAC
		::RPG::GameCore::AetherRarityType Rarity; // 0xB0
		::System::UInt32 MaxPromotion; // 0xB4
		::RPG::Client::TextID SpiritDescription; // 0xB8
		::RPG::GameCore::FixPoint SPMax; // 0xC8
		::RPG::GameCore::AetherSpiritType SpiritType; // 0xD0
		::RPG::GameCore::AttackDamageType DamageType; // 0xD4
		::System::UInt32 GymLocation; // 0xD8
		::RPG::Client::TextID AvatarName; // 0xE0
		::RPG::Client::TextID SpiritUnlockDescription; // 0xF0

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
