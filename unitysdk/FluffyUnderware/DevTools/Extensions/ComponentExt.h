#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_COMPONENTEXT_ADDCHILDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EA51E10)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_COMPONENTEXT_DUPLICATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EA51F00)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_COMPONENTEXT_STRIPCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1EA51B50)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int ComponentExt_TypeDefinitionIndex = 29008;

	class ComponentExt : public ::System::Object
	{
	public:
		static ::System::Void StripComponents(::UnityEngine::Component* c, ::Il2CppArray<::System::Type*>* toKeep)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_COMPONENTEXT_STRIPCOMPONENTS_OFFSET))(c, toKeep);
		}

		static ::UnityEngine::GameObject* AddChildGameObject(::UnityEngine::Component* c, ::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Component*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_COMPONENTEXT_ADDCHILDGAMEOBJECT_OFFSET))(c, name);
		}

		static ::UnityEngine::Component* DuplicateGameObject(::UnityEngine::Component* source, ::UnityEngine::Transform* newParent, ::System::Boolean keepPrefabConnection)
		{
			return ((::UnityEngine::Component*(*)(::UnityEngine::Component*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_COMPONENTEXT_DUPLICATEGAMEOBJECT_OFFSET))(source, newParent, keepPrefabConnection);
		}
	};
}
