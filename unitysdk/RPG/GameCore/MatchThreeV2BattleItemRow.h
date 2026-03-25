#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173B6D50)
#define RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173B7380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2BattleItemRow_TypeDefinitionIndex = 10980;

	class MatchThreeV2BattleItemRow : public ::System::Object
	{
	public:
		::System::String* ItemEffectJson; // 0x10
		::System::String* ItemIcon; // 0x18
		::RPG::Client::TextID ItemDesc; // 0x20
		::System::UInt32 BattleItemID; // 0x30
		::RPG::GameCore::MatchThreePropType PropType; // 0x34
		::RPG::Client::TextID ItemUseFailHint; // 0x38
		::RPG::Client::TextID ItemHint; // 0x48
		::System::UInt32 Order; // 0x58
		::System::UInt32 LevelUpCost; // 0x5C
		::RPG::Client::TextID ItemName; // 0x60
		::System::UInt32 ItemLevel; // 0x70
		::System::UInt32 InputGridCount; // 0x74
		::RPG::Client::TextID ItemLevelUpDesc; // 0x78
		::System::Boolean IsUnlock; // 0x88
		::System::UInt32 ItemUseCount; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeV2BattleItemRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2BattleItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
