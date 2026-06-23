#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_3_B60F6C2F126D2E26_7;
template <typename T> class Class_3_B60F6C2F126D2E2F_7;

inline static constexpr unsigned int Class_1_6EF07FD8A218CC4A_TypeDefinitionIndex = 45977;

template <typename T>
class Class_1_6EF07FD8A218CC4A : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6EF07FD8A218CC4A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::String* Field_1_1; // 0x0
	::System::UInt64 Field_1_2; // 0x0
	T Field_1_3; // 0x0
	::System::Single Field_1_4; // 0x0
	::System::Func_1<::System::Single>* Field_1_5; // 0x0
};
