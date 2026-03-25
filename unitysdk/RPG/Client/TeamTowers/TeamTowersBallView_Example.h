#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBALLVIEW_EXAMPLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA5836D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBALLVIEW_EXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA583810)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersBallView_Example_TypeDefinitionIndex = 61849;

	class TeamTowersBallView_Example : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBALLVIEW_EXAMPLE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBALLVIEW_EXAMPLE_ONENABLE_OFFSET))(this);
		}
	};
}
