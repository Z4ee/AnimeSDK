#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HoudiniEngineUnity { class HEU_BakedEventData; }

#define HOUDINIENGINEUNITY_HEU_BAKEDDATAEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17EADDB0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_BakedDataEvent_TypeDefinitionIndex = 37399;

	class HEU_BakedDataEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_BakedEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BAKEDDATAEVENT__CTOR_OFFSET))(this);
		}
	};
}
