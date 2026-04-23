#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEMOJIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0FC30)
#define RPG_GAMECORE_IDLELIVEEMOJIROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0FD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEmojiRow_TypeDefinitionIndex = 11257;

	class IdleLiveEmojiRow : public ::System::Object
	{
	public:
		::System::String* EmojiIcon; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEMOJIROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveEmojiRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveEmojiRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEMOJIROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
