#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EmojiGenderEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EMOJICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171944D0)
#define RPG_GAMECORE_EMOJICONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17195840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmojiConfigRow_TypeDefinitionIndex = 12070;

	class EmojiConfigRow : public ::System::Object
	{
	public:
		::System::String* EmojiPath; // 0x10
		::RPG::Client::TextID KeyWords; // 0x18
		::System::Boolean IsTrainMembers; // 0x28
		::System::UInt32 GenderLink; // 0x2C
		::System::UInt32 EmojiGroupID; // 0x30
		::RPG::GameCore::EmojiGenderEnum Gender; // 0x34
		::System::UInt32 SameGroupOrder; // 0x38
		::System::UInt32 EmojiID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EmojiConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EmojiConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
