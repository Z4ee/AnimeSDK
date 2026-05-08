#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_COMBINEMESHFILTERS_OFFSET UNITYSDK_OFFSET(0x1C3189C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_GET_CENTERMESH_OFFSET UNITYSDK_OFFSET(0x1C3178A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_GET_USECHILDRENMESHES_OFFSET UNITYSDK_OFFSET(0x1C317850)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C317960)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_RESET_OFFSET UNITYSDK_OFFSET(0x1C3178F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_SET_CENTERMESH_OFFSET UNITYSDK_OFFSET(0x1C3178B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_SET_USECHILDRENMESHES_OFFSET UNITYSDK_OFFSET(0x1C317860)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C319770)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int GameObjectToMesh_TypeDefinitionIndex = 37414;

	class GameObjectToMesh : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InGameObjects; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutVMesh; // 0xC0
		::System::Boolean useChildrenMeshes; // 0xC8
		::System::Boolean centerMesh; // 0xC9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseChildrenMeshes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_GET_USECHILDRENMESHES_OFFSET))(this);
		}

		::System::Void set_UseChildrenMeshes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_SET_USECHILDRENMESHES_OFFSET))(this, value);
		}

		::System::Boolean get_CenterMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_GET_CENTERMESH_OFFSET))(this);
		}

		::System::Void set_CenterMesh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_SET_CENTERMESH_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_REFRESH_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* CombineMeshFilters(::Il2CppArray<::UnityEngine::MeshFilter*>* meshFilters, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& materials, ::UnityEngine::Matrix4x4 originTrs, ::System::Collections::Generic::List_1<::System::String*>* errorMessages)
		{
			return ((::UnityEngine::Mesh*(*)(::Il2CppArray<::UnityEngine::MeshFilter*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*&, ::UnityEngine::Matrix4x4, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_GAMEOBJECTTOMESH_COMBINEMESHFILTERS_OFFSET))(meshFilters, materials, originTrs, errorMessages);
		}
	};
}
