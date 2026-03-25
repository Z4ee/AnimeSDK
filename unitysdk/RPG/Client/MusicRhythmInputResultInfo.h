#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMINPUTRESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD2540)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmInputResultInfo_TypeDefinitionIndex = 48748;

	class MusicRhythmInputResultInfo : public ::System::Object
	{
	public:
		::System::Int32 GroupIndex; // 0x10
		::System::Boolean LongInput; // 0x14
		::System::Boolean PassMiss; // 0x15
		::System::Boolean KeyUp; // 0x16
		::System::Boolean Active; // 0x17
		::System::Single DeltaTime; // 0x18
		::System::Int32 NoteIndex; // 0x1C
		::RPG::Client::NoteInputResult Result; // 0x20
		::System::Single MusicTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMINPUTRESULTINFO__CTOR_OFFSET))(this);
		}
	};
}
