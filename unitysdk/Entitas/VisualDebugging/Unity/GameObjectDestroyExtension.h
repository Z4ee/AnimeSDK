#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define ENTITAS_VISUALDEBUGGING_UNITY_GAMEOBJECTDESTROYEXTENSION_DESTROYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EED0110)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int GameObjectDestroyExtension_TypeDefinitionIndex = 10008;

	class GameObjectDestroyExtension : public ::System::Object
	{
	public:
		static ::System::Void DestroyGameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_GAMEOBJECTDESTROYEXTENSION_DESTROYGAMEOBJECT_OFFSET))(a1);
		}
	};
}
