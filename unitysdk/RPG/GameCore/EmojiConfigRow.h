#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EmojiGenderEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EMOJICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188A1C00)
#define RPG_GAMECORE_EMOJICONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188A2F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmojiConfigRow_TypeDefinitionIndex = 12503;

	class EmojiConfigRow : public ::System::Object
	{
	public:
		::System::String* EmojiPath; // 0x10
		::System::UInt32 SameGroupOrder; // 0x18
		::System::UInt32 EmojiGroupID; // 0x1C
		::RPG::GameCore::EmojiGenderEnum Gender; // 0x20
		::System::UInt32 GenderLink; // 0x24
		::System::Boolean IsTrainMembers; // 0x28
		::System::UInt32 EmojiID; // 0x2C
		::RPG::Client::TextID KeyWords; // 0x30

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
