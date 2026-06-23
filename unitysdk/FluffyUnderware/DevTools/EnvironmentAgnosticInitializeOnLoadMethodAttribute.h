#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/RuntimeInitializeLoadType.h"
#include "unitysdk/UnityEngine/RuntimeInitializeOnLoadMethodAttribute.h"

#define FLUFFYUNDERWARE_DEVTOOLS_ENVIRONMENTAGNOSTICINITIALIZEONLOADMETHODATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6984D0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int EnvironmentAgnosticInitializeOnLoadMethodAttribute_TypeDefinitionIndex = 28343;

	class EnvironmentAgnosticInitializeOnLoadMethodAttribute : public ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute
	{
	public:
		::System::Void _ctor(::UnityEngine::RuntimeInitializeLoadType loadType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeInitializeLoadType))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_ENVIRONMENTAGNOSTICINITIALIZEONLOADMETHODATTRIBUTE__CTOR_OFFSET))(this, loadType);
		}
	};
}
