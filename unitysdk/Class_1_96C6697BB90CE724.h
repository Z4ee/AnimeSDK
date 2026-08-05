#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6AB4248C2C2900A2.h"
#include "unitysdk/Enum_3_FAE7866087AC42D3.h"
#include "unitysdk/Struct_2_8C4E6B3BD481E7BD.h"
#include "unitysdk/Struct_2_D57A57246A9544D0.h"
#include "unitysdk/System/Object.h"

template <typename T1, typename T2, typename T3> class Class_0_16E4307DCC41950C_20;

inline static constexpr unsigned int Class_1_96C6697BB90CE724_TypeDefinitionIndex = 42771;

template <typename TPose, typename TIntrinsics, typename TOuterCtx>
class Class_1_96C6697BB90CE724 : public ::System::Object
{
public:
	::System::Single Field_1_3; // 0x0
	::Class_0_16E4307DCC41950C_20<TPose, TIntrinsics, ::Struct_2_8C4E6B3BD481E7BD<TOuterCtx>>* Field_1_2; // 0x0
	::Enum_3_FAE7866087AC42D3 Field_1_1; // 0x0
	::System::Single Field_1_0; // 0x0
	::Enum_3_6AB4248C2C2900A2 Field_1_7; // 0x0
	::System::Boolean Field_1_6; // 0x0
	::Struct_2_D57A57246A9544D0<TPose, TIntrinsics> Field_1_5; // 0x0
	::System::Boolean Field_1_4; // 0x0
};
