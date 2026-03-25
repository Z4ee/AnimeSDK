#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOCONVINCEDOUBLESCREENANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9C1E8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoConvinceDoubleScreenAnchor_TypeDefinitionIndex = 49166;

	class MonoConvinceDoubleScreenAnchor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* LeftActor; // 0x18
		::UnityEngine::Transform* LeftCam; // 0x20
		::UnityEngine::Transform* RightActor; // 0x28
		::UnityEngine::Transform* RightCam; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONVINCEDOUBLESCREENANCHOR__CTOR_OFFSET))(this);
		}
	};
}
