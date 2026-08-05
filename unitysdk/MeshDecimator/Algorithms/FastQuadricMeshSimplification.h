#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MeshDecimator/Algorithms/DecimationAlgorithm.h"
#include "unitysdk/MeshDecimator/Algorithms/FastQuadricMeshSimplification_Ref.h"
#include "unitysdk/MeshDecimator/Algorithms/FastQuadricMeshSimplification_Triangle.h"
#include "unitysdk/MeshDecimator/Algorithms/FastQuadricMeshSimplification_Vertex.h"
#include "unitysdk/MeshDecimator/BoneWeight.h"
#include "unitysdk/MeshDecimator/Math/SymmetricMatrix.h"
#include "unitysdk/MeshDecimator/Math/Vector2.h"
#include "unitysdk/MeshDecimator/Math/Vector3.h"
#include "unitysdk/MeshDecimator/Math/Vector3d.h"
#include "unitysdk/MeshDecimator/Math/Vector4.h"

namespace MeshDecimator { class Mesh; }
namespace MeshDecimator::Collections { template <typename T> class ResizableArray_1; }
namespace MeshDecimator::Collections { template <typename T> class UVChannels_1; }
namespace System { class String; }

#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_AREUVSTHESAME_OFFSET UNITYSDK_OFFSET(0x1E26BF00)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_CALCULATEERROR_OFFSET UNITYSDK_OFFSET(0x1E268BB0)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_COMPACTMESH_OFFSET UNITYSDK_OFFSET(0x1E26EB00)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_DECIMATEMESHLOSSLESS_OFFSET UNITYSDK_OFFSET(0x1E270FA0)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_DECIMATEMESH_OFFSET UNITYSDK_OFFSET(0x1E270C90)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_FLIPPED_OFFSET UNITYSDK_OFFSET(0x1E269560)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_GET_AGRESSIVENESS_OFFSET UNITYSDK_OFFSET(0x1E268850)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_GET_ENABLESMARTLINK_OFFSET UNITYSDK_OFFSET(0x1E268810)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_GET_MAXITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1E268830)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_GET_PRESERVEFOLDOVERS_OFFSET UNITYSDK_OFFSET(0x1E2687F0)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_GET_PRESERVESEAMS_OFFSET UNITYSDK_OFFSET(0x1E2687D0)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_GET_VERTEXLINKDISTANCESQR_OFFSET UNITYSDK_OFFSET(0x1E268870)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E26FF50)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_MERGEVERTEXATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E26AE10)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_MOVEVERTEXATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E26A4D0)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_REMOVEVERTEXPASS_OFFSET UNITYSDK_OFFSET(0x1E26C5E0)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_SET_AGRESSIVENESS_OFFSET UNITYSDK_OFFSET(0x1E268860)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_SET_ENABLESMARTLINK_OFFSET UNITYSDK_OFFSET(0x1E268820)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_SET_MAXITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1E268840)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_SET_PRESERVEFOLDOVERS_OFFSET UNITYSDK_OFFSET(0x1E268800)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_SET_PRESERVESEAMS_OFFSET UNITYSDK_OFFSET(0x1E2687E0)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_SET_VERTEXLINKDISTANCESQR_OFFSET UNITYSDK_OFFSET(0x1E268880)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TOMESH_OFFSET UNITYSDK_OFFSET(0x1E2711D0)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x1E26D050)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_UPDATEREFERENCES_OFFSET UNITYSDK_OFFSET(0x1E26E680)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_UPDATETRIANGLES_OFFSET UNITYSDK_OFFSET(0x1E269D40)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_VERTEXERROR_OFFSET UNITYSDK_OFFSET(0x1E268AA0)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E268890)

namespace MeshDecimator::Algorithms
{
	inline static constexpr unsigned int FastQuadricMeshSimplification_TypeDefinitionIndex = 35492;

