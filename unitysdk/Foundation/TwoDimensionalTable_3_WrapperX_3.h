#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2, typename T3, typename T4, typename T5> class TwoDimensionalTable_3_Wrapper_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int TwoDimensionalTable_3_WrapperX_3_TypeDefinitionIndex = 7878;

	template <typename TX, typename TY, typename V, typename TX, typename TY, typename V>
	class TwoDimensionalTable_3_WrapperX_3 : public ::System::Object
	{
	public:
		TX X; // 0x0
		::System::Collections::Generic::List_1<::Foundation::TwoDimensionalTable_3_Wrapper_2<TX, TY, V, TY, V>*>* Data; // 0x0
	};
}
