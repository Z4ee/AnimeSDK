#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_RPGDEMO_RPGDEMOPLAYERCONTROLLER_EXAMPLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xDDCF1C0)
#define RPG_CLIENT_RPGDEMO_RPGDEMOPLAYERCONTROLLER_EXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0xDDCF310)

namespace RPG::Client::RPGDemo
{
	inline static constexpr unsigned int RPGDemoPlayerController_Example_TypeDefinitionIndex = 75534;

	class RPGDemoPlayerController_Example : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::UnityEngine::Vector3>* OnOperationMove; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMO_RPGDEMOPLAYERCONTROLLER_EXAMPLE__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMO_RPGDEMOPLAYERCONTROLLER_EXAMPLE_UPDATE_OFFSET))(this);
		}
	};
}
