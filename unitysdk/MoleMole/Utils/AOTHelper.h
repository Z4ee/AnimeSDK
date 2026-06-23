#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define MOLEMOLE_UTILS_AOTHELPER_AWAKE_OFFSET UNITYSDK_OFFSET(0x115A1750)
#define MOLEMOLE_UTILS_AOTHELPER_ENSURECAMERACONTROLLER_OFFSET UNITYSDK_OFFSET(0x115A17C0)
#define MOLEMOLE_UTILS_AOTHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x115A1800)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int AOTHelper_TypeDefinitionIndex = 86945;

	class AOTHelper : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AOTHELPER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AOTHELPER_AWAKE_OFFSET))(this);
		}

		static ::System::Void EnsureCameraController()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AOTHELPER_ENSURECAMERACONTROLLER_OFFSET))();
		}
	};
}
