#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMSCOREINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD5F40)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmScoreInfo_TypeDefinitionIndex = 48747;

	class MusicRhythmScoreInfo : public ::System::Object
	{
	public:
		::System::Boolean ShowSkip; // 0x10
		::System::UInt32 Combo; // 0x14
		::System::UInt32 Score; // 0x18
		::System::UInt32 CountDown; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSCOREINFO__CTOR_OFFSET))(this);
		}
	};
}
