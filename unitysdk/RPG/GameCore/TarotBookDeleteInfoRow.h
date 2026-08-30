#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKDELETEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E1C6DB0)
#define RPG_GAMECORE_TAROTBOOKDELETEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C7120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookDeleteInfoRow_TypeDefinitionIndex = 15078;

	class TarotBookDeleteInfoRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID SentenceTextmapID; // 0x10
		::RPG::Client::TextID SentenceName; // 0x20
		::System::UInt32 ID; // 0x30
		::System::Single FadeInTime; // 0x34
		::System::UInt32 ProgressEnd; // 0x38
		::System::Single ProgressGapTime; // 0x3C
		::RPG::Client::TextID ProgressDesc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKDELETEINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotBookDeleteInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookDeleteInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKDELETEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
