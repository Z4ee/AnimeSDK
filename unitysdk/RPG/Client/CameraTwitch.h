#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CAMERATWITCH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x925BEB0)
#define RPG_CLIENT_CAMERATWITCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x925BC90)
#define RPG_CLIENT_CAMERATWITCH_START_OFFSET UNITYSDK_OFFSET(0x925BC00)
#define RPG_CLIENT_CAMERATWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x925BCE0)
#define RPG_CLIENT_CAMERATWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x925BF20)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraTwitch_TypeDefinitionIndex = 56309;

	class CameraTwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Strength; // 0x18
		::System::Single Time; // 0x1C
		::System::Boolean Always; // 0x20
		::UnityEngine::Transform* _CameraTransform; // 0x28
		::UnityEngine::Vector3 _InitPosition; // 0x30
		::System::Single _Percent; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERATWITCH__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERATWITCH_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERATWITCH_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERATWITCH_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERATWITCH_ONDISABLE_OFFSET))(this);
		}
	};
}
