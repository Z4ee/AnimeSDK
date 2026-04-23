#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define SRDEBUGGER_PROFILER_PROFILERLATEUPDATELISTENER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19E709C0)
#define SRDEBUGGER_PROFILER_PROFILERLATEUPDATELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E709D0)

namespace SRDebugger::Profiler
{
	inline static constexpr unsigned int ProfilerLateUpdateListener_TypeDefinitionIndex = 35458;

	class ProfilerLateUpdateListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* OnLateUpdate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERLATEUPDATELISTENER__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_PROFILERLATEUPDATELISTENER_LATEUPDATE_OFFSET))(this);
		}
	};
}
