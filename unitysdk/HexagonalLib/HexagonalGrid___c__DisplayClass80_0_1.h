#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2> class Action_2; }

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalGrid___c__DisplayClass80_0_1_TypeDefinitionIndex = 28866;

	template <typename T>
	class HexagonalGrid___c__DisplayClass80_0_1 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>>* setVertex; // 0x0
		::System::Action_2<::System::Int32, ::System::Int32>* setIndex; // 0x0
	};
}
