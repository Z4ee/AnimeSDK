#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/AAB3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Rand; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEST_MATH_POINTSFILTER_DATA_BINARYSEARCH_1_OFFSET UNITYSDK_OFFSET(0x1DEC9FE0)
#define DEST_MATH_POINTSFILTER_DATA_BINARYSEARCH_OFFSET UNITYSDK_OFFSET(0x1DEC9F40)
#define DEST_MATH_POINTSFILTER_DATA_CALCGRIDINDICES_OFFSET UNITYSDK_OFFSET(0x1DECA070)
#define DEST_MATH_POINTSFILTER_DATA_FILTER_OFFSET UNITYSDK_OFFSET(0x1DECA0C0)
#define DEST_MATH_POINTSFILTER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC9E00)

namespace Dest::Math
{
	inline static constexpr unsigned int PointsFilter_Data_TypeDefinitionIndex = 34801;

	class PointsFilter_Data : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* _grid; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* _points; // 0x18
		::Dest::Math::Rand* _rand; // 0x20
		::System::Int32 _cellsZ; // 0x28
		::System::Single _radius; // 0x2C
		::System::Int32 _cellsX; // 0x30
		::System::Int32 _cellsY; // 0x34
		::System::Single _cellSize; // 0x38
		::UnityEngine::Vector3 _min; // 0x3C
		::UnityEngine::Vector3 _max; // 0x48

		::System::Void _ctor(::Il2CppArray<::UnityEngine::Vector3>* points, ::System::Single radius, ::Dest::Math::Rand* rand, ::Dest::Math::AAB3 aab)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::Dest::Math::Rand*, ::Dest::Math::AAB3))((::PBYTE)hIl2Cpp + DEST_MATH_POINTSFILTER_DATA__CTOR_OFFSET))(this, points, radius, rand, aab);
		}

		static ::System::Int32 BinarySearch(::System::Collections::Generic::List_1<::System::Int32>* array, ::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POINTSFILTER_DATA_BINARYSEARCH_OFFSET))(array, value);
		}

		static ::System::Int32 BinarySearch_1(::Il2CppArray<::System::Int32>* array, ::System::Int32 length, ::System::Int32 value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POINTSFILTER_DATA_BINARYSEARCH_1_OFFSET))(array, length, value);
		}

		::System::Void CalcGridIndices(::UnityEngine::Vector3& point, ::System::Int32& i, ::System::Int32& j, ::System::Int32& k)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEST_MATH_POINTSFILTER_DATA_CALCGRIDINDICES_OFFSET))(this, point, i, j, k);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Filter()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POINTSFILTER_DATA_FILTER_OFFSET))(this);
		}
	};
}
