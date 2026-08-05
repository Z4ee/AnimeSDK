#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGBounds.h"
#include "unitysdk/FluffyUnderware/DevTools/IntRegion.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace FluffyUnderware::Curvy::Generator { class CGMeshProperties; }
namespace FluffyUnderware::Curvy::Generator { class CGVSubMesh; }
namespace FluffyUnderware::Curvy::Generator { class CGVolume; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_ADDSUBMESH_OFFSET UNITYSDK_OFFSET(0x1F285880)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_ASMESH_OFFSET UNITYSDK_OFFSET(0x1F287940)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_CLEARCACHEDSORTEDVERTEXINDICES_OFFSET UNITYSDK_OFFSET(0x1F288060)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F284C80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GETCACHEDSORTEDVERTEXINDICES_OFFSET UNITYSDK_OFFSET(0x1F288270)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GETMATERIALSUBMESH_OFFSET UNITYSDK_OFFSET(0x1F286320)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GETMATERIALS_OFFSET UNITYSDK_OFFSET(0x1F287BE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_1_OFFSET UNITYSDK_OFFSET(0x1F285230)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_2_OFFSET UNITYSDK_OFFSET(0x1F285270)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F2831A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_HASNORMALS_OFFSET UNITYSDK_OFFSET(0x1F2831D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_HASPARTIALNORMALS_OFFSET UNITYSDK_OFFSET(0x1F2831E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_HASPARTIALTANGENTS_OFFSET UNITYSDK_OFFSET(0x1F283210)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_HASTANGENTS_OFFSET UNITYSDK_OFFSET(0x1F283200)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_HASUV2_OFFSET UNITYSDK_OFFSET(0x1F2831C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_HASUV_OFFSET UNITYSDK_OFFSET(0x1F2831B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_NORMALSLIST_OFFSET UNITYSDK_OFFSET(0x1F2826C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_NORMALS_OFFSET UNITYSDK_OFFSET(0x1F282E20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_OFFSET UNITYSDK_OFFSET(0x1F2851D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_TANGENTSLIST_OFFSET UNITYSDK_OFFSET(0x1F2827D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x1F282FE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_TRIANGLECOUNT_OFFSET UNITYSDK_OFFSET(0x1F283230)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_UV2S_OFFSET UNITYSDK_OFFSET(0x1F2825B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_UV2_OFFSET UNITYSDK_OFFSET(0x1F282C60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_UVS_OFFSET UNITYSDK_OFFSET(0x1F282490)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_UV_OFFSET UNITYSDK_OFFSET(0x1F282AA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_VERTEX_OFFSET UNITYSDK_OFFSET(0x1F2828E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1F282360)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_MERGEUVSNORMALSANDTANGENTS_OFFSET UNITYSDK_OFFSET(0x1F285CE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_MERGEVMESHES_OFFSET UNITYSDK_OFFSET(0x1F286490)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_MERGEVMESH_1_OFFSET UNITYSDK_OFFSET(0x1F285920)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_MERGEVMESH_OFFSET UNITYSDK_OFFSET(0x1F2858D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_ONVERTICESCHANGED_OFFSET UNITYSDK_OFFSET(0x1F288050)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_RECALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F287D70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_RECALCULATEUV2_OFFSET UNITYSDK_OFFSET(0x1F287F30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SETSUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1F285830)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_HASPARTIALNORMALS_OFFSET UNITYSDK_OFFSET(0x1F2831F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_HASPARTIALTANGENTS_OFFSET UNITYSDK_OFFSET(0x1F283220)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_NORMALSLIST_OFFSET UNITYSDK_OFFSET(0x1F2826D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_NORMALS_OFFSET UNITYSDK_OFFSET(0x1F282F50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_TANGENTSLIST_OFFSET UNITYSDK_OFFSET(0x1F2827E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x1F283110)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_UV2S_OFFSET UNITYSDK_OFFSET(0x1F2825C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_UV2_OFFSET UNITYSDK_OFFSET(0x1F282D90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_UVS_OFFSET UNITYSDK_OFFSET(0x1F2824A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_UV_OFFSET UNITYSDK_OFFSET(0x1F282BD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_VERTEX_OFFSET UNITYSDK_OFFSET(0x1F282A10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1F282370)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_TOMESH_OFFSET UNITYSDK_OFFSET(0x1F2879E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_TRS_OFFSET UNITYSDK_OFFSET(0x1F2849E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2832D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F283AD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F283B30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1F283BE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1F284260)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1F2843B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2832A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__MERGEVMESHES_G__PROCESSTRIANGLEARRAYS_74_0_OFFSET UNITYSDK_OFFSET(0x1F2877B0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGVMesh_TypeDefinitionIndex = 39590;

	class CGVMesh : public ::FluffyUnderware::Curvy::Generator::CGBounds
	{
	public:
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector4> tangents; // 0x40
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> vertices; // 0x50
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2> uv2s; // 0x60
		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGVSubMesh*>* SubMeshes; // 0x70
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> normals; // 0x78
		::System::Object* vertexIndicesLock; // 0x88
		::System::Nullable_1<::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>> sortedVertexIndices; // 0x90
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2> uvs; // 0xA8
		::System::Boolean hasPartialNormals; // 0xB8
		::System::Boolean hasPartialTangents; // 0xB9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 vertexCount, ::System::Boolean addUV, ::System::Boolean addUV2, ::System::Boolean addNormals, ::System::Boolean addTangents)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_1_OFFSET))(this, vertexCount, addUV, addUV2, addNormals, addTangents);
		}

		::System::Void _ctor_2(::FluffyUnderware::Curvy::Generator::CGVolume* volume)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVolume*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_2_OFFSET))(this, volume);
		}

		::System::Void _ctor_3(::FluffyUnderware::Curvy::Generator::CGVolume* volume, ::FluffyUnderware::DevTools::IntRegion subset)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVolume*, ::FluffyUnderware::DevTools::IntRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_3_OFFSET))(this, volume, subset);
		}

		::System::Void _ctor_4(::FluffyUnderware::Curvy::Generator::CGVMesh* source)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVMesh*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_4_OFFSET))(this, source);
		}

		::System::Void _ctor_5(::FluffyUnderware::Curvy::Generator::CGMeshProperties* meshProperties)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGMeshProperties*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_5_OFFSET))(this, meshProperties);
		}

		::System::Void _ctor_6(::UnityEngine::Mesh* source, ::Il2CppArray<::UnityEngine::Material*>* materials, ::UnityEngine::Matrix4x4 trsMatrix)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Material*>*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__CTOR_6_OFFSET))(this, source, materials, trsMatrix);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> get_Vertices()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_VERTICES_OFFSET))(this);
		}

		::System::Void set_Vertices(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_VERTICES_OFFSET))(this, value);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2> get_UVs()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_UVS_OFFSET))(this);
		}

		::System::Void set_UVs(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_UVS_OFFSET))(this, value);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2> get_UV2s()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_UV2S_OFFSET))(this);
		}

		::System::Void set_UV2s(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_UV2S_OFFSET))(this, value);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> get_NormalsList()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_NORMALSLIST_OFFSET))(this);
		}

		::System::Void set_NormalsList(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_NORMALSLIST_OFFSET))(this, value);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector4> get_TangentsList()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector4>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_TANGENTSLIST_OFFSET))(this);
		}

		::System::Void set_TangentsList(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector4> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector4>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_TANGENTSLIST_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_Vertex()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_VERTEX_OFFSET))(this);
		}

		::System::Void set_Vertex(::Il2CppArray<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_VERTEX_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_UV()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_UV_OFFSET))(this);
		}

		::System::Void set_UV(::Il2CppArray<::UnityEngine::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_UV_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_UV2()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_UV2_OFFSET))(this);
		}

		::System::Void set_UV2(::Il2CppArray<::UnityEngine::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_UV2_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_Normals()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_NORMALS_OFFSET))(this);
		}

		::System::Void set_Normals(::Il2CppArray<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_NORMALS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector4>* get_Tangents()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_TANGENTS_OFFSET))(this);
		}

		::System::Void set_Tangents(::Il2CppArray<::UnityEngine::Vector4>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_TANGENTS_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_HasUV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_HASUV_OFFSET))(this);
		}

		::System::Boolean get_HasUV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_HASUV2_OFFSET))(this);
		}

		::System::Boolean get_HasNormals()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_HASNORMALS_OFFSET))(this);
		}

		::System::Boolean get_HasPartialNormals()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_HASPARTIALNORMALS_OFFSET))(this);
		}

		::System::Void set_HasPartialNormals(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_HASPARTIALNORMALS_OFFSET))(this, value);
		}

		::System::Boolean get_HasTangents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_HASTANGENTS_OFFSET))(this);
		}

		::System::Boolean get_HasPartialTangents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_HASPARTIALTANGENTS_OFFSET))(this);
		}

		::System::Void set_HasPartialTangents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SET_HASPARTIALTANGENTS_OFFSET))(this, value);
		}

		::System::Int32 get_TriangleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_TRIANGLECOUNT_OFFSET))(this);
		}

		::System::Boolean Dispose(::System::Boolean disposing)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_DISPOSE_OFFSET))(this, disposing);
		}

		static ::FluffyUnderware::Curvy::Generator::CGVMesh* Get(::FluffyUnderware::Curvy::Generator::CGVMesh* data, ::FluffyUnderware::Curvy::Generator::CGVolume* source, ::System::Boolean addUV, ::System::Boolean reverseNormals)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGVMesh*(*)(::FluffyUnderware::Curvy::Generator::CGVMesh*, ::FluffyUnderware::Curvy::Generator::CGVolume*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_OFFSET))(data, source, addUV, reverseNormals);
		}

		static ::FluffyUnderware::Curvy::Generator::CGVMesh* Get_1(::FluffyUnderware::Curvy::Generator::CGVMesh* data, ::FluffyUnderware::Curvy::Generator::CGVolume* source, ::FluffyUnderware::DevTools::IntRegion subset, ::System::Boolean addUV, ::System::Boolean reverseNormals)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGVMesh*(*)(::FluffyUnderware::Curvy::Generator::CGVMesh*, ::FluffyUnderware::Curvy::Generator::CGVolume*, ::FluffyUnderware::DevTools::IntRegion, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_1_OFFSET))(data, source, subset, addUV, reverseNormals);
		}

		static ::FluffyUnderware::Curvy::Generator::CGVMesh* Get_2(::FluffyUnderware::Curvy::Generator::CGVMesh* data, ::FluffyUnderware::Curvy::Generator::CGVolume* source, ::FluffyUnderware::DevTools::IntRegion subset, ::System::Boolean addUV, ::System::Boolean addUV2, ::System::Boolean reverseNormals)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGVMesh*(*)(::FluffyUnderware::Curvy::Generator::CGVMesh*, ::FluffyUnderware::Curvy::Generator::CGVolume*, ::FluffyUnderware::DevTools::IntRegion, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GET_2_OFFSET))(data, source, subset, addUV, addUV2, reverseNormals);
		}

		::System::Void SetSubMeshCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_SETSUBMESHCOUNT_OFFSET))(this, count);
		}

		::System::Void AddSubMesh(::FluffyUnderware::Curvy::Generator::CGVSubMesh* submesh)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVSubMesh*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_ADDSUBMESH_OFFSET))(this, submesh);
		}

		::System::Void MergeVMesh(::FluffyUnderware::Curvy::Generator::CGVMesh* source)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVMesh*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_MERGEVMESH_OFFSET))(this, source);
		}

		::System::Void MergeVMesh_1(::FluffyUnderware::Curvy::Generator::CGVMesh* source, ::UnityEngine::Matrix4x4 matrix)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVMesh*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_MERGEVMESH_1_OFFSET))(this, source, matrix);
		}

		::System::Void MergeVMeshes(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>* vMeshes, ::System::Int32 startIndex, ::System::Int32 endIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_MERGEVMESHES_OFFSET))(this, vMeshes, startIndex, endIndex);
		}

		::System::Void MergeUVsNormalsAndTangents(::FluffyUnderware::Curvy::Generator::CGVMesh* source, ::System::Int32 preMergeVertexCount)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_MERGEUVSNORMALSANDTANGENTS_OFFSET))(this, source, preMergeVertexCount);
		}

		::FluffyUnderware::Curvy::Generator::CGVSubMesh* GetMaterialSubMesh(::UnityEngine::Material* mat, ::System::Boolean createIfMissing)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGVSubMesh*(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GETMATERIALSUBMESH_OFFSET))(this, mat, createIfMissing);
		}

		::UnityEngine::Mesh* AsMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_ASMESH_OFFSET))(this);
		}

		::System::Void ToMesh(::UnityEngine::Mesh*& mesh, ::System::Boolean includeNormals, ::System::Boolean includeTangents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_TOMESH_OFFSET))(this, mesh, includeNormals, includeTangents);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GETMATERIALS_OFFSET))(this);
		}

		::System::Void RecalculateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_RECALCULATEBOUNDS_OFFSET))(this);
		}

		::System::Void RecalculateUV2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_RECALCULATEUV2_OFFSET))(this);
		}

		::System::Void TRS(::UnityEngine::Matrix4x4 matrix)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_TRS_OFFSET))(this, matrix);
		}

		::System::Void OnVerticesChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_ONVERTICESCHANGED_OFFSET))(this);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> GetCachedSortedVertexIndices()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_GETCACHEDSORTEDVERTEXINDICES_OFFSET))(this);
		}

		::System::Void ClearCachedSortedVertexIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH_CLEARCACHEDSORTEDVERTEXINDICES_OFFSET))(this);
		}

		::System::Void _MergeVMeshes_g__ProcessTriangleArrays_74_0(::System::Collections::Generic::List_1<::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>>* subArrays, ::UnityEngine::Material* material1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVMESH__MERGEVMESHES_G__PROCESSTRIANGLEARRAYS_74_0_OFFSET))(this, subArrays, material1);
		}
	};
}
