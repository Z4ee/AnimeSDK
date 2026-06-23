#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/MoleMole/SceneQualityLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SceneEffectQuality.h"

#define MOLEMOLE_SCENEQUALITYPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11651250)

namespace MoleMole
{
	inline static constexpr unsigned int SceneQualityProfileContext_TypeDefinitionIndex = 76024;

	class SceneQualityProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::MoleMole::SceneQualityLevel Quality; // 0x18
		::UnityEngine::Rendering::Universal::SceneEffectQuality SceneEffectQuality; // 0x1C
		::System::Single SceneEffectCullingDistance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEQUALITYPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
