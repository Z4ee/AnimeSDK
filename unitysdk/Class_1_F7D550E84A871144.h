#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F7D550E84A871144_Struct_2_9B3C7D682B42C22D.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_F7D550E84A871144_TypeDefinitionIndex = 49429;

template <typename T>
class Class_1_F7D550E84A871144 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F7D550E84A871144_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::Class_1_F7D550E84A871144_Struct_2_9B3C7D682B42C22D<T>>* Field_1_1; // 0x0
	T Field_1_2; // 0x0
	::System::Action* Field_1_3; // 0x0
};
