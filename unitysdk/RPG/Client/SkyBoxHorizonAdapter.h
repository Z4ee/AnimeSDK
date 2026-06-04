#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SKYBOXHORIZONADAPTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC8E6C30)
#define RPG_CLIENT_SKYBOXHORIZONADAPTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC8E6CD0)
#define RPG_CLIENT_SKYBOXHORIZONADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC8E7010)

namespace RPG::Client
{
	inline static constexpr unsigned int SkyBoxHorizonAdapter_TypeDefinitionIndex = 68182;

	class SkyBoxHorizonAdapter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean UseUI3DCamera; // 0x18
		::UnityEngine::Transform* CameraTrans; // 0x20
		::System::Single Angle; // 0x28
		::UnityEngine::Vector3 Field_5_3; // 0x2C
		::UnityEngine::Vector3 Field_5_4; // 0x38
		::System::Single Field_5_5; // 0x44
		::UnityEngine::Transform* Field_5_6; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKYBOXHORIZONADAPTER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKYBOXHORIZONADAPTER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKYBOXHORIZONADAPTER_UPDATE_OFFSET))(this);
		}
	};
}
