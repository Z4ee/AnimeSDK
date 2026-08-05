#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

inline static constexpr unsigned int Struct_2_81F98DEA0622D5F1_TypeDefinitionIndex = 52687;

struct alignas(8) Struct_2_81F98DEA0622D5F1
{
	::System::UInt32 Field_2_2; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x18
};
