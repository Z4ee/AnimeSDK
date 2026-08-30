#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EMOJIICONINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D061360)
#define RPG_GAMECORE_EMOJIICONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D061430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmojiIconInfo_TypeDefinitionIndex = 20170;

	class EmojiIconInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* IconPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIICONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EmojiIconInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EmojiIconInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIICONINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
