#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EffectMeshRendererBillboardComponent_Enum_3_59C412D4F0EDC7CB.h"
#include "unitysdk/MoleMole/EffectSimulate/EffectMeshRendererBillboardComponent_Enum_3_9CFC503A0B3454AC.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_DOBILLBOARD_OFFSET UNITYSDK_OFFSET(0x1497B650)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1497B430)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_START_OFFSET UNITYSDK_OFFSET(0x1497B3F0)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1497BC90)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int EffectMeshRendererBillboardComponent_TypeDefinitionIndex = 56401;

	class EffectMeshRendererBillboardComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent_Enum_3_59C412D4F0EDC7CB billboardMode; // 0x18
		::System::Single rotZ; // 0x1C
		::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent_Enum_3_9CFC503A0B3454AC Stretched_lockAxis; // 0x20
		::System::Single Stretched_angleOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void DoBillboard(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_DOBILLBOARD_OFFSET))(this, a1);
		}
	};
}
