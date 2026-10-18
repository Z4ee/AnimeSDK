#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOPERFORMANCECRPCAMERASMALLWINDOWUIMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xD84D0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPerformanceCRPCameraSmallWindowUIMarker_TypeDefinitionIndex = 60665;

	class MonoPerformanceCRPCameraSmallWindowUIMarker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCECRPCAMERASMALLWINDOWUIMARKER__CTOR_OFFSET))(this);
		}
	};
}
