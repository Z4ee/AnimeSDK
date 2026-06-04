#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D2FEC0)
#define RPG_GAMECORE_TAROTBOOKCHARACTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19D30400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookCharacterRow_TypeDefinitionIndex = 14465;

	class TarotBookCharacterRow : public ::System::Object
	{
	public:
		::System::String* RectIconPath; // 0x10
		::System::String* TabIconPath; // 0x18
		::System::String* RoundIconPath; // 0x20
		::Il2CppArray<::System::UInt32>* StoryList; // 0x28
		::System::String* PrefabPath; // 0x30
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 Position; // 0x48
		::System::UInt32 ID; // 0x4C
		::RPG::Client::TextID SubCatalogTitle; // 0x50
		::RPG::Client::TextID StarUnlockToast; // 0x60
		::System::UInt32 MaxLevel; // 0x70
		::System::UInt32 Tag; // 0x74
		::RPG::Client::TextID MainCatalogTitle; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCHARACTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotBookCharacterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookCharacterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCHARACTERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
