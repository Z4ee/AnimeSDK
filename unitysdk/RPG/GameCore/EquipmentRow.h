#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CombatPowerLightconeRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EQUIPMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7C8690)
#define RPG_GAMECORE_EQUIPMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CC880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentRow_TypeDefinitionIndex = 13130;

	class EquipmentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* AvatarDetailOffset; // 0x10
		::Il2CppArray<::System::Single>* ItemRightPanelOffset; // 0x18
		::System::String* ImagePath; // 0x20
		::Il2CppArray<::System::UInt32>* RankUpCostList; // 0x28
		::System::String* ThumbnailPath; // 0x30
		::Il2CppArray<::System::Single>* GachaResultOffset; // 0x38
		::Il2CppArray<::System::Single>* BattleDialogOffset; // 0x40
		::RPG::GameCore::CombatPowerLightconeRarityType Rarity; // 0x48
		::System::UInt32 ExpType; // 0x4C
		::RPG::Client::TextID EquipmentDesc; // 0x50
		::RPG::Client::TextID EquipmentName; // 0x60
		::System::UInt32 MaxRank; // 0x70
		::System::UInt32 EquipmentID; // 0x74
		::System::UInt32 ExpProvide; // 0x78
		::System::Boolean Release; // 0x7C
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x80
		::System::UInt32 MaxPromotion; // 0x84
		::System::UInt32 SkillID; // 0x88
		::System::UInt32 CoinCost; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EquipmentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EquipmentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
