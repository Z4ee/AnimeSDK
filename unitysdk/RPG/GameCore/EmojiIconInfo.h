#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EMOJIICONINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188A3FB0)
#define RPG_GAMECORE_EMOJIICONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x188A4120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmojiIconInfo_TypeDefinitionIndex = 19360;

	class EmojiIconInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* IconPath; // 0x10
		::System::Boolean IsFlipbook; // 0x18
		::System::Single FlipbookSpeed; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIICONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EmojiIconInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EmojiIconInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIICONINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
