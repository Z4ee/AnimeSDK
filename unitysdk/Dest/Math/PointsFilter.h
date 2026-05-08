#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/AAB3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Rand; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEST_MATH_POINTSFILTER_DISTANCEFILTER_OFFSET UNITYSDK_OFFSET(0x1C3527D0)

namespace Dest::Math
{
	inline static constexpr unsigned int PointsFilter_TypeDefinitionIndex = 33237;

	class PointsFilter : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>* DistanceFilter(::Il2CppArray<::UnityEngine::Vector3>* points, ::Dest::Math::AAB3 pointsAAB, ::System::Single radius, ::Dest::Math::Rand* rand)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Dest::Math::AAB3, ::System::Single, ::Dest::Math::Rand*))((::PBYTE)hIl2Cpp + DEST_MATH_POINTSFILTER_DISTANCEFILTER_OFFSET))(points, pointsAAB, radius, rand);
		}
	};
}
