#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A226797C5AEE9AC9.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_907978ED3DCB5F85_METHOD_1_031AB54FBBADF26A_OFFSET UNITYSDK_OFFSET(0x13815540)
#define CLASS_1_907978ED3DCB5F85_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x138155A0)
#define CLASS_1_907978ED3DCB5F85_METHOD_1_C1C5AB73E443B1B4_OFFSET UNITYSDK_OFFSET(0x138155E0)

inline static constexpr unsigned int Class_1_907978ED3DCB5F85_TypeDefinitionIndex = 55910;

class Class_1_907978ED3DCB5F85 : public ::System::Object
{
public:
	static ::Enum_3_A226797C5AEE9AC9* StaticGet_Field_1_0()
	{
		return (::Enum_3_A226797C5AEE9AC9*)Il2CppClass::FromTypeDefinitionIndex(Class_1_907978ED3DCB5F85_TypeDefinitionIndex)->GetStaticField(0xD8E0);
	}

	static ::System::Void Method_1_031AB54FBBADF26A(::Enum_3_A226797C5AEE9AC9 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Enum_3_A226797C5AEE9AC9, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_907978ED3DCB5F85_METHOD_1_031AB54FBBADF26A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_907978ED3DCB5F85_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4(::Enum_3_A226797C5AEE9AC9 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_A226797C5AEE9AC9))((::PBYTE)hIl2Cpp + CLASS_1_907978ED3DCB5F85_METHOD_1_C1C5AB73E443B1B4_OFFSET))(a1);
	}
};
