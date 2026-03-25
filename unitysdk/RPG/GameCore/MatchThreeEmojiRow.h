#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEEMOJIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173B0310)
#define RPG_GAMECORE_MATCHTHREEEMOJIROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173B04B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeEmojiRow_TypeDefinitionIndex = 10962;

	class MatchThreeEmojiRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 EmojiID; // 0x18
		::System::Boolean CanPlayerUse; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEEMOJIROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeEmojiRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeEmojiRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEEMOJIROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
