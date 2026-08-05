#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MeshDecimator/Algorithms/FastQuadricMeshSimplification_BorderVertex.h"
#include "unitysdk/System/Object.h"

#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_BORDERVERTEXCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1E2729A0)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_BORDERVERTEXCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2729D0)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_BORDERVERTEXCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2729C0)

namespace MeshDecimator::Algorithms
{
	inline static constexpr unsigned int FastQuadricMeshSimplification_BorderVertexComparer_TypeDefinitionIndex = 35497;

	class FastQuadricMeshSimplification_BorderVertexComparer : public ::System::Object
	{
	public:
		static ::MeshDecimator::Algorithms::FastQuadricMeshSimplification_BorderVertexComparer** StaticGet_instance()
		{
			return (::MeshDecimator::Algorithms::FastQuadricMeshSimplification_BorderVertexComparer**)Il2CppClass::FromTypeDefinitionIndex(FastQuadricMeshSimplification_BorderVertexComparer_TypeDefinitionIndex)->GetStaticField(0x294B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_BORDERVERTEXCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_BORDERVERTEXCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::MeshDecimator::Algorithms::FastQuadricMeshSimplification_BorderVertex x, ::MeshDecimator::Algorithms::FastQuadricMeshSimplification_BorderVertex y)
		{
			return ((::System::Int32(*)(::PVOID, ::MeshDecimator::Algorithms::FastQuadricMeshSimplification_BorderVertex, ::MeshDecimator::Algorithms::FastQuadricMeshSimplification_BorderVertex))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_BORDERVERTEXCOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
