#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_WALKBAKEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A322390)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCPedestrianGPUAssetConfig_WalkBakedData_TypeDefinitionIndex = 69204;

	class NPCPedestrianGPUAssetConfig_WalkBakedData : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* Walk1Curve; // 0x10
		::UnityEngine::AnimationCurve* Walk2Curve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_WALKBAKEDDATA__CTOR_OFFSET))(this);
		}
	};
}
