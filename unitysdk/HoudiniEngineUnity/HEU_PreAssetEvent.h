#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace HoudiniEngineUnity { class HEU_PreAssetEventData; }

#define HOUDINIENGINEUNITY_HEU_PREASSETEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B479BE0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PreAssetEvent_TypeDefinitionIndex = 39067;

	class HEU_PreAssetEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_PreAssetEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PREASSETEVENT__CTOR_OFFSET))(this);
		}
	};
}
