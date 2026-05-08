#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C16E220E4CC21C6E.h"
#include "unitysdk/Enum_3_C2DB0C2A375CF310.h"
#include "unitysdk/Struct_2_B595D7E1AE382BA3.h"
#include "unitysdk/Struct_2_D57A57246A9544D0.h"
#include "unitysdk/Struct_2_F321C8856A6A0498.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T1, typename T2, typename T3> class Class_0_16E4307DCC41950C_19;
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E2F_10;
template <typename T> class Class_0_16E4307DCC419505_342;

inline static constexpr unsigned int Class_1_E79EDAD43D7F93F2_TypeDefinitionIndex = 52460;

template <typename TPose, typename TIntrinsics, typename TOuterCtx>
class Class_1_E79EDAD43D7F93F2 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x0
	::Class_0_16E4307DCC419505_342<::Struct_2_B595D7E1AE382BA3<TPose, TIntrinsics, TOuterCtx>>* Field_1_1; // 0x0
	::System::Action_1<::Class_0_16E4307DCC41950C_19<TPose, TIntrinsics, TOuterCtx>*>* Field_1_2; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC41950C_19<TPose, TIntrinsics, TOuterCtx>*>* Field_1_3; // 0x0
	::System::Collections::Generic::Queue_1<::Struct_2_F321C8856A6A0498<TPose, TIntrinsics, TOuterCtx>>* Field_1_4; // 0x0
	::Class_3_B60F6C2F126D2E2F_10<TPose, TIntrinsics>* Field_1_5; // 0x0
	::System::Boolean Field_1_6; // 0x0
	::System::Boolean Field_1_7; // 0x0
	::System::Single Field_1_8; // 0x0
	::System::Single Field_1_9; // 0x0
	::Class_0_16E4307DCC41950C_19<TPose, TIntrinsics, TOuterCtx>* Field_1_10; // 0x0
	::Class_0_16E4307DCC41950C_19<TPose, TIntrinsics, TOuterCtx>* Field_1_11; // 0x0
	::Enum_3_C16E220E4CC21C6E Field_1_12; // 0x0
	::Class_0_16E4307DCC41950C_19<TPose, TIntrinsics, TOuterCtx>* Field_1_13; // 0x0
	::Enum_3_C16E220E4CC21C6E Field_1_14; // 0x0
	// static const ::System::Single Field_1_15; // 0x0
};
