#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GAMEOBJECTEXT_DUPLICATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EA52A10)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GAMEOBJECTEXT_STRIPCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1EA51C80)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GAMEOBJECTEXT_UNDOABLECREATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EA52C50)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int GameObjectExt_TypeDefinitionIndex = 29007;

	class GameObjectExt : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* DuplicateGameObject(::UnityEngine::GameObject* source, ::UnityEngine::Transform* newParent, ::System::Boolean keepPrefabReference)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GAMEOBJECTEXT_DUPLICATEGAMEOBJECT_OFFSET))(source, newParent, keepPrefabReference);
		}

		static ::System::Void StripComponents(::UnityEngine::GameObject* go, ::Il2CppArray<::System::Type*>* toKeep)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GAMEOBJECTEXT_STRIPCOMPONENTS_OFFSET))(go, toKeep);
		}

		static ::UnityEngine::GameObject* UndoableCreateGameObject(::System::String* name, ::Il2CppArray<::System::Type*>* components)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GAMEOBJECTEXT_UNDOABLECREATEGAMEOBJECT_OFFSET))(name, components);
		}
	};
}
