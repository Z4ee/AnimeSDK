#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_1_4C4D78409624DBE5;
template <typename T> class Class_2_534AF681CC2BD5F4;

inline static constexpr unsigned int Class_1_4C4D78409624DBE5___c__DisplayClass6_0_TypeDefinitionIndex = 47389;

template <typename T>
class Class_1_4C4D78409624DBE5___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::Action_1<T>* onResolved; // 0x0
	::Class_1_4C4D78409624DBE5<T>* __4__this; // 0x0
	::Class_2_534AF681CC2BD5F4<T>* promise; // 0x0
	::System::Action_1<::System::Exception*>* onRejected; // 0x0
};
