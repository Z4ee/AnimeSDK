#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKDELETEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFB1B0)
#define RPG_GAMECORE_TAROTBOOKDELETEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFB520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookDeleteInfoRow_TypeDefinitionIndex = 14469;

	class TarotBookDeleteInfoRow : public ::System::Object
	{
	public:
		::System::Single FadeInTime; // 0x10
		::System::Single ProgressGapTime; // 0x14
		::RPG::Client::TextID SentenceTextmapID; // 0x18
		::RPG::Client::TextID ProgressDesc; // 0x28
		::System::UInt32 ProgressEnd; // 0x38
		::System::UInt32 ID; // 0x3C
		::RPG::Client::TextID SentenceName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKDELETEINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookDeleteInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookDeleteInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKDELETEINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
