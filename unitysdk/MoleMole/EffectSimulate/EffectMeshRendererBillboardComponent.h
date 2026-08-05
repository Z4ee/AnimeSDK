#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EffectMeshRendererBillboardComponent_Enum_3_59C412D4F0EDC7CB.h"
#include "unitysdk/MoleMole/EffectSimulate/EffectMeshRendererBillboardComponent_Enum_3_5AE65C5079D9615B.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_DOBILLBOARD_OFFSET UNITYSDK_OFFSET(0x1B51EC80)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B51E8C0)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B51E730)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONPOSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B51EA50)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51F2B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int EffectMeshRendererBillboardComponent_TypeDefinitionIndex = 79135;

	class EffectMeshRendererBillboardComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent_Enum_3_59C412D4F0EDC7CB billboardMode; // 0x18
		::System::Single rotZ; // 0x1C
		::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent_Enum_3_5AE65C5079D9615B Stretched_lockAxis; // 0x20
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
