#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MeshDecimator/BoneWeight.h"
#include "unitysdk/MeshDecimator/Math/Vector2.h"
#include "unitysdk/MeshDecimator/Math/Vector3.h"
#include "unitysdk/MeshDecimator/Math/Vector3d.h"
#include "unitysdk/MeshDecimator/Math/Vector4.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MESHDECIMATOR_MESH_CLEARVERTEXATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AA422C0)
#define MESHDECIMATOR_MESH_GETINDICES_OFFSET UNITYSDK_OFFSET(0x1AA39AB0)
#define MESHDECIMATOR_MESH_GETSUBMESHINDICES_OFFSET UNITYSDK_OFFSET(0x1AA43D70)
#define MESHDECIMATOR_MESH_GETTRIANGLECOUNT_OFFSET UNITYSDK_OFFSET(0x1AA43CC0)
#define MESHDECIMATOR_MESH_GETUVDIMENSION_OFFSET UNITYSDK_OFFSET(0x1AA39BA0)
#define MESHDECIMATOR_MESH_GETUVS2D_OFFSET UNITYSDK_OFFSET(0x1AA39C90)
#define MESHDECIMATOR_MESH_GETUVS3D_OFFSET UNITYSDK_OFFSET(0x1AA39D20)
#define MESHDECIMATOR_MESH_GETUVS4D_OFFSET UNITYSDK_OFFSET(0x1AA39DB0)
#define MESHDECIMATOR_MESH_GETUVS_1_OFFSET UNITYSDK_OFFSET(0x1AA44020)
#define MESHDECIMATOR_MESH_GETUVS_2_OFFSET UNITYSDK_OFFSET(0x1AA44120)
#define MESHDECIMATOR_MESH_GETUVS_OFFSET UNITYSDK_OFFSET(0x1AA43F20)
#define MESHDECIMATOR_MESH_GET_BONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1AA42A30)
#define MESHDECIMATOR_MESH_GET_COLORS_OFFSET UNITYSDK_OFFSET(0x1AA42A20)
#define MESHDECIMATOR_MESH_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x1AA422E0)
#define MESHDECIMATOR_MESH_GET_NORMALS_OFFSET UNITYSDK_OFFSET(0x1AA42840)
#define MESHDECIMATOR_MESH_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA39980)
#define MESHDECIMATOR_MESH_GET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x1AA42850)
#define MESHDECIMATOR_MESH_GET_TRIANGLECOUNT_OFFSET UNITYSDK_OFFSET(0x1AA399A0)
#define MESHDECIMATOR_MESH_GET_UV1_OFFSET UNITYSDK_OFFSET(0x1AA42860)
#define MESHDECIMATOR_MESH_GET_UV2_OFFSET UNITYSDK_OFFSET(0x1AA428D0)
#define MESHDECIMATOR_MESH_GET_UV3_OFFSET UNITYSDK_OFFSET(0x1AA42940)
#define MESHDECIMATOR_MESH_GET_UV4_OFFSET UNITYSDK_OFFSET(0x1AA429B0)
#define MESHDECIMATOR_MESH_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA42150)
#define MESHDECIMATOR_MESH_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1AA42220)
#define MESHDECIMATOR_MESH_RECALCULATENORMALS_OFFSET UNITYSDK_OFFSET(0x1AA42BC0)
#define MESHDECIMATOR_MESH_RECALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x1AA43110)
#define MESHDECIMATOR_MESH_SETINDICES_OFFSET UNITYSDK_OFFSET(0x1AA426D0)
#define MESHDECIMATOR_MESH_SETUVS_1_OFFSET UNITYSDK_OFFSET(0x1AA3B610)
#define MESHDECIMATOR_MESH_SETUVS_2_OFFSET UNITYSDK_OFFSET(0x1AA3B890)
#define MESHDECIMATOR_MESH_SETUVS_3_OFFSET UNITYSDK_OFFSET(0x1AA44220)
#define MESHDECIMATOR_MESH_SETUVS_4_OFFSET UNITYSDK_OFFSET(0x1AA444A0)
#define MESHDECIMATOR_MESH_SETUVS_5_OFFSET UNITYSDK_OFFSET(0x1AA44720)
#define MESHDECIMATOR_MESH_SETUVS_OFFSET UNITYSDK_OFFSET(0x1AA3B390)
#define MESHDECIMATOR_MESH_SET_BONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1AA3B2C0)
#define MESHDECIMATOR_MESH_SET_COLORS_OFFSET UNITYSDK_OFFSET(0x1AA3B1F0)
#define MESHDECIMATOR_MESH_SET_INDICES_OFFSET UNITYSDK_OFFSET(0x1AA42580)
#define MESHDECIMATOR_MESH_SET_NORMALS_OFFSET UNITYSDK_OFFSET(0x1AA3B050)
#define MESHDECIMATOR_MESH_SET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA42170)
#define MESHDECIMATOR_MESH_SET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x1AA3B120)
#define MESHDECIMATOR_MESH_SET_UV1_OFFSET UNITYSDK_OFFSET(0x1AA428C0)
#define MESHDECIMATOR_MESH_SET_UV2_OFFSET UNITYSDK_OFFSET(0x1AA42930)
#define MESHDECIMATOR_MESH_SET_UV3_OFFSET UNITYSDK_OFFSET(0x1AA429A0)
#define MESHDECIMATOR_MESH_SET_UV4_OFFSET UNITYSDK_OFFSET(0x1AA42A10)
#define MESHDECIMATOR_MESH_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1AA42230)
#define MESHDECIMATOR_MESH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA449A0)
#define MESHDECIMATOR_MESH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA44A30)
#define MESHDECIMATOR_MESH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA3AEF0)
#define MESHDECIMATOR_MESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA42A40)

