#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MeshDecimator/Math/Vector3d.h"
#include "unitysdk/System/ValueType.h"

#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TRIANGLE_GETATTRIBUTEINDICES_OFFSET UNITYSDK_OFFSET(0x9C2D00)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TRIANGLE_GETERRORS_OFFSET UNITYSDK_OFFSET(0x9C2D90)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TRIANGLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9C2C20)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TRIANGLE_SETATTRIBUTEINDEX_OFFSET UNITYSDK_OFFSET(0x9C2D10)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TRIANGLE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9C2C40)
#define MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C2CC0)

namespace MeshDecimator::Algorithms
{
	inline static constexpr unsigned int FastQuadricMeshSimplification_Triangle_TypeDefinitionIndex = 34834;

	struct alignas(8) FastQuadricMeshSimplification_Triangle
	{
		::System::Int32 v0; // 0x10
		::System::Int32 v1; // 0x14
		::System::Int32 v2; // 0x18
		::System::Int32 subMeshIndex; // 0x1C
		::System::Int32 va0; // 0x20
		::System::Int32 va1; // 0x24
		::System::Int32 va2; // 0x28
		::System::Double err0; // 0x30
		::System::Double err1; // 0x38
		::System::Double err2; // 0x40
		::System::Double err3; // 0x48
		::System::Boolean deleted; // 0x50
		::System::Boolean dirty; // 0x51
		::MeshDecimator::Math::Vector3d n; // 0x58

		::System::Void _ctor(::System::Int32 v0, ::System::Int32 v1, ::System::Int32 v2, ::System::Int32 subMeshIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TRIANGLE__CTOR_OFFSET))(this, v0, v1, v2, subMeshIndex);
		}

		::System::Int32 get_Item(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TRIANGLE_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TRIANGLE_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void GetAttributeIndices(::Il2CppArray<::System::Int32>* attributeIndices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TRIANGLE_GETATTRIBUTEINDICES_OFFSET))(this, attributeIndices);
		}

		::System::Void SetAttributeIndex(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TRIANGLE_SETATTRIBUTEINDEX_OFFSET))(this, index, value);
		}

		::System::Void GetErrors(::Il2CppArray<::System::Double>* err)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Double>*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_FASTQUADRICMESHSIMPLIFICATION_TRIANGLE_GETERRORS_OFFSET))(this, err);
		}
	};
}
