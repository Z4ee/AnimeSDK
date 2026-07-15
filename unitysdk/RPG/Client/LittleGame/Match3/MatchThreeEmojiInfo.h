#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_MATCH3_MATCHTHREEEMOJIINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C593A90)

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int MatchThreeEmojiInfo_TypeDefinitionIndex = 40467;

	class MatchThreeEmojiInfo : public ::System::Object
	{
	public:
		::System::UInt32 EmojiID; // 0x10
		::System::Single Delay; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3_MATCHTHREEEMOJIINFO__CTOR_OFFSET))(this);
		}
	};
}
