#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGCLOUDINFOPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCC96C50)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugCloudInfoPanel_TypeDefinitionIndex = 72658;

	class DebugCloudInfoPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGCLOUDINFOPANEL__CTOR_OFFSET))(this);
		}
	};
}
