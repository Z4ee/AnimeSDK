#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SCENEOBJECTPLATMODELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CDF40)

inline static constexpr unsigned int SceneObjectPlatModelConfig_TypeDefinitionIndex = 70096;

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
