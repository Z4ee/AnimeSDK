#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMTALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BAEF070)
#define RPG_GAMECORE_MUSICRHYTHMTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAEF3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmTalkInfo_TypeDefinitionIndex = 21254;

	class MusicRhythmTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single TextSpeed; // 0x10
		::System::UInt32 TalkSentenceID; // 0x14
		::System::Single ProtectTime; // 0x18
		::System::Single ForceToNextTime; // 0x1C
		::System::String* NotifyName; // 0x20
		::System::Boolean IsMultiPlatform; // 0x28
		::System::UInt32 MobileSentenceID; // 0x2C
		::System::UInt32 PcSentenceID; // 0x30
		::System::UInt32 PadSentenceID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMTALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MusicRhythmTalkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMTALKINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
