#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSTAGEDOORROOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x13F16190)
#define MOLEMOLE_MONOSTAGEDOORROOT_GET_ROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x13F161E0)
#define MOLEMOLE_MONOSTAGEDOORROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x13F161F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageDoorRoot_TypeDefinitionIndex = 68015;

	class MonoStageDoorRoot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEDOORROOT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEDOORROOT_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_RootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEDOORROOT_GET_ROOTTRANSFORM_OFFSET))(this);
		}
	};
}
