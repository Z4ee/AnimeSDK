#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_28C374693CE0ED28.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_EVENTRANGE_GET_TIMEOFFSETSECONDS_OFFSET UNITYSDK_OFFSET(0x16037D00)
#define MOLEMOLE_EVENTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16037D10)

namespace MoleMole
{
	inline static constexpr unsigned int EventRange_TypeDefinitionIndex = 41665;

	class EventRange : public ::System::Object
	{
	public:
		::System::String* TrackId; // 0x10
		::Enum_3_28C374693CE0ED28 Type; // 0x18
		::System::Double StartBeat; // 0x20
		::System::Double EndBeat; // 0x28
		::System::Int32 TimeOffsetMs; // 0x30
		::System::Double StartTimeSeconds; // 0x38
		::System::Double EndTimeSeconds; // 0x40
		::System::Int32 BoundNoteLaneId; // 0x48
		::System::String* PerformSignalDesc; // 0x50
		::System::String* EventKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EVENTRANGE__CTOR_OFFSET))(this);
		}

		::System::Double get_TimeOffsetSeconds()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EVENTRANGE_GET_TIMEOFFSETSECONDS_OFFSET))(this);
		}
	};
}
