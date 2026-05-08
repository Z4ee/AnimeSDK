#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_B993F2995B37C2BE_TypeDefinitionIndex = 62608;

template <typename TComponent1, typename TComponent2, typename TValue>
class Class_1_F29C68BEB3C6B152_Class_1_B993F2995B37C2BE : public ::System::Object
{
public:
	::System::Action_2<TComponent1, ::System::Collections::Generic::IEnumerable_1<TValue>*>* Field_1_0; // 0x0
	TComponent1 Field_1_1; // 0x0
	::System::Action_2<TComponent2, ::System::Collections::Generic::IEnumerable_1<TValue>*>* Field_1_2; // 0x0
	TComponent2 Field_1_3; // 0x0
};
