#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int DebugTriggerImpl___O_TypeDefinitionIndex = 37385;

	class DebugTriggerImpl___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>** StaticGet__0___OnActiveSceneChanged()
		{
			return (::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>**)Il2CppClass::FromTypeDefinitionIndex(DebugTriggerImpl___O_TypeDefinitionIndex)->GetStaticField(0x46850);
		}
	};
}
