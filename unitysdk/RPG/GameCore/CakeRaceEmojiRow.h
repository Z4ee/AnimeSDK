#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEEMOJIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x195ECA30)
#define RPG_GAMECORE_CAKERACEEMOJIROW__CTOR_OFFSET UNITYSDK_OFFSET(0x195ECBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceEmojiRow_TypeDefinitionIndex = 10564;

	class CakeRaceEmojiRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::Boolean CanPlayerUse; // 0x18
		::System::UInt32 EmojiID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEEMOJIROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceEmojiRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceEmojiRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEEMOJIROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