namespace MeshDecimator
{
	inline static constexpr unsigned int Mesh_TypeDefinitionIndex = 33252;

	class Mesh : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_emptyIndices()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Mesh_TypeDefinitionIndex)->GetStaticField(0x26140);
		}
		// static const ::System::Int32 UVChannelCount = 0x4; // 0x0
		::Il2CppArray<::Il2CppArray<::MeshDecimator::Math::Vector2>*>* uvs2D; // 0x10
		::Il2CppArray<::Il2CppArray<::MeshDecimator::Math::Vector4>*>* uvs4D; // 0x18
		::Il2CppArray<::MeshDecimator::Math::Vector3>* normals; // 0x20
		::Il2CppArray<::MeshDecimator::Math::Vector4>* colors; // 0x28
		::Il2CppArray<::MeshDecimator::BoneWeight>* boneWeights; // 0x30
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* indices; // 0x38
		::Il2CppArray<::Il2CppArray<::MeshDecimator::Math::Vector3>*>* uvs3D; // 0x40
		::Il2CppArray<::MeshDecimator::Math::Vector4>* tangents; // 0x48
		::Il2CppArray<::MeshDecimator::Math::Vector3d>* vertices; // 0x50

		::System::Void _ctor(::Il2CppArray<::MeshDecimator::Math::Vector3d>* vertices, ::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MeshDecimator::Math::Vector3d>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH__CTOR_OFFSET))(this, vertices, indices);
		}

		::System::Void _ctor_1(::Il2CppArray<::MeshDecimator::Math::Vector3d>* vertices, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* indices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MeshDecimator::Math::Vector3d>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH__CTOR_1_OFFSET))(this, vertices, indices);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH__CCTOR_OFFSET))();
		}

		::System::Int32 get_VertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SubMeshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_SUBMESHCOUNT_OFFSET))(this);
		}

		::System::Void set_SubMeshCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SET_SUBMESHCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_TriangleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_TRIANGLECOUNT_OFFSET))(this);
		}

		::Il2CppArray<::MeshDecimator::Math::Vector3d>* get_Vertices()
		{
			return ((::Il2CppArray<::MeshDecimator::Math::Vector3d>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_VERTICES_OFFSET))(this);
		}

		::System::Void set_Vertices(::Il2CppArray<::MeshDecimator::Math::Vector3d>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MeshDecimator::Math::Vector3d>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SET_VERTICES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_Indices()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_INDICES_OFFSET))(this);
		}

		::System::Void set_Indices(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SET_INDICES_OFFSET))(this, value);
		}

		::Il2CppArray<::MeshDecimator::Math::Vector3>* get_Normals()
		{
			return ((::Il2CppArray<::MeshDecimator::Math::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_NORMALS_OFFSET))(this);
		}

		::System::Void set_Normals(::Il2CppArray<::MeshDecimator::Math::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MeshDecimator::Math::Vector3>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SET_NORMALS_OFFSET))(this, value);
		}

		::Il2CppArray<::MeshDecimator::Math::Vector4>* get_Tangents()
		{
			return ((::Il2CppArray<::MeshDecimator::Math::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_TANGENTS_OFFSET))(this);
		}

		::System::Void set_Tangents(::Il2CppArray<::MeshDecimator::Math::Vector4>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MeshDecimator::Math::Vector4>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SET_TANGENTS_OFFSET))(this, value);
		}

		::Il2CppArray<::MeshDecimator::Math::Vector2>* get_UV1()
		{
			return ((::Il2CppArray<::MeshDecimator::Math::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_UV1_OFFSET))(this);
		}

		::System::Void set_UV1(::Il2CppArray<::MeshDecimator::Math::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MeshDecimator::Math::Vector2>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SET_UV1_OFFSET))(this, value);
		}

		::Il2CppArray<::MeshDecimator::Math::Vector2>* get_UV2()
		{
			return ((::Il2CppArray<::MeshDecimator::Math::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_UV2_OFFSET))(this);
		}

		::System::Void set_UV2(::Il2CppArray<::MeshDecimator::Math::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MeshDecimator::Math::Vector2>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SET_UV2_OFFSET))(this, value);
		}

		::Il2CppArray<::MeshDecimator::Math::Vector2>* get_UV3()
		{
			return ((::Il2CppArray<::MeshDecimator::Math::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_UV3_OFFSET))(this);
		}

		::System::Void set_UV3(::Il2CppArray<::MeshDecimator::Math::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MeshDecimator::Math::Vector2>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SET_UV3_OFFSET))(this, value);
		}

		::Il2CppArray<::MeshDecimator::Math::Vector2>* get_UV4()
		{
			return ((::Il2CppArray<::MeshDecimator::Math::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_UV4_OFFSET))(this);
		}

		::System::Void set_UV4(::Il2CppArray<::MeshDecimator::Math::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MeshDecimator::Math::Vector2>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SET_UV4_OFFSET))(this, value);
		}

		::Il2CppArray<::MeshDecimator::Math::Vector4>* get_Colors()
		{
			return ((::Il2CppArray<::MeshDecimator::Math::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_COLORS_OFFSET))(this);
		}

		::System::Void set_Colors(::Il2CppArray<::MeshDecimator::Math::Vector4>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MeshDecimator::Math::Vector4>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SET_COLORS_OFFSET))(this, value);
		}

		::Il2CppArray<::MeshDecimator::BoneWeight>* get_BoneWeights()
		{
			return ((::Il2CppArray<::MeshDecimator::BoneWeight>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GET_BONEWEIGHTS_OFFSET))(this);
		}

		::System::Void set_BoneWeights(::Il2CppArray<::MeshDecimator::BoneWeight>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MeshDecimator::BoneWeight>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SET_BONEWEIGHTS_OFFSET))(this, value);
		}

		::System::Void ClearVertexAttributes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_CLEARVERTEXATTRIBUTES_OFFSET))(this);
		}

		::System::Void RecalculateNormals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_RECALCULATENORMALS_OFFSET))(this);
		}

		::System::Void RecalculateTangents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_RECALCULATETANGENTS_OFFSET))(this);
		}

		::System::Int32 GetTriangleCount(::System::Int32 subMeshIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GETTRIANGLECOUNT_OFFSET))(this, subMeshIndex);
		}

		::Il2CppArray<::System::Int32>* GetIndices(::System::Int32 subMeshIndex)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GETINDICES_OFFSET))(this, subMeshIndex);
		}

		::Il2CppArray<::Il2CppArray<::System::Int32>*>* GetSubMeshIndices()
		{
			return ((::Il2CppArray<::Il2CppArray<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GETSUBMESHINDICES_OFFSET))(this);
		}

		::System::Void SetIndices(::System::Int32 subMeshIndex, ::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SETINDICES_OFFSET))(this, subMeshIndex, indices);
		}

		::System::Int32 GetUVDimension(::System::Int32 channel)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GETUVDIMENSION_OFFSET))(this, channel);
		}

		::Il2CppArray<::MeshDecimator::Math::Vector2>* GetUVs2D(::System::Int32 channel)
		{
			return ((::Il2CppArray<::MeshDecimator::Math::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GETUVS2D_OFFSET))(this, channel);
		}

		::Il2CppArray<::MeshDecimator::Math::Vector3>* GetUVs3D(::System::Int32 channel)
		{
			return ((::Il2CppArray<::MeshDecimator::Math::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GETUVS3D_OFFSET))(this, channel);
		}

		::Il2CppArray<::MeshDecimator::Math::Vector4>* GetUVs4D(::System::Int32 channel)
		{
			return ((::Il2CppArray<::MeshDecimator::Math::Vector4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GETUVS4D_OFFSET))(this, channel);
		}

		::System::Void GetUVs(::System::Int32 channel, ::System::Collections::Generic::List_1<::MeshDecimator::Math::Vector2>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MeshDecimator::Math::Vector2>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GETUVS_OFFSET))(this, channel, uvs);
		}

		::System::Void GetUVs_1(::System::Int32 channel, ::System::Collections::Generic::List_1<::MeshDecimator::Math::Vector3>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MeshDecimator::Math::Vector3>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GETUVS_1_OFFSET))(this, channel, uvs);
		}

		::System::Void GetUVs_2(::System::Int32 channel, ::System::Collections::Generic::List_1<::MeshDecimator::Math::Vector4>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MeshDecimator::Math::Vector4>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_GETUVS_2_OFFSET))(this, channel, uvs);
		}

		::System::Void SetUVs(::System::Int32 channel, ::Il2CppArray<::MeshDecimator::Math::Vector2>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MeshDecimator::Math::Vector2>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SETUVS_OFFSET))(this, channel, uvs);
		}

		::System::Void SetUVs_1(::System::Int32 channel, ::Il2CppArray<::MeshDecimator::Math::Vector3>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MeshDecimator::Math::Vector3>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SETUVS_1_OFFSET))(this, channel, uvs);
		}

		::System::Void SetUVs_2(::System::Int32 channel, ::Il2CppArray<::MeshDecimator::Math::Vector4>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MeshDecimator::Math::Vector4>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SETUVS_2_OFFSET))(this, channel, uvs);
		}

		::System::Void SetUVs_3(::System::Int32 channel, ::System::Collections::Generic::List_1<::MeshDecimator::Math::Vector2>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MeshDecimator::Math::Vector2>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SETUVS_3_OFFSET))(this, channel, uvs);
		}

		::System::Void SetUVs_4(::System::Int32 channel, ::System::Collections::Generic::List_1<::MeshDecimator::Math::Vector3>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MeshDecimator::Math::Vector3>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SETUVS_4_OFFSET))(this, channel, uvs);
		}

		::System::Void SetUVs_5(::System::Int32 channel, ::System::Collections::Generic::List_1<::MeshDecimator::Math::Vector4>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MeshDecimator::Math::Vector4>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_SETUVS_5_OFFSET))(this, channel, uvs);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MESH_TOSTRING_OFFSET))(this);
		}
	};
}
