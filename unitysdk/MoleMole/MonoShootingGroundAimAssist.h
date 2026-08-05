#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOSHOOTINGGROUNDAIMASSIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x179180E0)
#define MOLEMOLE_MONOSHOOTINGGROUNDAIMASSIST_UPDATE_OFFSET UNITYSDK_OFFSET(0x179184C0)
#define MOLEMOLE_MONOSHOOTINGGROUNDAIMASSIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17918600)

namespace MoleMole
{
	inline static constexpr unsigned int MonoShootingGroundAimAssist_TypeDefinitionIndex = 65266;

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
