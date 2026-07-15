#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define RPG_CLIENT_FIRSTVIEWCAMERA_AWAKE_OFFSET UNITYSDK_OFFSET(0x18401AA0)
#define RPG_CLIENT_FIRSTVIEWCAMERA_SETDESTINATION_OFFSET UNITYSDK_OFFSET(0x18401A20)
#define RPG_CLIENT_FIRSTVIEWCAMERA_SETTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x184019D0)
#define RPG_CLIENT_FIRSTVIEWCAMERA_START_OFFSET UNITYSDK_OFFSET(0x18401B30)
#define RPG_CLIENT_FIRSTVIEWCAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0x18401BC0)
#define RPG_CLIENT_FIRSTVIEWCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18402410)

namespace RPG::Client
{
	inline static constexpr unsigned int FirstViewCamera_TypeDefinitionIndex = 57401;

	class FirstViewCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single sensitivityX; // 0x18
		::System::Single sensitivityY; // 0x1C
		::System::Single minimumY; // 0x20
		::System::Single maximumY; // 0x24
		::System::Single Field_5_4; // 0x28
		::System::Boolean MoveSwtichOn; // 0x2C
		::System::Boolean RotationSwtichOn; // 0x2D
		::UnityEngine::AI::NavMeshAgent* AgentPlayer; // 0x30
		::System::Single MoveSpeed; // 0x38
		::UnityEngine::Transform* TargetPosition; // 0x40
		::System::Boolean Field_5_10; // 0x48
		::System::Single Field_5_11; // 0x4C
		::System::Single Field_5_12; // 0x50
		::UnityEngine::Transform* Field_5_13; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIRSTVIEWCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void SetTargetCamera(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIRSTVIEWCAMERA_SETTARGETCAMERA_OFFSET))(this, a1);
		}

		::System::Void SetDestination(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIRSTVIEWCAMERA_SETDESTINATION_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIRSTVIEWCAMERA_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIRSTVIEWCAMERA_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIRSTVIEWCAMERA_UPDATE_OFFSET))(this);
		}
	};
}
