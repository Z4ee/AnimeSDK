#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Lumi/GeometryLibrary/Scripts/EMeshDataSource.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Lumi::GeometryLibrary::Scripts { class DynamicMeshComponent_Class_3_FA9425483BAC14EE; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_DYNAMICMESHDATA_OFFSET UNITYSDK_OFFSET(0xA65D4B0)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_ISFBX_OFFSET UNITYSDK_OFFSET(0xA65D520)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_MESHDATASOURCE_OFFSET UNITYSDK_OFFSET(0xA65D4F0)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_MESHGUID_OFFSET UNITYSDK_OFFSET(0xA65D400)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_MESHPATH_OFFSET UNITYSDK_OFFSET(0xA65D510)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA65D420)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0xA65D360)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_TEXTUREDATA_OFFSET UNITYSDK_OFFSET(0xA65D4D0)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_WELDEDGES_OFFSET UNITYSDK_OFFSET(0xA65D550)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SETSHAREDMESHONLY_OFFSET UNITYSDK_OFFSET(0xA65D4A0)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SET_DYNAMICMESHDATA_OFFSET UNITYSDK_OFFSET(0xA65D4C0)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SET_MESHDATASOURCE_OFFSET UNITYSDK_OFFSET(0xA65D500)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SET_MESHGUID_OFFSET UNITYSDK_OFFSET(0xA65D410)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0xA65D370)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SET_TEXTUREDATA_OFFSET UNITYSDK_OFFSET(0xA65D4E0)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SET_WELDEDGES_OFFSET UNITYSDK_OFFSET(0xA65D560)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_START_OFFSET UNITYSDK_OFFSET(0xA65D570)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xA65D580)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA65D590)

namespace Lumi::GeometryLibrary::Scripts
{
	inline static constexpr unsigned int DynamicMeshComponent_TypeDefinitionIndex = 45019;

	class DynamicMeshComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Lumi::GeometryLibrary::Scripts::DynamicMeshComponent_Class_3_FA9425483BAC14EE** StaticGet_OnInstantiateWithDynamicMeshDataDelegate()
		{
			return (::Lumi::GeometryLibrary::Scripts::DynamicMeshComponent_Class_3_FA9425483BAC14EE**)Il2CppClass::FromTypeDefinitionIndex(DynamicMeshComponent_TypeDefinitionIndex)->GetStaticField(0x6AF90);
		}
		::UnityEngine::Mesh* _SharedMesh; // 0x18
		::System::String* _MeshGUID; // 0x20
		::Il2CppArray<::System::Byte>* _DynamicMeshData; // 0x28
		::Il2CppArray<::System::Byte>* _TextureData; // 0x30
		::Lumi::GeometryLibrary::Scripts::EMeshDataSource _MeshDataSource; // 0x38
		::System::Boolean _WeldEdges; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_sharedMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_SHAREDMESH_OFFSET))(this);
		}

		::System::Void set_sharedMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SET_SHAREDMESH_OFFSET))(this, a1);
		}

		::System::String* get_MeshGUID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_MESHGUID_OFFSET))(this);
		}

		::System::Void set_MeshGUID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SET_MESHGUID_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_sharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_SHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void setSharedMeshOnly(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SETSHAREDMESHONLY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_dynamicMeshData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_DYNAMICMESHDATA_OFFSET))(this);
		}

		::System::Void set_dynamicMeshData(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SET_DYNAMICMESHDATA_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_textureData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_TEXTUREDATA_OFFSET))(this);
		}

		::System::Void set_textureData(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SET_TEXTUREDATA_OFFSET))(this, a1);
		}

		::Lumi::GeometryLibrary::Scripts::EMeshDataSource get_meshDataSource()
		{
			return ((::Lumi::GeometryLibrary::Scripts::EMeshDataSource(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_MESHDATASOURCE_OFFSET))(this);
		}

		::System::Void set_meshDataSource(::Lumi::GeometryLibrary::Scripts::EMeshDataSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::Lumi::GeometryLibrary::Scripts::EMeshDataSource))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SET_MESHDATASOURCE_OFFSET))(this, a1);
		}

		::System::String* get_meshPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_MESHPATH_OFFSET))(this);
		}

		::System::Boolean get_IsFBX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_ISFBX_OFFSET))(this);
		}

		::System::Boolean get_WeldEdges()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_GET_WELDEDGES_OFFSET))(this);
		}

		::System::Void set_WeldEdges(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_SET_WELDEDGES_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_UPDATE_OFFSET))(this);
		}
	};
}
