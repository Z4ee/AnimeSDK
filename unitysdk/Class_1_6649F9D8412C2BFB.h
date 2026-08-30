#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/CollectionChangedEvent_1.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/Struct_2_F67EA3F2FFD139F6.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_321;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace RPG::Client { class ListView; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
template <typename T1, typename T2, typename T3> class Class_0_16E4307DCC41950C_2;

inline static constexpr unsigned int Class_1_6649F9D8412C2BFB_TypeDefinitionIndex = 50170;

template <typename TViewModel, typename TItemVM>
class Class_1_6649F9D8412C2BFB : public ::System::Object
{
public:
	::Class_0_16E4307DCC41950C_2<TViewModel, TItemVM, ::RPG::Client::ListView*>* ECPJOPKNKIH; // 0x0
	::RPG::Client::ListView* MMHKNDDCKNM; // 0x0
	::ObservableCollections::ObservableList_1<TItemVM>* BPKKKMOCFIP; // 0x0
	::Class_0_16E4307DCC419505_321* JKCNFDEAMDJ; // 0x0
	::Struct_2_F67EA3F2FFD139F6 LMOCIAGOJKN; // 0x0
	::System::IDisposable* EAFMELNOBOM; // 0x0
	::System::Boolean GFAMGLFOMGI; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::IDisposable*>* KKGKAAFGMOI; // 0x0
};
