#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKREVEALEDCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C1427A0)
#define RPG_GAMECORE_TAROTBOOKREVEALEDCHARACTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1429D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookRevealedCharacterRow_TypeDefinitionIndex = 14624;

	class TarotBookRevealedCharacterRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID MainCatalogTitle; // 0x10
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 UnlockID; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKREVEALEDCHARACTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotBookRevealedCharacterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookRevealedCharacterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKREVEALEDCHARACTERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
