#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/Struct_2_F67EA3F2FFD139F6.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_321;
class Class_0_16E4307DCC419505_330;
class Class_0_16E4307DCC419505_333;
class Class_0_16E4307DCC419505_338;
class Class_0_16E4307DCC419505_339;
namespace R3 { class CompositeDisposable; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
template <typename T> class Class_0_16E4307DCC419505_334;
template <typename T> class Class_0_16E4307DCC419505_410;
template <typename T> class Class_1_5A1150DCA2AD2E56;
template <typename T> class Class_1_D90286A3143EECEC;

inline static constexpr unsigned int Class_1_AFEE9ED33ABC7DA5_TypeDefinitionIndex = 50341;

template <typename TViewModel>
class Class_1_AFEE9ED33ABC7DA5 : public ::System::Object
{
public:
	::System::Boolean GFAMGLFOMGI; // 0x0
	::System::Boolean CPFAPBMMDGE; // 0x0
	::System::Int32 EGHFBKJNALD; // 0x0
	::R3::CompositeDisposable* LCIIJAKKKIL; // 0x0
	::System::Collections::Generic::Stack_1<::Class_1_5A1150DCA2AD2E56<TViewModel>*>* CMGCNFPEABG; // 0x0
	TViewModel _ViewModel_k__BackingField; // 0x0
	::Class_0_16E4307DCC419505_321* _Logger_k__BackingField; // 0x0
	::Class_0_16E4307DCC419505_330* _ButtonClickGuard_k__BackingField; // 0x0
	::Struct_2_F67EA3F2FFD139F6 _Environment_k__BackingField; // 0x0
	::System::Object* _Subscriber_k__BackingField; // 0x0
	static ::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_0_16E4307DCC419505_334<TViewModel>*>** StaticGet_KJBEKBAIEBH()
	{
		return (::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_0_16E4307DCC419505_334<TViewModel>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFEE9ED33ABC7DA5_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
