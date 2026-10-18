#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMINPUTRESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD911AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmInputResultInfo_TypeDefinitionIndex = 60168;

	class MusicRhythmInputResultInfo : public ::System::Object
	{
	public:
		::System::Boolean LongInput; // 0x10
		::System::Boolean KeyUp; // 0x11
		::System::Boolean Active; // 0x12
		::System::Boolean PassMiss; // 0x13
		::System::Single MusicTime; // 0x14
		::System::Int32 NoteIndex; // 0x18
		::RPG::Client::NoteInputResult Result; // 0x1C
		::System::Single DeltaTime; // 0x20
		::System::Int32 GroupIndex; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMINPUTRESULTINFO__CTOR_OFFSET))(this);
		}
	};
}
