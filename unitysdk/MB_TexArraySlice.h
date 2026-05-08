#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB_TexArraySliceRendererMatPair;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define MB_TEXARRAYSLICE_CONTAINSMATERIALANDMESH_OFFSET UNITYSDK_OFFSET(0x1BB04330)
#define MB_TEXARRAYSLICE_CONTAINSMATERIAL_OFFSET UNITYSDK_OFFSET(0x1BB040D0)
#define MB_TEXARRAYSLICE_GETALLUSEDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1BB04480)
#define MB_TEXARRAYSLICE_GETALLUSEDRENDERERS_OFFSET UNITYSDK_OFFSET(0x1BB04550)
#define MB_TEXARRAYSLICE_GETDISTINCTMATERIALS_OFFSET UNITYSDK_OFFSET(0x1BB041A0)
#define MB_TEXARRAYSLICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB04660)

inline static constexpr unsigned int MB_TexArraySlice_TypeDefinitionIndex = 84948;

class MB_TexArraySlice : public ::System::Object
{
public:
	::System::Boolean considerMeshUVs; // 0x10
	::System::Collections::Generic::List_1<::MB_TexArraySliceRendererMatPair*>* sourceMaterials; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_TEXARRAYSLICE__CTOR_OFFSET))(this);
	}

	::System::Boolean ContainsMaterial(::UnityEngine::Material* mat)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MB_TEXARRAYSLICE_CONTAINSMATERIAL_OFFSET))(this, mat);
	}

	::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>* GetDistinctMaterials()
	{
		return ((::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_TEXARRAYSLICE_GETDISTINCTMATERIALS_OFFSET))(this);
	}

	::System::Boolean ContainsMaterialAndMesh(::UnityEngine::Material* mat, ::UnityEngine::Mesh* mesh)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + MB_TEXARRAYSLICE_CONTAINSMATERIALANDMESH_OFFSET))(this, mat, mesh);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Material*>* GetAllUsedMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* usedMats)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MB_TEXARRAYSLICE_GETALLUSEDMATERIALS_OFFSET))(this, usedMats);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetAllUsedRenderers(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* allObjsFromTextureBaker)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MB_TEXARRAYSLICE_GETALLUSEDRENDERERS_OFFSET))(this, allObjsFromTextureBaker);
	}
};
