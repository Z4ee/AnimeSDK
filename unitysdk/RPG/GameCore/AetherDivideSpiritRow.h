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

#define RPG_GAMECORE_AETHERDIVIDESPIRITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18688BE0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1868B1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritRow_TypeDefinitionIndex = 10458;

	class AetherDivideSpiritRow : public ::System::Object
	{
	public:
		::System::String* AIPath; // 0x10
		::System::String* DefaultAvatarHeadIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* SkillList; // 0x20
		::System::String* ManikinJsonPath; // 0x28
		::System::String* AvatarSideIconPath; // 0x30
		::System::String* WaitingAvatarHeadIconPath; // 0x38
		::Il2CppArray<::System::UInt32>* RecommendPassiveSkillList; // 0x40
		::System::String* DefaultAvatarModelPath; // 0x48
		::System::String* AvatarVOTag; // 0x50
		::System::String* AtlasAvatarHeadIconPath; // 0x58
		::System::String* JsonPath; // 0x60
		::System::String* MiddleAvatarHeadIconPath; // 0x68
		::Il2CppArray<::RPG::GameCore::AetherPassiveSkillType>* PassiveSkillSlotList; // 0x70
		::System::String* TeamRightPrefabPath; // 0x78
		::System::String* ActionAvatarHeadIconPath; // 0x80
		::System::String* TeamLeftPrefabPath; // 0x88
		::System::String* SideAvatarHeadIconPath; // 0x90
		::System::String* ManikinAvatarModelPath; // 0x98
		::System::String* UltraSkillCutInPrefabPath; // 0xA0
		::RPG::Client::TextID SpiritDescription; // 0xA8
		::System::UInt32 MaxPromotion; // 0xB8
		::System::UInt32 GymLocation; // 0xBC
		::RPG::GameCore::AttackDamageType DamageType; // 0xC0
		::RPG::GameCore::AetherRarityType Rarity; // 0xC4
		::RPG::Client::TextID SpiritUnlockDescription; // 0xC8
		::RPG::GameCore::AetherSpiritType SpiritType; // 0xD8
		::System::UInt32 ExpItemID; // 0xDC
		::RPG::Client::TextID AvatarName; // 0xE0
		::System::UInt32 AvatarID; // 0xF0
		::RPG::GameCore::FixPoint SPMax; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherDivideSpiritRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideSpiritRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
