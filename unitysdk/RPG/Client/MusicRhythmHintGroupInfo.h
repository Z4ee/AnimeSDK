#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMHINTGROUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC226B80)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmHintGroupInfo_TypeDefinitionIndex = 56249;

	class MusicRhythmHintGroupInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* InputBeats; // 0x10
		::System::Int32 GroupIndex; // 0x18
		::System::Int32 NoteIndex; // 0x1C
		::System::Int32 HintIndex; // 0x20
		::System::Boolean HasInput; // 0x24
		::System::Single StartTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMHINTGROUPINFO__CTOR_OFFSET))(this);
		}
	};
}
