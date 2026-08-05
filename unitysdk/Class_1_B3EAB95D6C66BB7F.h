#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B3EAB95D6C66BB7F_Struct_2_184E9984C27D9F5C.h"
#include "unitysdk/Enum_3_63FBC162D4F4871C.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

inline static constexpr unsigned int Class_1_B3EAB95D6C66BB7F_TypeDefinitionIndex = 46039;

template <typename TBase>
class Class_1_B3EAB95D6C66BB7F : public ::System::Object
{
public:
	::Il2CppArray<TBase>* Field_1_1; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, TBase>* Field_1_0; // 0x0
	::Enum_3_63FBC162D4F4871C Field_1_7; // 0x0
};
