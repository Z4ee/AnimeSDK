#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E70C193A39BC645E.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_400;
class Class_0_16E4307DCC419505_409;
class Class_0_16E4307DCC419505_417;
class Class_0_16E4307DCC419505_425;
class Class_2_E20841EBB69BC89F;
namespace R3 { class CompositeDisposable; }
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E26_3;
template <typename T> class Class_1_BF64A3E806610DD3_1;

inline static constexpr unsigned int Struct_2_85C948A9FFE82053_TypeDefinitionIndex = 44251;

template <typename TViewModel>
struct Struct_2_85C948A9FFE82053
{
	::Class_1_BF64A3E806610DD3_1<TViewModel>* _State_k__BackingField; // 0x0
	::System::Func_2<::System::Int32, ::System::Boolean>* _IsBindingActiveCallback_k__BackingField; // 0x0
	::System::Func_2<::System::Int32, ::Struct_2_85C948A9FFE82053<TViewModel>>* _CreateExecutionContextFactory_k__BackingField; // 0x0
	::System::Action* _EnsureMessengerCleanupRegistered_k__BackingField; // 0x0
	::System::Action_1<::Class_1_BF64A3E806610DD3_1<TViewModel>*>* _ReleaseStateCallback_k__BackingField; // 0x0
	TViewModel _ViewModel_k__BackingField; // 0x0
	::R3::CompositeDisposable* _Disposables_k__BackingField; // 0x0
	::Class_0_16E4307DCC419505_400* _Logger_k__BackingField; // 0x0
	::Class_0_16E4307DCC419505_417* _ButtonClickGuard_k__BackingField; // 0x0
	::Struct_2_E70C193A39BC645E _Environment_k__BackingField; // 0x0
	::System::Object* _Subscriber_k__BackingField; // 0x0
	::Class_2_E20841EBB69BC89F* _ApplyGate_k__BackingField; // 0x0
};
