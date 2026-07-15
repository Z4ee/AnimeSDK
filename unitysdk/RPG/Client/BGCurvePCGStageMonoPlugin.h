#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_BGCURVEPCGSTAGEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x186827F0)

namespace RPG::Client
{
	inline static constexpr unsigned int BGCurvePCGStageMonoPlugin_TypeDefinitionIndex = 65698;

	class BGCurvePCGStageMonoPlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVEPCGSTAGEMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
