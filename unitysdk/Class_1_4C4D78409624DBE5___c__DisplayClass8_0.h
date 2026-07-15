#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_2_534AF681CC2BD5F4;

inline static constexpr unsigned int Class_1_4C4D78409624DBE5___c__DisplayClass8_0_TypeDefinitionIndex = 47391;

template <typename T>
class Class_1_4C4D78409624DBE5___c__DisplayClass8_0 : public ::System::Object
{
public:
	::System::Int32 remainingCount; // 0x0
	::Class_2_534AF681CC2BD5F4<T>* resPromise; // 0x0
	::System::Action_1<T>* __9__0; // 0x0
	::System::Action_1<::System::Exception*>* __9__1; // 0x0
	::System::Func_2<::System::Exception*, T>* __9__2; // 0x0
};
