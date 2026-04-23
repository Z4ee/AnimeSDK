#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroup.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_2_F9A00379C2678C49;
namespace RPG::Client { class MonoTimelineControlGameLevelCell; }
namespace RPG::Client { class MonoTimelineControlGameLevelGroup_TriggerConfig; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_CREATEGAMEWORLDLEVELGROUP_OFFSET UNITYSDK_OFFSET(0xA9FE570)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GETCELLCENTER_OFFSET UNITYSDK_OFFSET(0xAA00CF0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GETCELLCOUNT_OFFSET UNITYSDK_OFFSET(0xAA01750)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GET_CELLLENGTH_OFFSET UNITYSDK_OFFSET(0xAA00CE0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GET_VECTOR_OFFSET UNITYSDK_OFFSET(0xAA012E0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xAA005D0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_REFRESHPOSITION_OFFSET UNITYSDK_OFFSET(0xAA017A0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xAA01D60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelGroup_TypeDefinitionIndex = 55732;

	class MonoTimelineControlGameLevelGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3Int position; // 0x18
		::RPG::Client::LittleGame::ETimelineControlGameLevelRotation rotation; // 0x24
		::System::String* uniqueName; // 0x28
		::UnityEngine::Transform* origin; // 0x30
		::Il2CppArray<::RPG::Client::MonoTimelineControlGameLevelGroup_TriggerConfig*>* triggerConfigs; // 0x38
		::Il2CppArray<::RPG::Client::MonoTimelineControlGameLevelCell*>* cells; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Int32 GetCellCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GETCELLCOUNT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCellCenter(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GETCELLCENTER_OFFSET))(this, a1);
		}

		::System::Void RefreshPosition(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_REFRESHPOSITION_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup CreateGameWorldLevelGroup(::Class_2_F9A00379C2678C49* a1)
		{
			return ((::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup(*)(::PVOID, ::Class_2_F9A00379C2678C49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_CREATEGAMEWORLDLEVELGROUP_OFFSET))(this, a1);
		}

		::System::Single get_CellLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GET_CELLLENGTH_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Vector()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GET_VECTOR_OFFSET))(this);
		}
	};
}
