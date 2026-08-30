#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/MeshGeneratorBuffers.h"
#include "unitysdk/Spine/Unity/MeshGenerator_Settings.h"
#include "unitysdk/Spine/Unity/SubmeshInstruction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace Spine { class MeshAttachment; }
namespace Spine { class RegionAttachment; }
namespace Spine { class Skeleton; }
namespace Spine { class SkeletonClipping; }
namespace Spine { class SkeletonData; }
namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define SPINE_UNITY_MESHGENERATOR_ADDATTACHMENTTINTBLACK_OFFSET UNITYSDK_OFFSET(0x18318050)
#define SPINE_UNITY_MESHGENERATOR_ADDSUBMESH_OFFSET UNITYSDK_OFFSET(0x18316CF0)
#define SPINE_UNITY_MESHGENERATOR_BEGIN_OFFSET UNITYSDK_OFFSET(0x18316C50)
#define SPINE_UNITY_MESHGENERATOR_BUILDMESHWITHARRAYS_OFFSET UNITYSDK_OFFSET(0x18318350)
#define SPINE_UNITY_MESHGENERATOR_BUILDMESH_OFFSET UNITYSDK_OFFSET(0x183182A0)
#define SPINE_UNITY_MESHGENERATOR_ENSUREVERTEXCAPACITY_OFFSET UNITYSDK_OFFSET(0x1831B110)
#define SPINE_UNITY_MESHGENERATOR_FILLLATEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1831A860)
#define SPINE_UNITY_MESHGENERATOR_FILLMESHLOCAL_1_OFFSET UNITYSDK_OFFSET(0x1831C060)
#define SPINE_UNITY_MESHGENERATOR_FILLMESHLOCAL_OFFSET UNITYSDK_OFFSET(0x1831B6A0)
#define SPINE_UNITY_MESHGENERATOR_FILLTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1831B060)
#define SPINE_UNITY_MESHGENERATOR_FILLVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x18319EB0)
#define SPINE_UNITY_MESHGENERATOR_GENERATESINGLESUBMESHINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x18315090)
#define SPINE_UNITY_MESHGENERATOR_GENERATESKELETONRENDERERINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x18315D60)
#define SPINE_UNITY_MESHGENERATOR_GETMESHBOUNDS_OFFSET UNITYSDK_OFFSET(0x18319E40)
#define SPINE_UNITY_MESHGENERATOR_GET_BUFFERS_OFFSET UNITYSDK_OFFSET(0x18314E10)
#define SPINE_UNITY_MESHGENERATOR_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x18314DA0)
#define SPINE_UNITY_MESHGENERATOR_REQUIRESMULTIPLESUBMESHESBYDRAWORDER_OFFSET UNITYSDK_OFFSET(0x183158A0)
#define SPINE_UNITY_MESHGENERATOR_SCALEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x18319DB0)
#define SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DBUFFER_OFFSET UNITYSDK_OFFSET(0x1831AEE0)
#define SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DENSURESIZE_OFFSET UNITYSDK_OFFSET(0x1831AB90)
#define SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1831ABF0)
#define SPINE_UNITY_MESHGENERATOR_SUBMESHINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x18314DC0)
#define SPINE_UNITY_MESHGENERATOR_TRIMEXCESS_OFFSET UNITYSDK_OFFSET(0x1831B3F0)
#define SPINE_UNITY_MESHGENERATOR_TRYREPLACEMATERIALS_OFFSET UNITYSDK_OFFSET(0x18316B20)
#define SPINE_UNITY_MESHGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1831CA40)
#define SPINE_UNITY_MESHGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18314E80)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshGenerator_TypeDefinitionIndex = 43889;

	class MeshGenerator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_AttachmentVerts()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MeshGenerator_TypeDefinitionIndex)->GetStaticField(0x19D20);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>** StaticGet_AttachmentUVs()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MeshGenerator_TypeDefinitionIndex)->GetStaticField(0x19D28);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Color32>** StaticGet_AttachmentColors32()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Color32>**)Il2CppClass::FromTypeDefinitionIndex(MeshGenerator_TypeDefinitionIndex)->GetStaticField(0x19D30);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_AttachmentIndices()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MeshGenerator_TypeDefinitionIndex)->GetStaticField(0x19D38);
		}
		// static const ::System::Single BoundsMinDefault; // 0x0
		// static const ::System::Single BoundsMaxDefault; // 0x0
		::Spine::Unity::MeshGenerator_Settings settings; // 0x10
		::Spine::ExposedList_1<::UnityEngine::Vector3>* vertexBuffer; // 0x20
		::Spine::ExposedList_1<::UnityEngine::Vector2>* uvBuffer; // 0x28
		::Spine::ExposedList_1<::UnityEngine::Color32>* colorBuffer; // 0x30
		::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Int32>*>* submeshes; // 0x38
		::UnityEngine::Vector2 meshBoundsMin; // 0x40
		::UnityEngine::Vector2 meshBoundsMax; // 0x48
		::System::Single meshBoundsThickness; // 0x50
		::System::Int32 submeshIndex; // 0x54
		::Spine::SkeletonClipping* clipper; // 0x58
		::Il2CppArray<::System::Single>* tempVerts; // 0x60
		::Il2CppArray<::System::Int32>* regionTriangles; // 0x68
		::Il2CppArray<::UnityEngine::Vector3>* normals; // 0x70
		::Il2CppArray<::UnityEngine::Vector4>* tangents; // 0x78
		::Il2CppArray<::UnityEngine::Vector2>* tempTanBuffer; // 0x80
		::Spine::ExposedList_1<::UnityEngine::Vector2>* uv2; // 0x88
		::Spine::ExposedList_1<::UnityEngine::Vector2>* uv3; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR__CCTOR_OFFSET))();
		}

		::System::Int32 get_VertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Int32 SubmeshIndexCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SUBMESHINDEXCOUNT_OFFSET))(this, a1);
		}

		::Spine::Unity::MeshGeneratorBuffers get_Buffers()
		{
			return ((::Spine::Unity::MeshGeneratorBuffers(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GET_BUFFERS_OFFSET))(this);
		}

		static ::System::Void GenerateSingleSubmeshInstruction(::Spine::Unity::SkeletonRendererInstruction* a1, ::Spine::Skeleton* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::Spine::Skeleton*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GENERATESINGLESUBMESHINSTRUCTION_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean RequiresMultipleSubmeshesByDrawOrder(::Spine::Skeleton* a1)
		{
			return ((::System::Boolean(*)(::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_REQUIRESMULTIPLESUBMESHESBYDRAWORDER_OFFSET))(a1);
		}

		static ::System::Void GenerateSkeletonRendererInstruction(::Spine::Unity::SkeletonRendererInstruction* a1, ::Spine::Skeleton* a2, ::System::Collections::Generic::Dictionary_2<::Spine::Slot*, ::UnityEngine::Material*>* a3, ::System::Collections::Generic::List_1<::Spine::Slot*>* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::Spine::Skeleton*, ::System::Collections::Generic::Dictionary_2<::Spine::Slot*, ::UnityEngine::Material*>*, ::System::Collections::Generic::List_1<::Spine::Slot*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GENERATESKELETONRENDERERINSTRUCTION_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void TryReplaceMaterials(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_TRYREPLACEMATERIALS_OFFSET))(a1, a2);
		}

		::System::Void Begin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_BEGIN_OFFSET))(this);
		}

		::System::Void AddSubmesh(::Spine::Unity::SubmeshInstruction a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SubmeshInstruction, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_ADDSUBMESH_OFFSET))(this, a1, a2);
		}

		::System::Void BuildMesh(::Spine::Unity::SkeletonRendererInstruction* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_BUILDMESH_OFFSET))(this, a1, a2);
		}

		::System::Void BuildMeshWithArrays(::Spine::Unity::SkeletonRendererInstruction* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_BUILDMESHWITHARRAYS_OFFSET))(this, a1, a2);
		}

		::System::Void ScaleVertexData(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SCALEVERTEXDATA_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds GetMeshBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GETMESHBOUNDS_OFFSET))(this);
		}

		::System::Void AddAttachmentTintBlack(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_ADDATTACHMENTTINTBLACK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FillVertexData(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLVERTEXDATA_OFFSET))(this, a1);
		}

		::System::Void FillLateVertexData(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLLATEVERTEXDATA_OFFSET))(this, a1);
		}

		::System::Void FillTriangles(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLTRIANGLES_OFFSET))(this, a1);
		}

		::System::Void EnsureVertexCapacity(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_ENSUREVERTEXCAPACITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void TrimExcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_TRIMEXCESS_OFFSET))(this);
		}

		static ::System::Void SolveTangents2DEnsureSize(::Il2CppArray<::UnityEngine::Vector4>*& a1, ::Il2CppArray<::UnityEngine::Vector2>*& a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector2>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DENSURESIZE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SolveTangents2DTriangles(::Il2CppArray<::UnityEngine::Vector2>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::Il2CppArray<::UnityEngine::Vector3>* a4, ::Il2CppArray<::UnityEngine::Vector2>* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DTRIANGLES_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SolveTangents2DBuffer(::Il2CppArray<::UnityEngine::Vector4>* a1, ::Il2CppArray<::UnityEngine::Vector2>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DBUFFER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FillMeshLocal(::UnityEngine::Mesh* a1, ::Spine::RegionAttachment* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::Spine::RegionAttachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLMESHLOCAL_OFFSET))(a1, a2);
		}

		static ::System::Void FillMeshLocal_1(::UnityEngine::Mesh* a1, ::Spine::MeshAttachment* a2, ::Spine::SkeletonData* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::Spine::MeshAttachment*, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLMESHLOCAL_1_OFFSET))(a1, a2, a3);
		}
	};
}
