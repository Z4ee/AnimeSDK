#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/CollectionChangedEvent_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_321;
namespace ObservableCollections { template <typename T> class IObservableCollection_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class ListView; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

inline static constexpr unsigned int Class_1_A3938DE791DEC64D_TypeDefinitionIndex = 50179;

template <typename TItem>
class Class_1_A3938DE791DEC64D : public ::System::Object
{
public:
	::RPG::Client::ListView* MMHKNDDCKNM; // 0x0
	::R3::ReactiveProperty_1<TItem>* KIKKCLIPHEM; // 0x0
	::ObservableCollections::IObservableCollection_1<TItem>* BPKKKMOCFIP; // 0x0
	::System::Boolean JFEGFCFFLFJ; // 0x0
	::Class_0_16E4307DCC419505_321* JKCNFDEAMDJ; // 0x0
	::System::IDisposable* GCCEMJHELAH; // 0x0
	::System::IDisposable* CPGAECFACBL; // 0x0
	::System::Collections::Generic::Dictionary_2<TItem, ::System::IDisposable*>* BDKIOBJJGGK; // 0x0
	TItem PCLAHAIKNPG; // 0x0
	::System::Boolean JGBDJCKDILB; // 0x0
	::System::Boolean GFAMGLFOMGI; // 0x0
};
