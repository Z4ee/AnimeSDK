#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EffectMeshRendererBillboardComponent_Enum_3_59C412D4F0EDC7CB.h"
#include "unitysdk/MoleMole/EffectSimulate/EffectMeshRendererBillboardComponent_Enum_3_6074557807F3E335.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_DOBILLBOARD_OFFSET UNITYSDK_OFFSET(0x170F05F0)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x170F0280)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x170F0130)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONPOSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x170F03D0)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x170F0C30)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int EffectMeshRendererBillboardComponent_TypeDefinitionIndex = 75377;

	class EffectMeshRendererBillboardComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent_Enum_3_59C412D4F0EDC7CB billboardMode; // 0x18
		::System::Single rotZ; // 0x1C
		::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent_Enum_3_6074557807F3E335 Stretched_lockAxis; // 0x20
		::System::Single Stretched_angleOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnPostSimulationUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONPOSTSIMULATIONUPDATE_OFFSET))(this);
		}

		::System::Void DoBillboard(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_DOBILLBOARD_OFFSET))(this, a1);
		}
	};
}
