#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D57A57246A9544D0.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T1, typename T2, typename T3> class Class_0_16E4307DCC41950C_20;

inline static constexpr unsigned int Class_1_4C2169A8EE49F00D_Class_1_9F06EE0752222DB6_TypeDefinitionIndex = 56192;

template <typename TPose, typename TIntrinsics, typename TOuterCtx, typename TInnerCtx>
class Class_1_4C2169A8EE49F00D_Class_1_9F06EE0752222DB6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC41950C_20<TPose, TIntrinsics, TOuterCtx>* Field_1_0; // 0x0
	::Class_0_16E4307DCC41950C_20<TPose, TIntrinsics, TInnerCtx>* Field_1_1; // 0x0
	::System::Func_2<TOuterCtx, TInnerCtx>* Field_1_2; // 0x0
};
