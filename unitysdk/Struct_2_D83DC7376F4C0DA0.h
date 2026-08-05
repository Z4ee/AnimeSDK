#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F6FDB969A71984E3.h"
#include "unitysdk/MoleMole/BubbleType.h"
#include "unitysdk/MoleMole/FairyTextUpdateType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

inline static constexpr unsigned int Struct_2_D83DC7376F4C0DA0_TypeDefinitionIndex = 42328;

struct alignas(8) Struct_2_D83DC7376F4C0DA0
{
	::MoleMole::BubbleType Field_2_0; // 0x10
	::System::Boolean Field_2_7; // 0x14
	::Enum_3_F6FDB969A71984E3 Field_2_6; // 0x18
	::System::String* Field_2_5; // 0x20
	::System::String* Field_2_4; // 0x28
	::System::Func_1<::System::ValueTuple_2<::System::String*, ::MoleMole::FairyTextUpdateType>>* Field_2_11; // 0x30
	::System::Func_1<::MoleMole::Level::RatingType>* Field_2_10; // 0x38
	::System::Func_1<::System::Single>* Field_2_9; // 0x40
	::System::Boolean Field_2_8; // 0x48
};
