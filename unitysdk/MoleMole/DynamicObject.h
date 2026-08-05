#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B4A64C8A35A4BC67.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_DYNAMICOBJECT_GETOBJECTTAG_OFFSET UNITYSDK_OFFSET(0x19D6F5C0)
#define MOLEMOLE_DYNAMICOBJECT_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x19D6F6D0)
#define MOLEMOLE_DYNAMICOBJECT_RESETACTIVE_OFFSET UNITYSDK_OFFSET(0x19D6F960)
#define MOLEMOLE_DYNAMICOBJECT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x19D6F720)
#define MOLEMOLE_DYNAMICOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6F9A0)

namespace MoleMole
{
	inline static constexpr unsigned int DynamicObject_TypeDefinitionIndex = 64401;

	class DynamicObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* objectNameId; // 0x18
		::Enum_3_B4A64C8A35A4BC67 dynamicObjectType; // 0x20
		::System::String* assetPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICOBJECT__CTOR_OFFSET))(this);
		}

		::MoleMole::GameplayTag GetObjectTag()
		{
			return ((::MoleMole::GameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICOBJECT_GETOBJECTTAG_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICOBJECT_GETOBJECT_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICOBJECT_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void ResetActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICOBJECT_RESETACTIVE_OFFSET))(this);
		}
	};
}
