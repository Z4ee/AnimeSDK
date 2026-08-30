#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMISSIONWAYPOINT_METHOD_3_24AE18F9EDC60A25_OFFSET UNITYSDK_OFFSET(0x1D505B20)
#define RPG_GAMECORE_SETMISSIONWAYPOINT_METHOD_3_A6810C5417D383E9_OFFSET UNITYSDK_OFFSET(0x1D505AE0)
#define RPG_GAMECORE_SETMISSIONWAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D505B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMissionWayPoint_TypeDefinitionIndex = 20522;

	class SetMissionWayPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
		::System::Boolean OverideMissionWayPointType; // 0x1C
		::RPG::GameCore::MissionWayPointType MissionWayPointType; // 0x20
		::System::Boolean OverideWayPointFloorID; // 0x24
		::System::UInt32 WayPointFloorID; // 0x28
		::System::Boolean OverideWayPointGroupID; // 0x2C
		::System::UInt32 WayPointGroupID; // 0x30
		::System::Boolean OverideWayPointEntityID; // 0x34
		::System::UInt32 WayPointEntityID; // 0x38
		::System::Boolean OverideWayPointLittleGameEntityID; // 0x3C
		::System::UInt32 WayPointLittleGameEntityID; // 0x40
		::System::Boolean OverideWayPointShowRangeMin; // 0x44
		::System::Int32 WayPointShowRangeMin; // 0x48
		::System::Boolean OverideMapWaypointRange; // 0x4C
		::System::Single MapWaypointRange; // 0x50
		::System::Boolean OverideFroceMapHint; // 0x54
		::System::Boolean FroceMapHint; // 0x55

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONWAYPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A6810C5417D383E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMissionWayPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMissionWayPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONWAYPOINT_METHOD_3_A6810C5417D383E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_24AE18F9EDC60A25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMissionWayPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMissionWayPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONWAYPOINT_METHOD_3_24AE18F9EDC60A25_OFFSET))(a1, a2);
		}
	};
}
