#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_2_F31DCDFDEBE1730D_PackageTitleFileV2_TypeDefinitionIndex = 70762;

struct alignas(8) Class_2_F31DCDFDEBE1730D_PackageTitleFileV2
{
	::System::Int32 version; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* delete_; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* download; // 0x20
};
