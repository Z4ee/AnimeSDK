#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EmojiGroupTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EMOJIGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D060C70)
#define RPG_GAMECORE_EMOJIGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D061350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmojiGroupRow_TypeDefinitionIndex = 13116;

	class EmojiGroupRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::RPG::GameCore::EmojiGroupTypeEnum EmojiGroupType; // 0x18
		::System::UInt32 EmojiGroupID; // 0x1C
		::RPG::Client::TextID GroupName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EmojiGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EmojiGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
