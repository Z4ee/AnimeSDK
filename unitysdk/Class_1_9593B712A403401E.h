#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_9593B712A403401E_TypeDefinitionIndex = 41441;

template <typename TSource, typename TTarget>
class Class_1_9593B712A403401E : public ::System::Object
{
public:
	::System::Func_2<TSource, TTarget>* Field_1_0; // 0x0
	::System::Func_2<TTarget, TSource>* Field_1_1; // 0x0
};
