#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_AC5917224CA07AC1;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEAVATARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A09FB0)
#define RPG_GAMECORE_ILBATTLEAVATARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0AB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarConfigRow_TypeDefinitionIndex = 13051;

	class ILBattleAvatarConfigRow : public ::System::Object
	{
	public:
		::System::String* AvatarShopIconPath; // 0x10
		::System::String* DefaultAvatarHeadIconPath; // 0x18
		::System::String* DefaultAvatarMiniIconPath; // 0x20
		::Class_1_AC5917224CA07AC1* HP; // 0x28
		::System::String* AvatarSideIconPath; // 0x30
		::Class_1_AC5917224CA07AC1* Defence; // 0x38
		::System::String* DefaultAvatarRoundIconPath; // 0x40
		::Class_1_AC5917224CA07AC1* Attack; // 0x48
		::Il2CppArray<::System::UInt32>* PromotionIDList; // 0x50
		::Il2CppArray<::System::UInt32>* SkillList; // 0x58
		::System::String* UltraSkillCutInPrefabPath; // 0x60
		::Il2CppArray<::RPG::GameCore::ILBattleAvatarTag>* TagList; // 0x68
		::System::String* AIPath; // 0x70
		::System::String* JsonPath; // 0x78
		::System::String* DefaultAvatarModelPath; // 0x80
		::RPG::GameCore::ILBattleAvatarTag MainTag; // 0x88
		::System::UInt32 ID; // 0x8C
		::RPG::GameCore::FixPoint MoveSpeed; // 0x90
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0x98
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0xA0
		::RPG::Client::TextID AvatarDesc3; // 0xA8
		::RPG::Client::TextID AvatarDesc1; // 0xB8
		::RPG::Client::TextID AvatarName; // 0xC8
		::RPG::GameCore::FixPoint ElementMastery; // 0xD8
		::System::Boolean FormalAvatar; // 0xE0
		::System::UInt32 Rarity; // 0xE4
		::RPG::Client::TextID AvatarDesc2; // 0xE8
		::RPG::GameCore::ILBattleCharacterLocation AvatarType; // 0xF8
		::RPG::Client::TextID FullName; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ILBattleAvatarConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleAvatarConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
