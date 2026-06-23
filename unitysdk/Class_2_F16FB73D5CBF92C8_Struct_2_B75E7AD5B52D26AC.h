#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_F16FB73D5CBF92C8_STRUCT_2_B75E7AD5B52D26AC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7F45A0)
#define CLASS_2_F16FB73D5CBF92C8_STRUCT_2_B75E7AD5B52D26AC_EQUALS_OFFSET UNITYSDK_OFFSET(0x7F44D0)
#define CLASS_2_F16FB73D5CBF92C8_STRUCT_2_B75E7AD5B52D26AC_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7F45B0)

inline static constexpr unsigned int Class_2_F16FB73D5CBF92C8_Struct_2_B75E7AD5B52D26AC_TypeDefinitionIndex = 48360;

struct alignas(8) Class_2_F16FB73D5CBF92C8_Struct_2_B75E7AD5B52D26AC
{
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28

	::System::Boolean Equals(::Class_2_F16FB73D5CBF92C8_Struct_2_B75E7AD5B52D26AC a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F16FB73D5CBF92C8_Struct_2_B75E7AD5B52D26AC))((::PBYTE)hIl2Cpp + CLASS_2_F16FB73D5CBF92C8_STRUCT_2_B75E7AD5B52D26AC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F16FB73D5CBF92C8_STRUCT_2_B75E7AD5B52D26AC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F16FB73D5CBF92C8_STRUCT_2_B75E7AD5B52D26AC_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
