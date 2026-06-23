#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1DC88D50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1DC88E00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1DC88BB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1DC88DA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1DC88DD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_GET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x1DC88D70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1DC890C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1DC88D60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_SET_MESH_OFFSET UNITYSDK_OFFSET(0x1DC88BC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1DC88DC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1DC88DF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_SET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x1DC88D90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC88F60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC88F10)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGMeshProperties_TypeDefinitionIndex = 38818;

	class CGMeshProperties : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* m_Mesh; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* m_Material; // 0x18
		::UnityEngine::Vector3 m_Translation; // 0x20
		::UnityEngine::Vector3 m_Rotation; // 0x2C
		::UnityEngine::Vector3 m_Scale; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES__CTOR_1_OFFSET))(this, mesh);
		}

		::UnityEngine::Mesh* get_Mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_GET_MESH_OFFSET))(this);
		}

		::System::Void set_Mesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_SET_MESH_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_Material()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_Material(::Il2CppArray<::UnityEngine::Material*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_SET_MATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Translation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_GET_TRANSLATION_OFFSET))(this);
		}

		::System::Void set_Translation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_SET_TRANSLATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Rotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_SET_SCALE_OFFSET))(this, value);
		}

		::UnityEngine::Matrix4x4 get_Matrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_GET_MATRIX_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHPROPERTIES_ONVALIDATE_OFFSET))(this);
		}
	};
}
