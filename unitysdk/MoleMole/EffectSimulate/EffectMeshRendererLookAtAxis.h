#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EffectMeshRendererLookAtAxis_Enum_3_7617917E7FC1AB4E.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERLOOKATAXIS_DOBILLBOARD_OFFSET UNITYSDK_OFFSET(0x16B751A0)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERLOOKATAXIS_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16B75150)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERLOOKATAXIS_START_OFFSET UNITYSDK_OFFSET(0x16B75110)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERLOOKATAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x16B754E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int EffectMeshRendererLookAtAxis_TypeDefinitionIndex = 62323;

	class EffectMeshRendererLookAtAxis : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single rotationAxis; // 0x18
		::MoleMole::EffectSimulate::EffectMeshRendererLookAtAxis_Enum_3_7617917E7FC1AB4E Stretched_lockAxis; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERLOOKATAXIS__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERLOOKATAXIS_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERLOOKATAXIS_LATEUPDATE_OFFSET))(this);
		}

		::System::Void DoBillboard(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERLOOKATAXIS_DOBILLBOARD_OFFSET))(this, a1);
		}
	};
}
