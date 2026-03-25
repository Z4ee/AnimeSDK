#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TAROTEXPERIMENTSENTENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xA54F570)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotExperimentSentence_TypeDefinitionIndex = 55551;

	class TarotExperimentSentence : public ::System::Object
	{
	public:
		::RPG::Client::TextID TextID; // 0x10
		::System::UInt32 VoiceID; // 0x20
		::System::Boolean IsEmpty; // 0x24

		::System::Void _ctor(::RPG::Client::TextID textID, ::System::UInt32 voiceID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTEXPERIMENTSENTENCE__CTOR_OFFSET))(this, textID, voiceID);
		}
	};
}
