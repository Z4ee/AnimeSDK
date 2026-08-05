#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOEFFECTPLUGINKEEPINEYES_START_OFFSET UNITYSDK_OFFSET(0x12423EC0)
#define MONOEFFECTPLUGINKEEPINEYES_UPDATE_OFFSET UNITYSDK_OFFSET(0x12423F90)
#define MONOEFFECTPLUGINKEEPINEYES__CTOR_OFFSET UNITYSDK_OFFSET(0x12424320)

inline static constexpr unsigned int MonoEffectPluginKeepInEyes_TypeDefinitionIndex = 95420;

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
