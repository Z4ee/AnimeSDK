#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SKYBOXHORIZONADAPTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x196D5680)
#define RPG_CLIENT_SKYBOXHORIZONADAPTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x196D5720)
#define RPG_CLIENT_SKYBOXHORIZONADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x196D5A60)

namespace RPG::Client
{
	inline static constexpr unsigned int SkyBoxHorizonAdapter_TypeDefinitionIndex = 72907;

	class SkyBoxHorizonAdapter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean UseUI3DCamera; // 0x18
		::UnityEngine::Transform* CameraTrans; // 0x20
		::System::Single Angle; // 0x28
		::UnityEngine::Vector3 AFMHBENIEPG; // 0x2C
		::UnityEngine::Vector3 DMDOLNFFHAF; // 0x38
		::System::Single ENCHFAKMAGA; // 0x44
		::UnityEngine::Transform* ILPDLGIJMNN; // 0x48

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
