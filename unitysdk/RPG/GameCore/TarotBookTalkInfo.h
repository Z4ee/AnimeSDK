#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKTALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D32630)
#define RPG_GAMECORE_TAROTBOOKTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19D326F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookTalkInfo_TypeDefinitionIndex = 19975;

	class TarotBookTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKTALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotBookTalkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKTALKINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
