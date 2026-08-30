#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/MonoTimelineControlGameLevelCell_FloorConfig.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_STAIRFLOOR_METHOD_2_A8149BE512BB2FE1_OFFSET UNITYSDK_OFFSET(0xD86BC60)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_STAIRFLOOR_METHOD_2_D9D9AC52008D123F_OFFSET UNITYSDK_OFFSET(0xD86B140)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_STAIRFLOOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD86C2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelCell_StairFloor_TypeDefinitionIndex = 60539;

	class MonoTimelineControlGameLevelCell_StairFloor : public ::RPG::Client::MonoTimelineControlGameLevelCell_FloorConfig
	{
	public:
		::RPG::Client::LittleGame::ETimelineControlGameLevelRotation rotation; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_STAIRFLOOR__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_2_A8149BE512BB2FE1(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_STAIRFLOOR_METHOD_2_A8149BE512BB2FE1_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::LittleGame::ETimelineControlGameLevelFloor Method_2_D9D9AC52008D123F()
		{
			return ((::RPG::Client::LittleGame::ETimelineControlGameLevelFloor(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_STAIRFLOOR_METHOD_2_D9D9AC52008D123F_OFFSET))(this);
		}
	};
}
