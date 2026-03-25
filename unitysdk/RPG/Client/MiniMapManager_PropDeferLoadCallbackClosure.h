#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MiniMapManager; }
namespace RPG::Client { class SubMissionData; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9BAD810)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_EXECUTEFORASSISTWAYPOINTREFRESHEDIMPL_OFFSET UNITYSDK_OFFSET(0x9BAD6A0)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_EXECUTEFORMISSIONREFRESHEDIMPL_OFFSET UNITYSDK_OFFSET(0x9BAD3D0)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_GET_EXECUTEFORASSISTWAYPOINTREFRESHED_OFFSET UNITYSDK_OFFSET(0x9BAC8E0)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_GET_EXECUTEFORMISSIONREFRESHED_OFFSET UNITYSDK_OFFSET(0x9BAC7E0)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_INIT_1_OFFSET UNITYSDK_OFFSET(0x9BAC880)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_INIT_OFFSET UNITYSDK_OFFSET(0x9BAC6D0)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE__CTOR_OFFSET UNITYSDK_OFFSET(0x9BAD870)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapManager_PropDeferLoadCallbackClosure_TypeDefinitionIndex = 49138;

	class MiniMapManager_PropDeferLoadCallbackClosure : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::MapProp*>* _executeCallback; // 0x10
		::RPG::Client::SubMissionData* subMission; // 0x18
		::RPG::Client::MiniMapManager* _context; // 0x20
		::System::Action_1<::RPG::Client::MapProp*>* _execute2Callback; // 0x28
		::UnityEngine::Color circleColor; // 0x30
		::System::Single fWayPointShowRangeMax; // 0x40
		::System::UInt32 nIconID; // 0x44
		::System::Boolean bIsTrackingMission; // 0x48
		::System::Single fShowRangeRadius; // 0x4C
		::System::Single fWayPointShowRangeMin; // 0x50

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
