#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_320C82F6FBE288EC_STRUCT_2_B75E7AD5B52D26AC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x70CB30)
#define CLASS_2_320C82F6FBE288EC_STRUCT_2_B75E7AD5B52D26AC_EQUALS_OFFSET UNITYSDK_OFFSET(0x70CA60)
#define CLASS_2_320C82F6FBE288EC_STRUCT_2_B75E7AD5B52D26AC_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x70CB40)

inline static constexpr unsigned int Class_2_320C82F6FBE288EC_Struct_2_B75E7AD5B52D26AC_TypeDefinitionIndex = 66912;

struct alignas(8) Class_2_320C82F6FBE288EC_Struct_2_B75E7AD5B52D26AC
{
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_7; // 0x18
	::System::String* Field_2_6; // 0x20
	::System::String* Field_2_5; // 0x28

	::System::Boolean Equals(::Class_2_320C82F6FBE288EC_Struct_2_B75E7AD5B52D26AC a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_320C82F6FBE288EC_Struct_2_B75E7AD5B52D26AC))((::PBYTE)hIl2Cpp + CLASS_2_320C82F6FBE288EC_STRUCT_2_B75E7AD5B52D26AC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_320C82F6FBE288EC_STRUCT_2_B75E7AD5B52D26AC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_320C82F6FBE288EC_STRUCT_2_B75E7AD5B52D26AC_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
