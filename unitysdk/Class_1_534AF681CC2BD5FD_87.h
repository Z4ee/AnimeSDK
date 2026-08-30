#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/CollectionChangedEvent_1.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/Struct_2_F67EA3F2FFD139F6.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_321;
class Class_0_16E4307DCC419505_407;
class Class_1_5F1B5D6380BD40EB;
class Class_1_C11F7D9FA222E14F;
namespace ObservableCollections { template <typename T> class IObservableCollection_1; }
namespace RPG::Client { class TabView; }
namespace Sofa { class BaseSofaControl; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2, typename T3> class Class_0_16E4307DCC41950C_2;

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_87_TypeDefinitionIndex = 50195;

template <typename TViewModel, typename TTabVM>
class Class_1_534AF681CC2BD5FD_87 : public ::System::Object
{
public:
	::RPG::Client::TabView* CFKHNPGEAJA; // 0x0
	::ObservableCollections::IObservableCollection_1<TTabVM>* BPKKKMOCFIP; // 0x0
	::Class_0_16E4307DCC419505_321* JKCNFDEAMDJ; // 0x0
	::Struct_2_F67EA3F2FFD139F6 LMOCIAGOJKN; // 0x0
	::Class_0_16E4307DCC41950C_2<TViewModel, TTabVM, ::RPG::Client::TabView*>* OAOKHCMOJHL; // 0x0
	::Class_0_16E4307DCC41950C_2<TViewModel, TTabVM, ::RPG::Client::TabView*>* OGGILOKMKPF; // 0x0
	::Class_0_16E4307DCC41950C_2<TViewModel, TTabVM, ::RPG::Client::TabView*>* CLHAHKLKHEH; // 0x0
	::System::Collections::Generic::List_1<::Class_1_5F1B5D6380BD40EB*>* KCEOMKFBICF; // 0x0
	::System::Collections::Generic::List_1<TTabVM>* EBPGELJFPMB; // 0x0
	::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* DOPOPBGJHEE; // 0x0
	::System::Collections::Generic::Dictionary_2<::Class_1_5F1B5D6380BD40EB*, ::Sofa::BaseSofaControl*>* NBBJNHOKBPA; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Sofa::BaseSofaControl*>* LMLNEHPMIHK; // 0x0
	::System::Collections::Generic::Dictionary_2<::Sofa::BaseSofaControl*, ::Class_1_C11F7D9FA222E14F*>* JODOGKPDIIA; // 0x0
	::System::Boolean GFAMGLFOMGI; // 0x0
	::System::IDisposable* EAFMELNOBOM; // 0x0
	::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* LPOBNMLKNGG; // 0x0
};
