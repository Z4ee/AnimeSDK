#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_B7D51556F33C391C_TypeDefinitionIndex = 76190;

template <typename T, typename P>
class Class_1_B7D51556F33C391C : public ::System::Object
{
public:
	::System::Func_2<T, P>* Field_1_1; // 0x0
	::System::Action_2<T, P>* Field_1_0; // 0x0
};
