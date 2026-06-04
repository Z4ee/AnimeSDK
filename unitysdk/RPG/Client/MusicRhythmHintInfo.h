#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMHINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC226B90)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmHintInfo_TypeDefinitionIndex = 56250;

	class MusicRhythmHintInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* InputBeats; // 0x10
		::System::Single StartTime; // 0x18
		::System::Int32 BeatIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMHINTINFO__CTOR_OFFSET))(this);
		}
	};
}
