#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TAROTEXPERIMENTSENTENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A37D210)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotExperimentSentence_TypeDefinitionIndex = 68055;

	class TarotExperimentSentence : public ::System::Object
	{
	public:
		::System::Boolean IsEmpty; // 0x10
		::System::UInt32 VoiceID; // 0x14
		::RPG::Client::TextID TextID; // 0x18

		::System::Void _ctor(::RPG::Client::TextID a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTEXPERIMENTSENTENCE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
