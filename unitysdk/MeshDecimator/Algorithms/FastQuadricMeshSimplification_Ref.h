#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_REF_SET_OFFSET UNITYSDK_OFFSET(0x312BA0)

namespace MeshDecimator::Algorithms
{
	inline static constexpr unsigned int FastQuadricMeshSimplification_Ref_TypeDefinitionIndex = 35495;

	struct alignas(4) FastQuadricMeshSimplification_Ref
	{
		::System::Int32 tid; // 0x10
		::System::Int32 tvertex; // 0x14

		::System::Void Set(::System::Int32 tid, ::System::Int32 tvertex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_REF_SET_OFFSET))(this, tid, tvertex);
		}
	};
}
