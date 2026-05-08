#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2A15960F786F504C.h"
#include "unitysdk/Struct_2_D57A57246A9544D0.h"
#include "unitysdk/Struct_2_F448758FAF3F7C96.h"
#include "unitysdk/System/Object.h"

template <typename T1, typename T2, typename T3> class Class_0_16E4307DCC41950C_20;

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_262_Class_1_8F1B52CE4B18BF80_TypeDefinitionIndex = 41029;

template <typename TPose, typename TIntrinsics, typename TOuterCtx, typename TClock>
class Class_1_534AF681CC2BD5FD_262_Class_1_8F1B52CE4B18BF80 : public ::System::Object
{
public:
	::Class_0_16E4307DCC41950C_20<TPose, TIntrinsics, ::Struct_2_F448758FAF3F7C96<TOuterCtx>>* Field_1_0; // 0x0
	::System::Single Field_1_1; // 0x0
	TClock Field_1_2; // 0x0
};
