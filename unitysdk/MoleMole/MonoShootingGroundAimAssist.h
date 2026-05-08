#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOSHOOTINGGROUNDAIMASSIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x10BD4820)
#define MOLEMOLE_MONOSHOOTINGGROUNDAIMASSIST_UPDATE_OFFSET UNITYSDK_OFFSET(0x10BD4C10)
#define MOLEMOLE_MONOSHOOTINGGROUNDAIMASSIST__CTOR_OFFSET UNITYSDK_OFFSET(0x10BD4D50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoShootingGroundAimAssist_TypeDefinitionIndex = 54988;

	class MonoShootingGroundAimAssist : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGGROUNDAIMASSIST__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGGROUNDAIMASSIST_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGGROUNDAIMASSIST_UPDATE_OFFSET))(this);
		}
	};
}
