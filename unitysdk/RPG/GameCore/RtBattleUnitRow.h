#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBattleCharacterType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RTBATTLEUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BDD9B0)
#define RPG_GAMECORE_RTBATTLEUNITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDE0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleUnitRow_TypeDefinitionIndex = 17151;

	class RtBattleUnitRow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::RtBattleCharacterType CharacterType; // 0x14
		::RPG::GameCore::EntityType OriginEntityType; // 0x18
		::System::UInt32 OriginCharacterID; // 0x1C
		::System::String* Name; // 0x20
		::System::String* ConfigPath; // 0x28
		::System::String* HeadIconPath; // 0x30
		::System::String* ModelPath; // 0x38
		::System::String* AIConfigPath; // 0x40
		::RPG::GameCore::FixPoint HitBoxRadius; // 0x48
		::RPG::GameCore::FixPoint AlertRange; // 0x50
		::RPG::GameCore::FixPoint HP; // 0x58
		::RPG::GameCore::FixPoint AttackPoint; // 0x60
		::RPG::GameCore::FixPoint AttackSpeed; // 0x68
		::RPG::GameCore::FixPoint MoveSpeed; // 0x70
		::RPG::GameCore::FixPoint RotSpeed; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEUNITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleUnitRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleUnitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEUNITROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
