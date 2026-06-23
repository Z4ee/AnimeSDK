#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
template <typename T1, typename T2> class Class_1_DD5009F722EC4683;

inline static constexpr unsigned int Class_1_DA4A34B49F753A06_Class_1_ACA74450A4F7BECA_TypeDefinitionIndex = 28239;

template <typename TPriority, typename TValue>
class Class_1_DA4A34B49F753A06_Class_1_ACA74450A4F7BECA : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::Class_1_DD5009F722EC4683<TPriority, TValue>*>* Field_1_0; // 0x0
	::System::Action_1<::Class_1_DD5009F722EC4683<TPriority, TValue>*>* Field_1_1; // 0x0
};
