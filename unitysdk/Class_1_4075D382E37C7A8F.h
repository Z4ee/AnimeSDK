#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9F6BC5882A626CDE.h"
#include "unitysdk/Struct_2_D57A57246A9544D0.h"
#include "unitysdk/Struct_2_F448758FAF3F7C96.h"
#include "unitysdk/System/Object.h"

class Class_3_D92ADC48CDFCC09B_2;
template <typename T1, typename T2, typename T3> class Class_0_16E4307DCC41950C_20;
template <typename T> class Class_0_16E4307DCC41950C_15;

inline static constexpr unsigned int Class_1_4075D382E37C7A8F_TypeDefinitionIndex = 54747;

template <typename TPose, typename TIntrinsics, typename TOuterCtx>
class Class_1_4075D382E37C7A8F : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x80; // 0x0
	::Class_0_16E4307DCC41950C_15<::Struct_2_9F6BC5882A626CDE<TPose, TIntrinsics, TOuterCtx>>* Field_1_2; // 0x0
	::Class_3_D92ADC48CDFCC09B_2* Field_1_3; // 0x0
	::System::Single Field_1_4; // 0x0
	::System::Boolean Field_1_5; // 0x0
	::System::Boolean Field_1_6; // 0x0
	::System::Boolean Field_1_7; // 0x0
	::Struct_2_D57A57246A9544D0<TPose, TIntrinsics> Field_1_8; // 0x0
	::Class_0_16E4307DCC41950C_20<TPose, TIntrinsics, ::Struct_2_F448758FAF3F7C96<TOuterCtx>>* Field_1_9; // 0x0
	::System::Boolean Field_1_10; // 0x0
	::Class_0_16E4307DCC41950C_20<TPose, TIntrinsics, ::Struct_2_F448758FAF3F7C96<TOuterCtx>>* Field_1_11; // 0x0
	::System::Boolean Field_1_12; // 0x0
	::System::Boolean Field_1_13; // 0x0
};
