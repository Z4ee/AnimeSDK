#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_DYNAMICOBJECTCOLLECTOR_GAMEOBJECTKEYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x160EB0A0)

namespace MoleMole::SceneMark::DynamicObject
{
	inline static constexpr unsigned int DynamicObjectCollector_GameObjectKeyValue_TypeDefinitionIndex = 81929;

	class DynamicObjectCollector_GameObjectKeyValue : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::UnityEngine::GameObject* value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICOBJECT_DYNAMICOBJECTCOLLECTOR_GAMEOBJECTKEYVALUE__CTOR_OFFSET))(this);
		}
	};
}
