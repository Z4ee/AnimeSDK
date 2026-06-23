#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CROWDMODULEMONOLISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11455550)
#define CROWDMODULEMONOLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x11455680)

inline static constexpr unsigned int CrowdModuleMonoListener_TypeDefinitionIndex = 85324;

class CrowdModuleMonoListener : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDMODULEMONOLISTENER__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDMODULEMONOLISTENER_UPDATE_OFFSET))(this);
	}
};
