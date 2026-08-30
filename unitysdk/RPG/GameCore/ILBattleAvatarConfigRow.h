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

#define RPG_GAMECORE_ILBATTLEAVATARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D209CE0)
#define RPG_GAMECORE_ILBATTLEAVATARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20A7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarConfigRow_TypeDefinitionIndex = 13672;

	class ILBattleAvatarConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::String* AvatarSideIconPath; // 0x18
		::Il2CppArray<::RPG::GameCore::ILBattleAvatarTag>* TagList; // 0x20
		::System::String* DefaultAvatarMiniIconPath; // 0x28
		::System::String* DefaultAvatarHeadIconPath; // 0x30
		::System::String* AvatarShopIconPath; // 0x38
		::System::String* UltraSkillCutInPrefabPath; // 0x40
		::System::String* DefaultAvatarRoundIconPath; // 0x48
		::Class_1_AC5917224CA07AC1* Defence; // 0x50
		::Class_1_AC5917224CA07AC1* HP; // 0x58
		::System::String* AIPath; // 0x60
		::System::String* DefaultAvatarModelPath; // 0x68
		::Il2CppArray<::System::UInt32>* SkillList; // 0x70
		::Class_1_AC5917224CA07AC1* Attack; // 0x78
		::Il2CppArray<::System::UInt32>* PromotionIDList; // 0x80
		::RPG::Client::TextID AvatarDesc2; // 0x88
		::System::Boolean FormalAvatar; // 0x98
		::RPG::GameCore::FixPoint MoveSpeed; // 0xA0
		::System::UInt32 Rarity; // 0xA8
		::System::UInt32 ID; // 0xAC
		::RPG::Client::TextID AvatarDesc1; // 0xB0
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0xC0
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0xC8
		::RPG::GameCore::ILBattleCharacterLocation AvatarType; // 0xD0
		::RPG::GameCore::ILBattleAvatarTag MainTag; // 0xD4
		::RPG::Client::TextID AvatarDesc3; // 0xD8
		::RPG::GameCore::FixPoint ElementMastery; // 0xE8
		::RPG::Client::TextID FullName; // 0xF0
		::RPG::Client::TextID AvatarName; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ILBattleAvatarConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleAvatarConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
