#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEMOJIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B694700)
#define RPG_GAMECORE_IDLELIVEEMOJIROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B694830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEmojiRow_TypeDefinitionIndex = 11404;

	class IdleLiveEmojiRow : public ::System::Object
	{
	public:
		::System::String* EmojiIcon; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEMOJIROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveEmojiRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveEmojiRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEMOJIROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
