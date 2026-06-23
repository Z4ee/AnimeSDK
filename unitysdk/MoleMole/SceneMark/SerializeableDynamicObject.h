#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

class MonoLevelDynamicObject;
namespace MoleMole { class SceneObjectStateWidget; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT_COPYFROMMONO_1_OFFSET UNITYSDK_OFFSET(0x1870CE90)
#define MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT_COPYFROMMONO_OFFSET UNITYSDK_OFFSET(0x1870CCF0)
#define MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT_GETOBJECTTAG_OFFSET UNITYSDK_OFFSET(0x1870D020)
#define MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x1870D080)
#define MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT_RESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1870D120)
#define MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1870D0C0)
#define MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1870CE80)
#define MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1870CCE0)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int SerializeableDynamicObject_TypeDefinitionIndex = 60552;

	class SerializeableDynamicObject : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* refGameObject; // 0x10
		::MoleMole::GameplayTag tag; // 0x18
		::System::Boolean defaultActive; // 0x28

		::System::Void _ctor(::MonoLevelDynamicObject* dynamicObject)
		{
			return ((::System::Void(*)(::PVOID, ::MonoLevelDynamicObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT__CTOR_OFFSET))(this, dynamicObject);
		}

		::System::Void _ctor_1(::MoleMole::SceneObjectStateWidget* dynamicObject)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT__CTOR_1_OFFSET))(this, dynamicObject);
		}

		::MoleMole::GameplayTag GetObjectTag()
		{
			return ((::MoleMole::GameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT_GETOBJECTTAG_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT_GETOBJECT_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT_SETACTIVE_OFFSET))(this, value);
		}

		::System::Void ResetActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT_RESETACTIVE_OFFSET))(this);
		}

		::System::Void CopyFromMono(::MonoLevelDynamicObject* dyobj)
		{
			return ((::System::Void(*)(::PVOID, ::MonoLevelDynamicObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT_COPYFROMMONO_OFFSET))(this, dyobj);
		}

		::System::Void CopyFromMono_1(::MoleMole::SceneObjectStateWidget* dyobj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SERIALIZEABLEDYNAMICOBJECT_COPYFROMMONO_1_OFFSET))(this, dyobj);
		}
	};
}
