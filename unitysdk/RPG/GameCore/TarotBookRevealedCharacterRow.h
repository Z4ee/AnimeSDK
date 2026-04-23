#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKREVEALEDCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFC8C0)
#define RPG_GAMECORE_TAROTBOOKREVEALEDCHARACTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFCAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookRevealedCharacterRow_TypeDefinitionIndex = 14433;

	class TarotBookRevealedCharacterRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::Client::TextID Name; // 0x18
		::RPG::Client::TextID MainCatalogTitle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKREVEALEDCHARACTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookRevealedCharacterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookRevealedCharacterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKREVEALEDCHARACTERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
