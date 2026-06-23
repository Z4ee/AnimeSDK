#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOEFFECTPLUGINKEEPINEYES_START_OFFSET UNITYSDK_OFFSET(0x11A67B90)
#define MONOEFFECTPLUGINKEEPINEYES_UPDATE_OFFSET UNITYSDK_OFFSET(0x11A67C60)
#define MONOEFFECTPLUGINKEEPINEYES__CTOR_OFFSET UNITYSDK_OFFSET(0x11A67FE0)

inline static constexpr unsigned int MonoEffectPluginKeepInEyes_TypeDefinitionIndex = 91464;

class MonoEffectPluginKeepInEyes : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPLUGINKEEPINEYES__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPLUGINKEEPINEYES_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPLUGINKEEPINEYES_UPDATE_OFFSET))(this);
	}
};
