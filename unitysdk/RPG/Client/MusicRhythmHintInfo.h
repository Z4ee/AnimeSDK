#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMHINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD910930)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmHintInfo_TypeDefinitionIndex = 60306;

	class MusicRhythmHintInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* InputBeats; // 0x10
		::System::Int32 BeatIndex; // 0x18
		::System::Single StartTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMHINTINFO__CTOR_OFFSET))(this);
		}
	};
}
