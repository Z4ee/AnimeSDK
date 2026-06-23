#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int DoubleEliteCardInfo_TypeDefinitionIndex = 80357;

	struct alignas(8) DoubleEliteCardInfo
	{
		::System::Collections::Generic::List_1<::System::Int32>* cardIds; // 0x10
		::System::Int32 waveId; // 0x18
	};
}
