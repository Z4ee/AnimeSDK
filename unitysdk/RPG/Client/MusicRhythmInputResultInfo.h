#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMINPUTRESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAB19EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmInputResultInfo_TypeDefinitionIndex = 55497;

	class MusicRhythmInputResultInfo : public ::System::Object
	{
	public:
		::System::Int32 GroupIndex; // 0x10
		::System::Single MusicTime; // 0x14
		::RPG::Client::NoteInputResult Result; // 0x18
		::System::Single DeltaTime; // 0x1C
		::System::Int32 NoteIndex; // 0x20
		::System::Boolean Active; // 0x24
		::System::Boolean KeyUp; // 0x25
		::System::Boolean LongInput; // 0x26
		::System::Boolean PassMiss; // 0x27

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMINPUTRESULTINFO__CTOR_OFFSET))(this);
		}
	};
}
