#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloorPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_FLOORCONFIG_METHOD_1_B44299CA42909300_OFFSET UNITYSDK_OFFSET(0x1C286110)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_FLOORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C286B80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelCell_FloorConfig_TypeDefinitionIndex = 60537;

	class MonoTimelineControlGameLevelCell_FloorConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_FLOORCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_B44299CA42909300(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a5)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_FLOORCONFIG_METHOD_1_B44299CA42909300_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
