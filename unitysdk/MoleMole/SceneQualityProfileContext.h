#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/MoleMole/SceneQualityLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SceneEffectQuality.h"

#define MOLEMOLE_SCENEQUALITYPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11D656C0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneQualityProfileContext_TypeDefinitionIndex = 83825;

	class SceneQualityProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::UnityEngine::Rendering::Universal::SceneEffectQuality SceneEffectQuality; // 0x18
		::System::Single SceneEffectCullingDistance; // 0x1C
		::MoleMole::SceneQualityLevel Quality; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEQUALITYPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
