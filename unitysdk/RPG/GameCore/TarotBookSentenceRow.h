#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKSENTENCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5BFE70)
#define RPG_GAMECORE_TAROTBOOKSENTENCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C0030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookSentenceRow_TypeDefinitionIndex = 15064;

	class TarotBookSentenceRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Sentence; // 0x10
		::System::UInt32 VoiceID; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKSENTENCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotBookSentenceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookSentenceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKSENTENCEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
