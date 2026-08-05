#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingMode.h"

#define MOLEMOLE_TIMELINE_CUTSCENEBEHAVIORFIX_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1F0DFA00)
#define MOLEMOLE_TIMELINE_CUTSCENEBEHAVIORFIX_RESOLVEAUTHOREDRAYTRACINGMODE_OFFSET UNITYSDK_OFFSET(0x1F0DFD10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CutsceneBehaviorFix_TypeDefinitionIndex = 32846;

	class CutsceneBehaviorFix : public ::System::Object
	{
	public:
		static ::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CUTSCENEBEHAVIORFIX_GET_ENABLED_OFFSET))();
		}

		static ::UnityEngine::Experimental::Rendering::RayTracingMode ResolveAuthoredRayTracingMode(::UnityEngine::Experimental::Rendering::RayTracingMode authored)
		{
			return ((::UnityEngine::Experimental::Rendering::RayTracingMode(*)(::UnityEngine::Experimental::Rendering::RayTracingMode))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CUTSCENEBEHAVIORFIX_RESOLVEAUTHOREDRAYTRACINGMODE_OFFSET))(authored);
		}
	};
}
