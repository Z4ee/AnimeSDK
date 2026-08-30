#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_103_Class_1_21133A4C86B29C42_TypeDefinitionIndex = 50284;

template <typename TViewModel, typename TView, typename TValue>
class Class_1_534AF681CC2BD5FD_103_Class_1_21133A4C86B29C42 : public ::System::Object
{
public:
	::System::Func_2<TViewModel, ::R3::ReactiveProperty_1<TValue>*>* LMDHPABCOAB; // 0x0
	::System::Action_2<TView, TValue>* FLHKJCCMNDM; // 0x0
	::System::Action_2<TView, ::UnityEngine::Events::UnityAction_1<TValue>*>* COOAHJHCNDL; // 0x0
	::System::Action_2<TView, ::UnityEngine::Events::UnityAction_1<TValue>*>* OJOGEAOONBB; // 0x0
};
