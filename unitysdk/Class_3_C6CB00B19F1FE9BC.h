#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_534AF681CC2BD5FD_188.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxVector.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

inline static constexpr unsigned int Class_3_C6CB00B19F1FE9BC_TypeDefinitionIndex = 17469;

template <typename T>
class Class_3_C6CB00B19F1FE9BC : public ::Class_2_534AF681CC2BD5FD_188<T>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, T>* Field_3_3; // 0x0
	::FlexBuffers::FlxMap Field_3_2; // 0x0
	::FlexBuffers::FlxVector Field_3_1; // 0x0
	::System::Boolean Field_3_0; // 0x0
	::System::Boolean Field_3_7; // 0x0
};
