#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_00392973777A0501_Struct_2_184E9984C27D9F5C.h"
#include "unitysdk/Enum_3_63FBC162D4F4871C.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

inline static constexpr unsigned int Class_1_00392973777A0501_TypeDefinitionIndex = 69540;

template <typename TBase>
class Class_1_00392973777A0501 : public ::System::Object
{
public:
	::Il2CppArray<TBase>* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, TBase>* Field_1_1; // 0x0
	::Enum_3_63FBC162D4F4871C Field_1_2; // 0x0
};
