#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MeshDecimator/Math/SymmetricMatrix.h"
#include "unitysdk/MeshDecimator/Math/Vector3d.h"
#include "unitysdk/System/ValueType.h"

#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_VERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x917840)

namespace MeshDecimator::Algorithms
{
	inline static constexpr unsigned int FastQuadricMeshSimplification_Vertex_TypeDefinitionIndex = 33272;

	struct alignas(8) FastQuadricMeshSimplification_Vertex
	{
		::MeshDecimator::Math::Vector3d p; // 0x10
		::System::Int32 tstart; // 0x28
		::System::Int32 tcount; // 0x2C
		::MeshDecimator::Math::SymmetricMatrix q; // 0x30
		::System::Boolean border; // 0x80
		::System::Boolean seam; // 0x81
		::System::Boolean foldover; // 0x82

		::System::Void _ctor(::MeshDecimator::Math::Vector3d p)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Math::Vector3d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_VERTEX__CTOR_OFFSET))(this, p);
		}
	};
}
