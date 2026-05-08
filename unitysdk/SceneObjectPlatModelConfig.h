#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SCENEOBJECTPLATMODELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC5550)

inline static constexpr unsigned int SceneObjectPlatModelConfig_TypeDefinitionIndex = 45574;

class SceneObjectPlatModelConfig : public ::System::Object
{
public:
	::System::Single FadeInTime; // 0x10
	::System::Single FadeOutTime; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTPLATMODELCONFIG__CTOR_OFFSET))(this);
	}
};
