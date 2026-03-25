#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HoudiniEngineUnity { class HEU_ReloadEventData; }

#define HOUDINIENGINEUNITY_HEU_RELOADDATAEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x848B6C0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ReloadDataEvent_TypeDefinitionIndex = 37596;

	class HEU_ReloadDataEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_ReloadEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RELOADDATAEVENT__CTOR_OFFSET))(this);
		}
	};
}
