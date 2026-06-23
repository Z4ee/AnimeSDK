#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_052D24B5000E6520.h"
#include "unitysdk/Struct_2_D7A853B9C26BE028.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_534AF681CC2BD5FD_259;

inline static constexpr unsigned int Class_1_978967D122AE914A_TypeDefinitionIndex = 29054;

template <typename TEvent>
class Class_1_978967D122AE914A : public ::System::Object
{
public:
	::Struct_2_D7A853B9C26BE028 Field_1_0; // 0x0
	::System::String* Field_1_1; // 0x0
	::Struct_2_D7A853B9C26BE028 Field_1_2; // 0x0
	::Struct_2_D7A853B9C26BE028 Field_1_3; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_052D24B5000E6520>* Field_1_4; // 0x0
	::System::Collections::Generic::List_1<::Class_2_534AF681CC2BD5FD_259<TEvent>*>* Field_1_5; // 0x0
};
