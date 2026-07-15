#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF3F330)
#define RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF3F960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2BattleItemRow_TypeDefinitionIndex = 11530;

	class MatchThreeV2BattleItemRow : public ::System::Object
	{
	public:
		::System::String* ItemIcon; // 0x10
		::System::String* ItemEffectJson; // 0x18
		::RPG::Client::TextID ItemName; // 0x20
		::System::UInt32 ItemLevel; // 0x30
		::RPG::GameCore::MatchThreePropType PropType; // 0x34
		::System::UInt32 LevelUpCost; // 0x38
		::System::Boolean IsUnlock; // 0x3C
		::RPG::Client::TextID ItemUseFailHint; // 0x40
		::System::UInt32 Order; // 0x50
		::System::UInt32 BattleItemID; // 0x54
		::System::UInt32 ItemUseCount; // 0x58
		::System::UInt32 InputGridCount; // 0x5C
		::RPG::Client::TextID ItemHint; // 0x60
		::RPG::Client::TextID ItemDesc; // 0x70
		::RPG::Client::TextID ItemLevelUpDesc; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeV2BattleItemRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2BattleItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
