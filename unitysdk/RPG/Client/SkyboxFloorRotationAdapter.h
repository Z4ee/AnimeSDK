#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SKYBOXFLOORROTATIONADAPTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA4A1A30)
#define RPG_CLIENT_SKYBOXFLOORROTATIONADAPTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA4A1AD0)
#define RPG_CLIENT_SKYBOXFLOORROTATIONADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A1C50)

namespace RPG::Client
{
	inline static constexpr unsigned int SkyboxFloorRotationAdapter_TypeDefinitionIndex = 59835;

	class SkyboxFloorRotationAdapter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean UseUI3DCamera; // 0x18
		::UnityEngine::Transform* _CameraTrans; // 0x20
		::UnityEngine::Vector3 Field_5_2; // 0x28
		::UnityEngine::Transform* Field_5_3; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKYBOXFLOORROTATIONADAPTER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKYBOXFLOORROTATIONADAPTER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKYBOXFLOORROTATIONADAPTER_LATEUPDATE_OFFSET))(this);
		}
	};
}
