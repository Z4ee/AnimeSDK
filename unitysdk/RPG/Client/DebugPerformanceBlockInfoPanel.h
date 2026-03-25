#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGPERFORMANCEBLOCKINFOPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x9448EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugPerformanceBlockInfoPanel_TypeDefinitionIndex = 59611;

	class DebugPerformanceBlockInfoPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPERFORMANCEBLOCKINFOPANEL__CTOR_OFFSET))(this);
		}
	};
}
