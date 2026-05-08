#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PlanarReflectionCubeManager_NativeSRP.h"

#define PLANARREFLECTIONCUBEMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B35FCE0)
#define PLANARREFLECTIONCUBEMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B35FC00)
#define PLANARREFLECTIONCUBEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B35FDC0)

inline static constexpr unsigned int PlanarReflectionCubeManager_TypeDefinitionIndex = 29479;

class PlanarReflectionCubeManager : public ::UnityEngine::NAPRenderPipeline0::PlanarReflectionCubeManager_NativeSRP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONCUBEMANAGER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONCUBEMANAGER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONCUBEMANAGER_ONDISABLE_OFFSET))(this);
	}
};
