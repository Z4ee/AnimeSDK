#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAEMOJIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19649610)
#define RPG_GAMECORE_CHIMERAEMOJIROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19649740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraEmojiRow_TypeDefinitionIndex = 12416;

	class ChimeraEmojiRow : public ::System::Object
	{
	public:
		::System::String* EmojiPath; // 0x10
		::System::UInt32 EmojiID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEMOJIROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraEmojiRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraEmojiRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEMOJIROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
