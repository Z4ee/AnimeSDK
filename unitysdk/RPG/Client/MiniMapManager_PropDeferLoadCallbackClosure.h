#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MiniMapManager; }
namespace RPG::Client { class SubMissionData; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA8A8680)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_EXECUTEFORASSISTWAYPOINTREFRESHEDIMPL_OFFSET UNITYSDK_OFFSET(0xA8A8510)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_EXECUTEFORMISSIONREFRESHEDIMPL_OFFSET UNITYSDK_OFFSET(0xA8A8240)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_GET_EXECUTEFORASSISTWAYPOINTREFRESHED_OFFSET UNITYSDK_OFFSET(0xA8A7750)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_GET_EXECUTEFORMISSIONREFRESHED_OFFSET UNITYSDK_OFFSET(0xA8A7650)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_INIT_1_OFFSET UNITYSDK_OFFSET(0xA8A76F0)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_INIT_OFFSET UNITYSDK_OFFSET(0xA8A7540)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE__CTOR_OFFSET UNITYSDK_OFFSET(0xA8A86F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapManager_PropDeferLoadCallbackClosure_TypeDefinitionIndex = 55935;

	class MiniMapManager_PropDeferLoadCallbackClosure : public ::System::Object
	{
	public:
		::RPG::Client::MiniMapManager* _context; // 0x10
		::System::Action_1<::RPG::Client::MapProp*>* _execute2Callback; // 0x18
		::RPG::Client::SubMissionData* subMission; // 0x20
		::System::Action_1<::RPG::Client::MapProp*>* _executeCallback; // 0x28
		::System::UInt32 nIconID; // 0x30
		::System::Single fWayPointShowRangeMin; // 0x34
		::System::Single fWayPointShowRangeMax; // 0x38
		::System::Boolean bIsTrackingMission; // 0x3C
		::System::Single fShowRangeRadius; // 0x40
		::UnityEngine::Color circleColor; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::MiniMapManager* context, ::System::UInt32 iconID, ::System::Boolean isTrackingMission, ::System::Single showRangeRadius, ::RPG::Client::SubMissionData* subMission, ::System::Single wayPointShowRangeMin, ::System::Single wayPointShowRangeMax, ::UnityEngine::Color circleColor)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapManager*, ::System::UInt32, ::System::Boolean, ::System::Single, ::RPG::Client::SubMissionData*, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_INIT_OFFSET))(this, context, iconID, isTrackingMission, showRangeRadius, subMission, wayPointShowRangeMin, wayPointShowRangeMax, circleColor);
		}

		::System::Void Init_1(::RPG::Client::MiniMapManager* context, ::System::UInt32 iconID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_INIT_1_OFFSET))(this, context, iconID);
		}

		::System::Action_1<::RPG::Client::MapProp*>* get_ExecuteForMissionRefreshed()
		{
			return ((::System::Action_1<::RPG::Client::MapProp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_GET_EXECUTEFORMISSIONREFRESHED_OFFSET))(this);
		}

		::System::Action_1<::RPG::Client::MapProp*>* get_ExecuteForAssistWaypointRefreshed()
		{
			return ((::System::Action_1<::RPG::Client::MapProp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_GET_EXECUTEFORASSISTWAYPOINTREFRESHED_OFFSET))(this);
		}

		::System::Void ExecuteForMissionRefreshedImpl(::RPG::Client::MapProp* mapProp)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_EXECUTEFORMISSIONREFRESHEDIMPL_OFFSET))(this, mapProp);
		}

		::System::Void ExecuteForAssistWaypointRefreshedImpl(::RPG::Client::MapProp* mapProp)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_EXECUTEFORASSISTWAYPOINTREFRESHEDIMPL_OFFSET))(this, mapProp);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_CLEAR_OFFSET))(this);
		}
	};
}
