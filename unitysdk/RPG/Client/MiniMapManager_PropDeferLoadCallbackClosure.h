#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MiniMapManager; }
namespace RPG::Client { class SubMissionData; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1581DD40)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_EXECUTEFORASSISTWAYPOINTREFRESHEDIMPL_OFFSET UNITYSDK_OFFSET(0x1581DC40)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_EXECUTEFORMISSIONREFRESHEDIMPL_OFFSET UNITYSDK_OFFSET(0x1581D990)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_GET_EXECUTEFORASSISTWAYPOINTREFRESHED_OFFSET UNITYSDK_OFFSET(0x1581CCA0)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_GET_EXECUTEFORMISSIONREFRESHED_OFFSET UNITYSDK_OFFSET(0x1581CAB0)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_INIT_1_OFFSET UNITYSDK_OFFSET(0x1581CC40)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_INIT_OFFSET UNITYSDK_OFFSET(0x1581C9A0)
#define RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1581DDA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapManager_PropDeferLoadCallbackClosure_TypeDefinitionIndex = 57936;

	class MiniMapManager_PropDeferLoadCallbackClosure : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::MapProp*>* _execute2Callback; // 0x10
		::RPG::Client::SubMissionData* subMission; // 0x18
		::RPG::Client::MiniMapManager* _context; // 0x20
		::System::Action_1<::RPG::Client::MapProp*>* _executeCallback; // 0x28
		::System::Single fShowRangeRadius; // 0x30
		::UnityEngine::Color circleColor; // 0x34
		::System::Boolean bIsTrackingMission; // 0x44
		::System::UInt32 nIconID; // 0x48
		::System::Single fWayPointShowRangeMax; // 0x4C
		::System::Single fWayPointShowRangeMin; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::MiniMapManager* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Single a4, ::RPG::Client::SubMissionData* a5, ::System::Single a6, ::System::Single a7, ::UnityEngine::Color a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapManager*, ::System::UInt32, ::System::Boolean, ::System::Single, ::RPG::Client::SubMissionData*, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Init_1(::RPG::Client::MiniMapManager* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_INIT_1_OFFSET))(this, a1, a2);
		}

		::System::Action_1<::RPG::Client::MapProp*>* get_ExecuteForMissionRefreshed()
		{
			return ((::System::Action_1<::RPG::Client::MapProp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_GET_EXECUTEFORMISSIONREFRESHED_OFFSET))(this);
		}

		::System::Action_1<::RPG::Client::MapProp*>* get_ExecuteForAssistWaypointRefreshed()
		{
			return ((::System::Action_1<::RPG::Client::MapProp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_GET_EXECUTEFORASSISTWAYPOINTREFRESHED_OFFSET))(this);
		}

		::System::Void ExecuteForMissionRefreshedImpl(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_EXECUTEFORMISSIONREFRESHEDIMPL_OFFSET))(this, a1);
		}

		::System::Void ExecuteForAssistWaypointRefreshedImpl(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_EXECUTEFORASSISTWAYPOINTREFRESHEDIMPL_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_PROPDEFERLOADCALLBACKCLOSURE_CLEAR_OFFSET))(this);
		}
	};
}
