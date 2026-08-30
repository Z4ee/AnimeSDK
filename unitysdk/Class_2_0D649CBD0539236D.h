#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

class Class_0_16E4307DCC419505_321;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

inline static constexpr unsigned int Class_2_0D649CBD0539236D_TypeDefinitionIndex = 50285;

template <typename TView, typename TValue>
class Class_2_0D649CBD0539236D : public ::R3::Observer_1<TValue>
{
public:
	::System::Action_2<TView, TValue>* FLHKJCCMNDM; // 0x0
	::System::Action_2<TView, ::UnityEngine::Events::UnityAction_1<TValue>*>* OJOGEAOONBB; // 0x0
	::Class_0_16E4307DCC419505_321* JKCNFDEAMDJ; // 0x0
	::UnityEngine::Events::UnityAction_1<TValue>* MBOEDFCNCJF; // 0x0
	TView NENAMPHDEBK; // 0x0
	::R3::ReactiveProperty_1<TValue>* AGFAPPGGKMA; // 0x0
	::System::Boolean JGBDJCKDILB; // 0x0
};
