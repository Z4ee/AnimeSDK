#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOUICAMERA_AWAKE_OFFSET UNITYSDK_OFFSET(0x18091DF0)
#define MOLEMOLE_MONOUICAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18091EF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUICamera_TypeDefinitionIndex = 59790;

	class MonoUICamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean autoSetCameraClearFlag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICAMERA_AWAKE_OFFSET))(this);
		}
	};
}
