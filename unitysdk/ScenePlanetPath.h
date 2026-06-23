#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class ScenePlanetPath_SinglePath;

#define SCENEPLANETPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C140E60)

inline static constexpr unsigned int ScenePlanetPath_TypeDefinitionIndex = 26430;

class ScenePlanetPath : public ::UnityEngine::MonoBehaviour
{
public:
	::ScenePlanetPath_SinglePath* moonPath; // 0x18
	::ScenePlanetPath_SinglePath* sunPath; // 0x20
	::System::Single radius; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEPLANETPATH__CTOR_OFFSET))(this);
	}
};
