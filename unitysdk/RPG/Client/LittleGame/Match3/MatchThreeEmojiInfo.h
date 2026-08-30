#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_MATCH3_MATCHTHREEEMOJIINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9E060)

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int MatchThreeEmojiInfo_TypeDefinitionIndex = 41405;

	class MatchThreeEmojiInfo : public ::System::Object
	{
	public:
		::System::Single Delay; // 0x10
		::System::UInt32 EmojiID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3_MATCHTHREEEMOJIINFO__CTOR_OFFSET))(this);
		}
	};
}
