#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DroneExplodeTargetRenderer_Enum_3_2F6E6B060CDCFABB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_DRONEEXPLODETARGETRENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18F4F170)
#define MOLEMOLE_DRONEEXPLODETARGETRENDERER_TRIGGERINTERACT_OFFSET UNITYSDK_OFFSET(0x18F4F120)
#define MOLEMOLE_DRONEEXPLODETARGETRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F4F1C0)

namespace MoleMole
{
	inline static constexpr unsigned int DroneExplodeTargetRenderer_TypeDefinitionIndex = 59807;

	class DroneExplodeTargetRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRONEEXPLODETARGETRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void TriggerInteract(::MoleMole::DroneExplodeTargetRenderer_Enum_3_2F6E6B060CDCFABB a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::DroneExplodeTargetRenderer_Enum_3_2F6E6B060CDCFABB))((::PBYTE)hIl2Cpp + MOLEMOLE_DRONEEXPLODETARGETRENDERER_TRIGGERINTERACT_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_DRONEEXPLODETARGETRENDERER_INITIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
