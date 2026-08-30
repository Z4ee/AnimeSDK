#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HoudiniEngineUnity { class HEU_PDGCookedEventData; }

#define HOUDINIENGINEUNITY_HEU_PDGCOOKEDDATAEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A773C0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGCookedDataEvent_TypeDefinitionIndex = 39233;

	class HEU_PDGCookedDataEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_PDGCookedEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGCOOKEDDATAEVENT__CTOR_OFFSET))(this);
		}
	};
}
