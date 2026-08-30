#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Entitas::VisualDebugging::Unity { class DebugSystems; }

#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMSBEHAVIOUR_GET_SYSTEMS_OFFSET UNITYSDK_OFFSET(0x1EED27A0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMSBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0x1EED27B0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED27C0)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int DebugSystemsBehaviour_TypeDefinitionIndex = 10003;

	class DebugSystemsBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Entitas::VisualDebugging::Unity::DebugSystems* _systems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::Entitas::VisualDebugging::Unity::DebugSystems* get_systems()
		{
			return ((::Entitas::VisualDebugging::Unity::DebugSystems*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMSBEHAVIOUR_GET_SYSTEMS_OFFSET))(this);
		}

		::System::Void Init(::Entitas::VisualDebugging::Unity::DebugSystems* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::VisualDebugging::Unity::DebugSystems*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMSBEHAVIOUR_INIT_OFFSET))(this, a1);
		}
	};
}
