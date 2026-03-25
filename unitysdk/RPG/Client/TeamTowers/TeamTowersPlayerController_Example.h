#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERCONTROLLER_EXAMPLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA583A90)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERCONTROLLER_EXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA583BC0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersPlayerController_Example_TypeDefinitionIndex = 61853;

	class TeamTowersPlayerController_Example : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::UnityEngine::Vector3>* OnOperationMove; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERCONTROLLER_EXAMPLE__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERCONTROLLER_EXAMPLE_UPDATE_OFFSET))(this);
		}
	};
}
