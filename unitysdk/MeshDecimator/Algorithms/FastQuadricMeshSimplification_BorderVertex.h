#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_BORDERVERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

namespace MeshDecimator::Algorithms
{
	inline static constexpr unsigned int FastQuadricMeshSimplification_BorderVertex_TypeDefinitionIndex = 35496;

	struct alignas(4) FastQuadricMeshSimplification_BorderVertex
	{
		::System::Int32 index; // 0x10
		::System::Int32 hash; // 0x14

		::System::Void _ctor(::System::Int32 index, ::System::Int32 hash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_BORDERVERTEX__CTOR_OFFSET))(this, index, hash);
		}
	};
}
