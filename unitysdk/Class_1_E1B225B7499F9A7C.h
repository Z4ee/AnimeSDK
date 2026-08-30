#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace RPG::Client { class ListView; }
namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T1, typename T2, typename T3> class Class_0_16E4307DCC41950C_2;

inline static constexpr unsigned int Class_1_E1B225B7499F9A7C_TypeDefinitionIndex = 50169;

template <typename TViewModel, typename TItemVM>
class Class_1_E1B225B7499F9A7C : public ::System::Object
{
public:
	::System::Func_2<TViewModel, ::ObservableCollections::ObservableList_1<TItemVM>*>* _CollectionSelector_k__BackingField; // 0x0
	::Class_0_16E4307DCC41950C_2<TViewModel, TItemVM, ::RPG::Client::ListView*>* _ItemSelector_k__BackingField; // 0x0
};
