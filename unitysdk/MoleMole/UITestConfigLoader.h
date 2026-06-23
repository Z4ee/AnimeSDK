#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UITESTCONFIGLOADER_AWAKE_OFFSET UNITYSDK_OFFSET(0x157C37D0)
#define MOLEMOLE_UITESTCONFIGLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x157C3810)

namespace MoleMole
{
	inline static constexpr unsigned int UITestConfigLoader_TypeDefinitionIndex = 65506;

	class UITestConfigLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTCONFIGLOADER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTCONFIGLOADER_AWAKE_OFFSET))(this);
		}
	};
}
