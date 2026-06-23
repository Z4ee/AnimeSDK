#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

inline static constexpr unsigned int Class_1_61BBA29226DBB5A9_TypeDefinitionIndex = 51111;

template <typename T>
class Class_1_61BBA29226DBB5A9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<T>* Field_1_0; // 0x0
	::System::Collections::Generic::Queue_1<::System::Int32>* Field_1_1; // 0x0
};
