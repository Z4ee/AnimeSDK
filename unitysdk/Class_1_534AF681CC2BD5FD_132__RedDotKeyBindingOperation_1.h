#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class Observable_1; }
namespace RPG::Client::RedDot { class RedDotControl; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_132__RedDotKeyBindingOperation_1_TypeDefinitionIndex = 78705;

template <typename TViewModel>
class Class_1_534AF681CC2BD5FD_132__RedDotKeyBindingOperation_1 : public ::System::Object
{
public:
	::System::Func_2<TViewModel, ::R3::Observable_1<::System::String*>*>* _KeySelector; // 0x0
};
