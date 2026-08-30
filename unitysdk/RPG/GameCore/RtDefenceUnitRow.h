#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtDefenceCharacterType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RTDEFENCEUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CCE5CE0)
#define RPG_GAMECORE_RTDEFENCEUNITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE6430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceUnitRow_TypeDefinitionIndex = 17848;

	class RtDefenceUnitRow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 AvatarID; // 0x14
		::System::UInt32 StarRank; // 0x18
		::RPG::GameCore::RtDefenceCharacterType CharacterType; // 0x1C
		::RPG::GameCore::EntityType OriginEntityType; // 0x20
		::System::UInt32 OriginCharacterID; // 0x24
		::System::String* Name; // 0x28
		::System::String* ConfigPath; // 0x30
		::System::String* HeadIconPath; // 0x38
		::System::String* ModelPath; // 0x40
		::System::String* AIConfigPath; // 0x48
		::RPG::GameCore::FixPoint HitBoxRadius; // 0x50
		::RPG::GameCore::FixPoint AlertRange; // 0x58
		::RPG::GameCore::FixPoint HP; // 0x60
		::RPG::GameCore::FixPoint AttackPoint; // 0x68
		::RPG::GameCore::FixPoint AttackSpeed; // 0x70
		::RPG::GameCore::FixPoint MoveSpeed; // 0x78
		::RPG::GameCore::FixPoint RotSpeed; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEUNITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceUnitRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceUnitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEUNITROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
