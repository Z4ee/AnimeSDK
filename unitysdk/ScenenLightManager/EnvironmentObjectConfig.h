#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define SCENENLIGHTMANAGER_ENVIRONMENTOBJECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6BE40)

namespace ScenenLightManager
{
	inline static constexpr unsigned int EnvironmentObjectConfig_TypeDefinitionIndex = 47197;

	class EnvironmentObjectConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* hlod; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_ENVIRONMENTOBJECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
