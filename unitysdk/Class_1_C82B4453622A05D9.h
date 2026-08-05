#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

inline static constexpr unsigned int Class_1_C82B4453622A05D9_TypeDefinitionIndex = 29605;

template <typename T>
class Class_1_C82B4453622A05D9 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, T>* Field_1_7; // 0x0
	::System::Collections::Generic::Queue_1<::System::UInt32>* Field_1_6; // 0x0
};
