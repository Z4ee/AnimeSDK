#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTMAILSENTENCEDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C1437F0)
#define RPG_GAMECORE_TAROTMAILSENTENCEDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C143970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotMailSentenceDataRow_TypeDefinitionIndex = 14641;

	class TarotMailSentenceDataRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID Sentence; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILSENTENCEDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotMailSentenceDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotMailSentenceDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILSENTENCEDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
