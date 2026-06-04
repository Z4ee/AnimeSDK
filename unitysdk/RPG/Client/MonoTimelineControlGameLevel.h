#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_F9A00379C2678C49;
namespace RPG::Client { class MonoTimelineControlGameLevelGroup; }

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_CREATEGAMEWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xC14C830)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0xC14CDB0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xC14CF70)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_GET_UP_OFFSET UNITYSDK_OFFSET(0xC14D130)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC14D2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevel_TypeDefinitionIndex = 56477;

	class MonoTimelineControlGameLevel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::MonoTimelineControlGameLevelGroup*>* groups; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL__CTOR_OFFSET))(this);
		}

		::System::Void CreateGameWorldLevel(::Class_2_F9A00379C2678C49* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F9A00379C2678C49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_CREATEGAMEWORLDLEVEL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_GET_FORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Right()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_GET_RIGHT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_GET_UP_OFFSET))(this);
		}
	};
}
