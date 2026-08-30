#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class IObservableCollection_1; }
namespace RPG::Client { class TabView; }
namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T1, typename T2, typename T3> class Class_0_16E4307DCC41950C_2;

inline static constexpr unsigned int Class_1_31E0BA12DA97D626_TypeDefinitionIndex = 50188;

template <typename TViewModel, typename TTabVM>
class Class_1_31E0BA12DA97D626 : public ::System::Object
{
public:
	::System::Func_2<TViewModel, ::ObservableCollections::IObservableCollection_1<TTabVM>*>* _CollectionSelector_k__BackingField; // 0x0
	::Class_0_16E4307DCC41950C_2<TViewModel, TTabVM, ::RPG::Client::TabView*>* _HeaderSelector_k__BackingField; // 0x0
	::Class_0_16E4307DCC41950C_2<TViewModel, TTabVM, ::RPG::Client::TabView*>* _ContentSelector_k__BackingField; // 0x0
	::Class_0_16E4307DCC41950C_2<TViewModel, TTabVM, ::RPG::Client::TabView*>* _DynamicContentSelector_k__BackingField; // 0x0
};
