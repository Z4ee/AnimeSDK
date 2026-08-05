#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_ENGINE_SUNSHADOWPVSCHECKER_UPDATE_OFFSET UNITYSDK_OFFSET(0x149D1800)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x149D1BD0)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int SunShadowPVSChecker_TypeDefinitionIndex = 54300;

	class SunShadowPVSChecker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 PVSIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSCHECKER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSCHECKER_UPDATE_OFFSET))(this);
		}
	};
}
