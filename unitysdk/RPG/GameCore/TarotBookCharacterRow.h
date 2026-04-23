#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFA970)
#define RPG_GAMECORE_TAROTBOOKCHARACTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFAEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookCharacterRow_TypeDefinitionIndex = 14431;

	class TarotBookCharacterRow : public ::System::Object
	{
	public:
		::System::String* RectIconPath; // 0x10
		::System::String* RoundIconPath; // 0x18
		::System::String* PrefabPath; // 0x20
		::Il2CppArray<::System::UInt32>* StoryList; // 0x28
		::System::String* TabIconPath; // 0x30
		::System::UInt32 ID; // 0x38
		::System::UInt32 Position; // 0x3C
		::RPG::Client::TextID SubCatalogTitle; // 0x40
		::RPG::Client::TextID Name; // 0x50
		::RPG::Client::TextID MainCatalogTitle; // 0x60
		::RPG::Client::TextID StarUnlockToast; // 0x70
		::System::UInt32 MaxLevel; // 0x80
		::System::UInt32 Tag; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCHARACTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookCharacterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookCharacterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCHARACTERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