	class FastQuadricMeshSimplification : public ::MeshDecimator::Algorithms::DecimationAlgorithm
	{
	public:
		// static const ::System::Double DoubleEpsilon; // 0x0
		::MeshDecimator::Collections::ResizableArray_1<::MeshDecimator::Math::Vector4>* vertColors; // 0x20
		::Il2CppArray<::System::Int32>* attributeIndexArr; // 0x28
		::MeshDecimator::Collections::ResizableArray_1<::MeshDecimator::BoneWeight>* vertBoneWeights; // 0x30
		::MeshDecimator::Collections::ResizableArray_1<::MeshDecimator::Algorithms::FastQuadricMeshSimplification_Vertex>* vertices; // 0x38
		::MeshDecimator::Collections::UVChannels_1<::MeshDecimator::Math::Vector4>* vertUV4D; // 0x40
		::MeshDecimator::Collections::UVChannels_1<::MeshDecimator::Math::Vector3>* vertUV3D; // 0x48
		::MeshDecimator::Collections::ResizableArray_1<::MeshDecimator::Math::Vector3>* vertNormals; // 0x50
		::Il2CppArray<::System::Double>* errArr; // 0x58
		::MeshDecimator::Collections::ResizableArray_1<::MeshDecimator::Math::Vector4>* vertTangents; // 0x60
		::MeshDecimator::Collections::UVChannels_1<::MeshDecimator::Math::Vector2>* vertUV2D; // 0x68
		::MeshDecimator::Collections::ResizableArray_1<::MeshDecimator::Algorithms::FastQuadricMeshSimplification_Triangle>* triangles; // 0x70
		::MeshDecimator::Collections::ResizableArray_1<::MeshDecimator::Algorithms::FastQuadricMeshSimplification_Ref>* refs; // 0x78
		::System::Double agressiveness; // 0x80
		::System::Boolean preserveFoldovers; // 0x88
		::System::Boolean preserveSeams; // 0x89
		::System::Boolean enableSmartLink; // 0x8A
		::System::Int32 subMeshCount; // 0x8C
		::System::Double vertexLinkDistanceSqr; // 0x90
		::System::Int32 remainingVertices; // 0x98
		::System::Int32 maxIterationCount; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_PreserveSeams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_GET_PRESERVESEAMS_OFFSET))(this);
		}

		::System::Void set_PreserveSeams(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_SET_PRESERVESEAMS_OFFSET))(this, value);
		}

		::System::Boolean get_PreserveFoldovers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_GET_PRESERVEFOLDOVERS_OFFSET))(this);
		}

		::System::Void set_PreserveFoldovers(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_SET_PRESERVEFOLDOVERS_OFFSET))(this, value);
		}

		::System::Boolean get_EnableSmartLink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_GET_ENABLESMARTLINK_OFFSET))(this);
		}

		::System::Void set_EnableSmartLink(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_SET_ENABLESMARTLINK_OFFSET))(this, value);
		}

		::System::Int32 get_MaxIterationCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_GET_MAXITERATIONCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxIterationCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_SET_MAXITERATIONCOUNT_OFFSET))(this, value);
		}

		::System::Double get_Agressiveness()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_GET_AGRESSIVENESS_OFFSET))(this);
		}

		::System::Void set_Agressiveness(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_SET_AGRESSIVENESS_OFFSET))(this, value);
		}

		::System::Double get_VertexLinkDistanceSqr()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_GET_VERTEXLINKDISTANCESQR_OFFSET))(this);
		}

		::System::Void set_VertexLinkDistanceSqr(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_SET_VERTEXLINKDISTANCESQR_OFFSET))(this, value);
		}

		::System::Double VertexError(::MeshDecimator::Math::SymmetricMatrix& q, ::System::Double x, ::System::Double y, ::System::Double z)
		{
			return ((::System::Double(*)(::PVOID, ::MeshDecimator::Math::SymmetricMatrix&, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_VERTEXERROR_OFFSET))(this, q, x, y, z);
		}

		::System::Double CalculateError(::MeshDecimator::Algorithms::FastQuadricMeshSimplification_Vertex& vert0, ::MeshDecimator::Algorithms::FastQuadricMeshSimplification_Vertex& vert1, ::MeshDecimator::Math::Vector3d& result, ::System::Int32& resultIndex)
		{
			return ((::System::Double(*)(::PVOID, ::MeshDecimator::Algorithms::FastQuadricMeshSimplification_Vertex&, ::MeshDecimator::Algorithms::FastQuadricMeshSimplification_Vertex&, ::MeshDecimator::Math::Vector3d&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_CALCULATEERROR_OFFSET))(this, vert0, vert1, result, resultIndex);
		}

		::System::Boolean Flipped(::MeshDecimator::Math::Vector3d& p, ::System::Int32 i0, ::System::Int32 i1, ::MeshDecimator::Algorithms::FastQuadricMeshSimplification_Vertex& v0, ::Il2CppArray<::System::Boolean>* deleted)
		{
			return ((::System::Boolean(*)(::PVOID, ::MeshDecimator::Math::Vector3d&, ::System::Int32, ::System::Int32, ::MeshDecimator::Algorithms::FastQuadricMeshSimplification_Vertex&, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_FLIPPED_OFFSET))(this, p, i0, i1, v0, deleted);
		}

		::System::Void UpdateTriangles(::System::Int32 i0, ::System::Int32 ia0, ::MeshDecimator::Algorithms::FastQuadricMeshSimplification_Vertex& v, ::MeshDecimator::Collections::ResizableArray_1<::System::Boolean>* deleted, ::System::Int32& deletedTriangles)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::MeshDecimator::Algorithms::FastQuadricMeshSimplification_Vertex&, ::MeshDecimator::Collections::ResizableArray_1<::System::Boolean>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_UPDATETRIANGLES_OFFSET))(this, i0, ia0, v, deleted, deletedTriangles);
		}

		::System::Void MoveVertexAttributes(::System::Int32 i0, ::System::Int32 i1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_MOVEVERTEXATTRIBUTES_OFFSET))(this, i0, i1);
		}

		::System::Void MergeVertexAttributes(::System::Int32 i0, ::System::Int32 i1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_MERGEVERTEXATTRIBUTES_OFFSET))(this, i0, i1);
		}

		::System::Boolean AreUVsTheSame(::System::Int32 channel, ::System::Int32 indexA, ::System::Int32 indexB)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_AREUVSTHESAME_OFFSET))(this, channel, indexA, indexB);
		}

		::System::Void RemoveVertexPass(::System::Int32 startTrisCount, ::System::Int32 targetTrisCount, ::System::Double threshold, ::MeshDecimator::Collections::ResizableArray_1<::System::Boolean>* deleted0, ::MeshDecimator::Collections::ResizableArray_1<::System::Boolean>* deleted1, ::System::Int32& deletedTris)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Double, ::MeshDecimator::Collections::ResizableArray_1<::System::Boolean>*, ::MeshDecimator::Collections::ResizableArray_1<::System::Boolean>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_REMOVEVERTEXPASS_OFFSET))(this, startTrisCount, targetTrisCount, threshold, deleted0, deleted1, deletedTris);
		}

		::System::Void UpdateMesh(::System::Int32 iteration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_UPDATEMESH_OFFSET))(this, iteration);
		}

		::System::Void UpdateReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_UPDATEREFERENCES_OFFSET))(this);
		}

		::System::Void CompactMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_COMPACTMESH_OFFSET))(this);
		}

		::System::Void Initialize(::MeshDecimator::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Mesh*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_INITIALIZE_OFFSET))(this, mesh);
		}

		::System::Void DecimateMesh(::System::Int32 targetTrisCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_DECIMATEMESH_OFFSET))(this, targetTrisCount);
		}

		::System::Void DecimateMeshLossless()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_DECIMATEMESHLOSSLESS_OFFSET))(this);
		}

		::MeshDecimator::Mesh* ToMesh()
		{
			return ((::MeshDecimator::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TOMESH_OFFSET))(this);
		}
	};
}
