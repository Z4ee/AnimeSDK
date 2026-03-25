#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BUBBLETALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FF87A0)
#define RPG_GAMECORE_BUBBLETALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF8AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BubbleTalkInfo_TypeDefinitionIndex = 18700;

	class BubbleTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single AutoSkipTime; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 GroupNpcID; // 0x18
		::System::UInt32 InstanceID; // 0x1C
		::RPG::Client::TextID DialogueTextmapID; // 0x20
		::System::UInt32 TalkSentenceID; // 0x30
		::System::String* ReplaceParam; // 0x38
		::System::String* ShowText; // 0x40
		::System::Boolean EnableVoice; // 0x48
		::System::UInt32 RuntimeID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUBBLETALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BubbleTalkInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BubbleTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUBBLETALKINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
