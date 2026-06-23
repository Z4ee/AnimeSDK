#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Mesh; }

#define AUTOSHADOWPROXYHOST_START_OFFSET UNITYSDK_OFFSET(0x12DFD930)
#define AUTOSHADOWPROXYHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x12DFDA00)

inline static constexpr unsigned int AutoShadowProxyHost_TypeDefinitionIndex = 62327;

class AutoShadowProxyHost : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single shadowProxyQuality; // 0x18
	::UnityEngine::Mesh* customShadowProxy; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSHADOWPROXYHOST__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSHADOWPROXYHOST_START_OFFSET))(this);
	}
};
