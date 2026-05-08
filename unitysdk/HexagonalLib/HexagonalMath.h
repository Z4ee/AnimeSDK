#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define HEXAGONALLIB_HEXAGONALMATH_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1C2433C0)
#define HEXAGONALLIB_HEXAGONALMATH_ROTATE_OFFSET UNITYSDK_OFFSET(0x1C243230)
#define HEXAGONALLIB_HEXAGONALMATH_SIMILARTO_1_OFFSET UNITYSDK_OFFSET(0x1C243530)
#define HEXAGONALLIB_HEXAGONALMATH_SIMILARTO_OFFSET UNITYSDK_OFFSET(0x1C243460)

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalMath_TypeDefinitionIndex = 26232;

	class HexagonalMath : public ::System::Object
	{
	public:
		static ::System::ValueTuple_2<::System::Single, ::System::Single> Rotate(::System::ValueTuple_2<::System::Single, ::System::Single>& vector, ::System::Single degrees)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::ValueTuple_2<::System::Single, ::System::Single>&, ::System::Single))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALMATH_ROTATE_OFFSET))(vector, degrees);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> Normalize(::System::ValueTuple_2<::System::Single, ::System::Single>& vector)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::ValueTuple_2<::System::Single, ::System::Single>&))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALMATH_NORMALIZE_OFFSET))(vector);
		}

		static ::System::Boolean SimilarTo(::System::Single& a, ::System::Single& b)
		{
			return ((::System::Boolean(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALMATH_SIMILARTO_OFFSET))(a, b);
		}

		static ::System::Boolean SimilarTo_1(::System::ValueTuple_2<::System::Single, ::System::Single>& a, ::System::ValueTuple_2<::System::Single, ::System::Single>& b)
		{
			return ((::System::Boolean(*)(::System::ValueTuple_2<::System::Single, ::System::Single>&, ::System::ValueTuple_2<::System::Single, ::System::Single>&))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALMATH_SIMILARTO_1_OFFSET))(a, b);
		}
	};
}
