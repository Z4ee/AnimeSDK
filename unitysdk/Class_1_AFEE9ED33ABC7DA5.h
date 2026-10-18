#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/Struct_2_E70C193A39BC645E.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_400;
class Class_0_16E4307DCC419505_409;
class Class_0_16E4307DCC419505_417;
class Class_0_16E4307DCC419505_420;
class Class_0_16E4307DCC419505_425;
namespace R3 { class CompositeDisposable; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
template <typename T> class Class_0_16E4307DCC419505_421;
template <typename T> class Class_0_16E4307DCC419505_497;
template <typename T> class Class_1_BF64A3E806610DD3_1;
template <typename T> class Class_1_D90286A3143EECEC;

inline static constexpr unsigned int Class_1_AFEE9ED33ABC7DA5_TypeDefinitionIndex = 50017;

template <typename TViewModel>
class Class_1_AFEE9ED33ABC7DA5 : public ::System::Object
{
public:
	::System::Boolean GFAMGLFOMGI; // 0x0
	::System::Boolean CPFAPBMMDGE; // 0x0
	::System::Int32 EGHFBKJNALD; // 0x0
	::R3::CompositeDisposable* LCIIJAKKKIL; // 0x0
	::System::Collections::Generic::Stack_1<::Class_1_BF64A3E806610DD3_1<TViewModel>*>* CMGCNFPEABG; // 0x0
	TViewModel _ViewModel_k__BackingField; // 0x0
	::Class_0_16E4307DCC419505_400* _Logger_k__BackingField; // 0x0
	::Class_0_16E4307DCC419505_417* _ButtonClickGuard_k__BackingField; // 0x0
	::Struct_2_E70C193A39BC645E _Environment_k__BackingField; // 0x0
	::System::Object* _Subscriber_k__BackingField; // 0x0
	static ::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_0_16E4307DCC419505_421<TViewModel>*>** StaticGet_KJBEKBAIEBH()
	{
		return (::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_0_16E4307DCC419505_421<TViewModel>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFEE9ED33ABC7DA5_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
