#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1EE5E770)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x1EE5E6C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1EE5E710)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1EE5E740)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_GET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x1EE5E6E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_SET_OBJECT_OFFSET UNITYSDK_OFFSET(0x1EE5E6D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1EE5E730)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1EE5E760)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_SET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x1EE5E700)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EE5E8A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE5E880)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGGameObjectProperties_TypeDefinitionIndex = 39706;

	class CGGameObjectProperties : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* m_Object; // 0x10
		::UnityEngine::Vector3 m_Translation; // 0x18
		::UnityEngine::Vector3 m_Rotation; // 0x24
		::UnityEngine::Vector3 m_Scale; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES__CTOR_1_OFFSET))(this, gameObject);
		}

		::UnityEngine::GameObject* get_Object()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_GET_OBJECT_OFFSET))(this);
		}

		::System::Void set_Object(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_SET_OBJECT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Translation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_GET_TRANSLATION_OFFSET))(this);
		}

		::System::Void set_Translation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_SET_TRANSLATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Rotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_SET_SCALE_OFFSET))(this, value);
		}

		::UnityEngine::Matrix4x4 get_Matrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTPROPERTIES_GET_MATRIX_OFFSET))(this);
		}
	};
}
