#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLAYSIMPLETALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D7750)

namespace RPG::Client
{
	inline static constexpr unsigned int PlaySimpleTalkData_TypeDefinitionIndex = 68039;

	class PlaySimpleTalkData : public ::System::Object
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x10
		::System::UInt32 VoiceID; // 0x14
		::System::Boolean KeepDisplay; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYSIMPLETALKDATA__CTOR_OFFSET))(this);
		}
	};
}
