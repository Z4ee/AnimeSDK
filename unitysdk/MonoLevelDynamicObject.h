#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8AEDFD848EEC981C_1.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MONOLEVELDYNAMICOBJECT_GETNAVMESHMARKTYPE_OFFSET UNITYSDK_OFFSET(0x162F9930)
#define MONOLEVELDYNAMICOBJECT_GETOBJECTTAG_OFFSET UNITYSDK_OFFSET(0x162F9500)
#define MONOLEVELDYNAMICOBJECT_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x162F9650)
#define MONOLEVELDYNAMICOBJECT_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x162F9970)
#define MONOLEVELDYNAMICOBJECT_RESETACTIVE_OFFSET UNITYSDK_OFFSET(0x162F98E0)
#define MONOLEVELDYNAMICOBJECT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x162F96A0)
#define MONOLEVELDYNAMICOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x162F99C0)

inline static constexpr unsigned int MonoLevelDynamicObject_TypeDefinitionIndex = 83942;

class MonoLevelDynamicObject : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* DynamicObjectName; // 0x18
	::Enum_3_8AEDFD848EEC981C_1 NavmeshType; // 0x20
	::System::Boolean DefaultActiveState; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT__CTOR_OFFSET))(this);
	}

	::MoleMole::GameplayTag GetObjectTag()
	{
		return ((::MoleMole::GameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT_GETOBJECTTAG_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT_GETOBJECT_OFFSET))(this);
	}

	::System::Void SetActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT_SETACTIVE_OFFSET))(this, value);
	}

	::System::Void ResetActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT_RESETACTIVE_OFFSET))(this);
	}

	::Enum_3_8AEDFD848EEC981C_1 GetNavmeshMarkType()
	{
		return ((::Enum_3_8AEDFD848EEC981C_1(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT_GETNAVMESHMARKTYPE_OFFSET))(this);
	}

	::UnityEngine::Transform* GetTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT_GETTRANSFORM_OFFSET))(this);
	}
};
