#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

inline static constexpr unsigned int Struct_2_D3FBEE9DE3F34F60_TypeDefinitionIndex = 46420;

struct alignas(8) Struct_2_D3FBEE9DE3F34F60
{
	::System::Boolean Field_2_0; // 0x10
	::System::Func_1<::System::String*>* Field_2_1; // 0x18
	::System::Nullable_1<::MoleMole::InputLogicEventType> Field_2_2; // 0x20
	::System::Func_2<::System::Int32, ::System::Boolean>* Field_2_3; // 0x28
	::System::Int32 Field_2_4; // 0x30
};
