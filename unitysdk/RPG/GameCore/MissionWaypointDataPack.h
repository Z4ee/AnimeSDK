#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomValueType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CheckFloorSavedValueConfig; }
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class MissionCustomValue; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_MISSIONWAYPOINTDATAPACK_METHOD_2_5935F32D8C451650_OFFSET UNITYSDK_OFFSET(0x1D1AF560)
#define RPG_GAMECORE_MISSIONWAYPOINTDATAPACK_METHOD_2_BEE4836E9BA50A15_OFFSET UNITYSDK_OFFSET(0x1D1AF8F0)
#define RPG_GAMECORE_MISSIONWAYPOINTDATAPACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AF8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionWaypointDataPack_TypeDefinitionIndex = 18788;

	class MissionWaypointDataPack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CustomValueType CustomValueType; // 0x10
		::RPG::GameCore::FloorCustomValueConfig* FloorCustomValue; // 0x18
		::RPG::GameCore::CheckFloorSavedValueConfig* FloorSavedValue; // 0x20
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x28
		::System::UInt32 MCVValue; // 0x30
		::RPG::GameCore::MissionWayPointType WayPointType; // 0x34
		::System::UInt32 WayPointFloorID; // 0x38
		::System::UInt32 WayPointGroupID; // 0x3C
		::System::UInt32 WayPointEntityID; // 0x40
		::System::UInt32 WayPointLittleGameEntityID; // 0x44
		::System::Int32 WayPointShowRangeMin; // 0x48
		::System::Single MapWaypointRange; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONWAYPOINTDATAPACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5935F32D8C451650(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionWaypointDataPack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionWaypointDataPack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONWAYPOINTDATAPACK_METHOD_2_5935F32D8C451650_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_BEE4836E9BA50A15(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionWaypointDataPack*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionWaypointDataPack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONWAYPOINTDATAPACK_METHOD_2_BEE4836E9BA50A15_OFFSET))(a1, a2);
		}
	};
}
