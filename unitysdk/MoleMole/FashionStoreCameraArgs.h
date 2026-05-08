#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_FASHIONSTORECAMERAARGS_AWAKE_OFFSET UNITYSDK_OFFSET(0x18200FB0)
#define MOLEMOLE_FASHIONSTORECAMERAARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18200FF0)

namespace MoleMole
{
	inline static constexpr unsigned int FashionStoreCameraArgs_TypeDefinitionIndex = 73808;

	class FashionStoreCameraArgs : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* m_camera; // 0x18
		::UnityEngine::Vector3 m_minigamePos; // 0x20
		::UnityEngine::Vector3 m_minigameRot; // 0x2C
		::UnityEngine::GameObject* m_minigameRoot; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FASHIONSTORECAMERAARGS__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FASHIONSTORECAMERAARGS_AWAKE_OFFSET))(this);
		}
	};
}
