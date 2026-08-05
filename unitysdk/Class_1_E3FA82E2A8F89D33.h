#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_6EF07FD8A218CC4A;

inline static constexpr unsigned int Class_1_E3FA82E2A8F89D33_TypeDefinitionIndex = 61852;

template <typename T>
class Class_1_E3FA82E2A8F89D33 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3FA82E2A8F89D33_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::Class_1_6EF07FD8A218CC4A<T>*>* Field_1_0; // 0x0
};
