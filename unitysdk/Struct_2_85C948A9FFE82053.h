#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F67EA3F2FFD139F6.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_321;
class Class_0_16E4307DCC419505_330;
class Class_0_16E4307DCC419505_338;
class Class_0_16E4307DCC419505_339;
namespace R3 { class CompositeDisposable; }
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E26;
template <typename T> class Class_1_5A1150DCA2AD2E56;

inline static constexpr unsigned int Struct_2_85C948A9FFE82053_TypeDefinitionIndex = 42445;

template <typename TViewModel>
struct Struct_2_85C948A9FFE82053
{
	::Class_1_5A1150DCA2AD2E56<TViewModel>* _State_k__BackingField; // 0x0
	::System::Func_2<::System::Int32, ::System::Boolean>* _IsBindingActiveCallback_k__BackingField; // 0x0
	::System::Func_2<::System::Int32, ::Struct_2_85C948A9FFE82053<TViewModel>>* _CreateExecutionContextFactory_k__BackingField; // 0x0
	::System::Action* _EnsureMessengerCleanupRegistered_k__BackingField; // 0x0
	::System::Action_1<::Class_1_5A1150DCA2AD2E56<TViewModel>*>* _ReleaseStateCallback_k__BackingField; // 0x0
	TViewModel _ViewModel_k__BackingField; // 0x0
	::R3::CompositeDisposable* _Disposables_k__BackingField; // 0x0
	::Class_0_16E4307DCC419505_321* _Logger_k__BackingField; // 0x0
	::Class_0_16E4307DCC419505_330* _ButtonClickGuard_k__BackingField; // 0x0
	::Struct_2_F67EA3F2FFD139F6 _Environment_k__BackingField; // 0x0
	::System::Object* _Subscriber_k__BackingField; // 0x0
};
