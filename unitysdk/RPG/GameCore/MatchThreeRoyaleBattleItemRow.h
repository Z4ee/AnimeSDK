#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEROYALEBATTLEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173B50B0)
#define RPG_GAMECORE_MATCHTHREEROYALEBATTLEITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173B54B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeRoyaleBattleItemRow_TypeDefinitionIndex = 11073;

	class MatchThreeRoyaleBattleItemRow : public ::System::Object
	{
	public:
		::System::String* ItemIcon; // 0x10
		::RPG::GameCore::MatchThreePropType PropType; // 0x18
		::RPG::Client::TextID ItemName; // 0x20
		::RPG::Client::TextID ItemUseFailHint; // 0x30
		::System::UInt32 InputGridCount; // 0x40
		::System::UInt32 BattleItemID; // 0x44
		::RPG::Client::TextID ItemDesc; // 0x48
		::RPG::Client::TextID ItemHint; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEROYALEBATTLEITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeRoyaleBattleItemRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeRoyaleBattleItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEROYALEBATTLEITEMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
