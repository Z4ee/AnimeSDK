#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D85B620)
#define RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85BC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2BattleItemRow_TypeDefinitionIndex = 11942;

	class MatchThreeV2BattleItemRow : public ::System::Object
	{
	public:
		::System::String* ItemEffectJson; // 0x10
		::System::String* ItemIcon; // 0x18
		::RPG::Client::TextID ItemLevelUpDesc; // 0x20
		::System::UInt32 LevelUpCost; // 0x30
		::System::UInt32 BattleItemID; // 0x34
		::RPG::Client::TextID ItemUseFailHint; // 0x38
		::RPG::Client::TextID ItemHint; // 0x48
		::System::Boolean IsUnlock; // 0x58
		::RPG::GameCore::MatchThreePropType PropType; // 0x5C
		::System::UInt32 InputGridCount; // 0x60
		::System::UInt32 ItemLevel; // 0x64
		::System::UInt32 ItemUseCount; // 0x68
		::System::UInt32 Order; // 0x6C
		::RPG::Client::TextID ItemName; // 0x70
		::RPG::Client::TextID ItemDesc; // 0x80

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
