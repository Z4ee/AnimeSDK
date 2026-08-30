#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class ListView; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_84F7740548BF6A22_TypeDefinitionIndex = 50178;

template <typename TViewModel, typename TItem>
class Class_1_84F7740548BF6A22 : public ::System::Object
{
public:
	::System::Func_2<TViewModel, ::R3::ReactiveProperty_1<TItem>*>* LNFJIDBLAFO; // 0x0
	::System::Boolean JFEGFCFFLFJ; // 0x0
};
