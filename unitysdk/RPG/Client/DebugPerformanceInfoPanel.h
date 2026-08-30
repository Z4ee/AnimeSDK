#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGPERFORMANCEINFOPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCC98870)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugPerformanceInfoPanel_TypeDefinitionIndex = 72663;

	class DebugPerformanceInfoPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPERFORMANCEINFOPANEL__CTOR_OFFSET))(this);
		}
	};
}
