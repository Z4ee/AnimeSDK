#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class StackTrace; }

inline static constexpr unsigned int Class_1_E6EC0D4D3F718ACE_TypeDefinitionIndex = 47433;

template <typename TDelegate>
class Class_1_E6EC0D4D3F718ACE : public ::System::Object
{
public:
	::System::Diagnostics::StackTrace* _StackTrace_k__BackingField; // 0x0
	::System::Collections::Generic::List_1<TDelegate>* Field_1_1; // 0x0
};
