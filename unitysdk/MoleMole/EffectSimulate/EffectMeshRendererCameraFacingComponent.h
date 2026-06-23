#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EffectMeshRendererCameraFacingComponent_Enum_3_C22BFF379D4D53F4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERCAMERAFACINGCOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19112DA0)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERCAMERAFACINGCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19112C40)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERCAMERAFACINGCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19113670)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int EffectMeshRendererCameraFacingComponent_TypeDefinitionIndex = 50072;

	class EffectMeshRendererCameraFacingComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* targetCamera; // 0x18
		::MoleMole::EffectSimulate::EffectMeshRendererCameraFacingComponent_Enum_3_C22BFF379D4D53F4 axisToFaceCamera; // 0x20
		::System::Single additionalRollDegrees; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERCAMERAFACINGCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERCAMERAFACINGCOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERCAMERAFACINGCOMPONENT_LATEUPDATE_OFFSET))(this);
		}
	};
}
