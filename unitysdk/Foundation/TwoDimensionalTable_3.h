#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class TwoDimensionalTable_3_WrapperX_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int TwoDimensionalTable_3_TypeDefinitionIndex = 7745;

	template <typename TX, typename TY, typename V>
	class TwoDimensionalTable_3 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::TwoDimensionalTable_3_WrapperX_3<TX, TY, V, TX, TY, V>*>* _Data; // 0x0
	};
}
