#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EmojiGroupTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EMOJIGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188A38A0)
#define RPG_GAMECORE_EMOJIGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188A3FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmojiGroupRow_TypeDefinitionIndex = 12500;

	class EmojiGroupRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::System::UInt32 EmojiGroupID; // 0x18
		::RPG::GameCore::EmojiGroupTypeEnum EmojiGroupType; // 0x1C
		::RPG::Client::TextID GroupName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EmojiGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EmojiGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
