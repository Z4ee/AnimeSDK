#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKCHARACTERLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFA760)
#define RPG_GAMECORE_TAROTBOOKCHARACTERLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFA960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookCharacterLevelRow_TypeDefinitionIndex = 14437;

	class TarotBookCharacterLevelRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::TextID HintID; // 0x18
		::System::UInt32 CharacterID; // 0x28
		::System::UInt32 Level; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCHARACTERLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookCharacterLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookCharacterLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCHARACTERLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
