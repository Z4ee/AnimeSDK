#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HoudiniEngineUnity { class HEU_CookedEventData; }

#define HOUDINIENGINEUNITY_HEU_COOKEDDATAEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB5AE0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_CookedDataEvent_TypeDefinitionIndex = 37398;

	class HEU_CookedDataEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_CookedEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKEDDATAEVENT__CTOR_OFFSET))(this);
		}
	};
}
