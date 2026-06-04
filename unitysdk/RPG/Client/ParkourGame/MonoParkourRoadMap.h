#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourRoadMap_RoadMapPoint.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROADMAP__CTOR_OFFSET UNITYSDK_OFFSET(0xC33B090)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoadMap_TypeDefinitionIndex = 69246;

	class MonoParkourRoadMap : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 RoadNum; // 0x18
		::System::Single RoadWidth; // 0x1C
		::System::Single RoadSwitchTolerance; // 0x20
		::RPG::Client::ParkourGame::MonoParkourRoadMap_RoadMapPoint Origin; // 0x28
		::UnityEngine::Transform* StartOrigin; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROADMAP__CTOR_OFFSET))(this);
		}
	};
}
