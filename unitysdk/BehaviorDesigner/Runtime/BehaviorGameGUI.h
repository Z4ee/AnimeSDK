#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace BehaviorDesigner::Runtime { class BehaviorManager; }
namespace UnityEngine { class Camera; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORGAMEGUI_ONGUI_OFFSET UNITYSDK_OFFSET(0x1C1B5980)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORGAMEGUI_START_OFFSET UNITYSDK_OFFSET(0x1C1B5930)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORGAMEGUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B6230)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorGameGUI_TypeDefinitionIndex = 31665;

	class BehaviorGameGUI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BehaviorDesigner::Runtime::BehaviorManager* behaviorManager; // 0x18
		::UnityEngine::Camera* mainCamera; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORGAMEGUI__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORGAMEGUI_START_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORGAMEGUI_ONGUI_OFFSET))(this);
		}
	};
}
