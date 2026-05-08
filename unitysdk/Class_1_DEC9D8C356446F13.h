#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_DEC9D8C356446F13_TypeDefinitionIndex = 55440;

template <typename T>
class Class_1_DEC9D8C356446F13 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x0
	::System::Collections::Generic::List_1<T>* Field_1_1; // 0x0
	::System::Collections::Generic::List_1<T>* Field_1_2; // 0x0
	::System::Boolean Field_1_3; // 0x0
	::System::Boolean Field_1_4; // 0x0
	::System::Collections::Generic::IComparer_1<T>* Field_1_5; // 0x0
	::System::Boolean Field_1_6; // 0x0
	::System::Collections::Generic::HashSet_1<T>* Field_1_7; // 0x0
};
