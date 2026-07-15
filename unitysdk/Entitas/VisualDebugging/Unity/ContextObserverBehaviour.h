#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Entitas::VisualDebugging::Unity { class ContextObserver; }

#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVERBEHAVIOUR_GET_CONTEXTOBSERVER_OFFSET UNITYSDK_OFFSET(0x1D1CFC20)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVERBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0x1D1CEC60)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVERBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D1CFD00)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVERBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D1CFC30)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CFD90)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int ContextObserverBehaviour_TypeDefinitionIndex = 9720;

	class ContextObserverBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Entitas::VisualDebugging::Unity::ContextObserver* _contextObserver; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::Entitas::VisualDebugging::Unity::ContextObserver* get_contextObserver()
		{
			return ((::Entitas::VisualDebugging::Unity::ContextObserver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVERBEHAVIOUR_GET_CONTEXTOBSERVER_OFFSET))(this);
		}

		::System::Void Init(::Entitas::VisualDebugging::Unity::ContextObserver* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::VisualDebugging::Unity::ContextObserver*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVERBEHAVIOUR_INIT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVERBEHAVIOUR_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVERBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}
	};
}
