#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AirShipSubwaySchedule;
class SubwayScheduleData;
namespace System { class String; }

#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYTIMETABLE_FIND_OFFSET UNITYSDK_OFFSET(0xC943E60)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYTIMETABLE_GET_OFFSET UNITYSDK_OFFSET(0xC943DD0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYTIMETABLE_GET_TABLECOUNT_OFFSET UNITYSDK_OFFSET(0xC943D70)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYTIMETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC943F20)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubwayTimetable_TypeDefinitionIndex = 74406;

	class AirshipSubwayTimetable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* SignName; // 0x18
		::AirShipSubwaySchedule* Schedule; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYTIMETABLE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_TableCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYTIMETABLE_GET_TABLECOUNT_OFFSET))(this);
		}

		::SubwayScheduleData* Get(::System::Int32 a1)
		{
			return ((::SubwayScheduleData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYTIMETABLE_GET_OFFSET))(this, a1);
		}

		::System::Int32 Find(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYTIMETABLE_FIND_OFFSET))(this, a1);
		}
	};
}
