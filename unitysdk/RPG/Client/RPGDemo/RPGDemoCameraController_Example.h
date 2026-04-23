#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_RPGDEMO_RPGDEMOCAMERACONTROLLER_EXAMPLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xAF43880)
#define RPG_CLIENT_RPGDEMO_RPGDEMOCAMERACONTROLLER_EXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF43AE0)

namespace RPG::Client::RPGDemo
{
	inline static constexpr unsigned int RPGDemoCameraController_Example_TypeDefinitionIndex = 69769;

	class RPGDemoCameraController_Example : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x24
		::System::Single Field_5_2; // 0x28
		::UnityEngine::Transform* CameraFollow; // 0x30
		::UnityEngine::Transform* CameraLookAt; // 0x38
		::UnityEngine::Transform* PlayerBall; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMO_RPGDEMOCAMERACONTROLLER_EXAMPLE__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMO_RPGDEMOCAMERACONTROLLER_EXAMPLE_UPDATE_OFFSET))(this);
		}
	};
}
