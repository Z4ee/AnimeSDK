#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_1.h"
#include "unitysdk/Enum_3_15C568652F4FEFB0.h"
#include "unitysdk/MoleMole/AttackMarkerType.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NOTE_GET_HASEND_OFFSET UNITYSDK_OFFSET(0x1177F800)
#define MOLEMOLE_NOTE_GET_TIMEOFFSETSECONDS_OFFSET UNITYSDK_OFFSET(0x1177F7F0)
#define MOLEMOLE_NOTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1177F820)

namespace MoleMole
{
	inline static constexpr unsigned int Note_TypeDefinitionIndex = 42041;

	class Note : public ::System::Object
	{
	public:
		::System::String* TrackId; // 0x10
		::Enum_3_15C568652F4FEFB0 Type; // 0x18
		::Enum_3_121CF606CB7E9CD1_1 Direction; // 0x1C
		::System::Double Beat; // 0x20
		::System::Int32 TimeOffsetMs; // 0x28
		::System::Double TimeSeconds; // 0x30
		::System::Double DurationBeats; // 0x38
		::System::Double DurationSeconds; // 0x40
		::System::Single PlaySpeedMultiplier; // 0x48
		::System::Int32 RollTargetCount; // 0x4C
		::System::Collections::Generic::List_1<::System::Single>* TickIntervalBeats; // 0x50
		::System::Collections::Generic::List_1<::System::Double>* TickIntervalSeconds; // 0x58
		::System::String* TimelineTrackName; // 0x60
		::System::Int32 ForwardFrame; // 0x68
		::System::String* EventName; // 0x70
		::System::String* EventKey; // 0x78
		::System::String* EntityTag; // 0x80
		::MoleMole::AttackMarkerType AttackMarker; // 0x88
		::MoleMole::Config::MusicBattleMarkerNodeType HintNodeType; // 0x8C
		::System::Boolean IsEnterBonusTime; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTE__CTOR_OFFSET))(this);
		}

		::System::Double get_TimeOffsetSeconds()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTE_GET_TIMEOFFSETSECONDS_OFFSET))(this);
		}

		::System::Boolean get_HasEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTE_GET_HASEND_OFFSET))(this);
		}
	};
}
