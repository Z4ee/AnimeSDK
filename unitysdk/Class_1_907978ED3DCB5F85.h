#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_593DE1CE3945E160.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_907978ED3DCB5F85_METHOD_1_031AB54FBBADF26A_OFFSET UNITYSDK_OFFSET(0x19639460)
#define CLASS_1_907978ED3DCB5F85_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x19639420)
#define CLASS_1_907978ED3DCB5F85_METHOD_1_C1C5AB73E443B1B4_OFFSET UNITYSDK_OFFSET(0x196393D0)

inline static constexpr unsigned int Class_1_907978ED3DCB5F85_TypeDefinitionIndex = 62927;

class Class_1_907978ED3DCB5F85 : public ::System::Object
{
public:
	static ::Enum_3_593DE1CE3945E160* StaticGet_Field_1_0()
	{
		return (::Enum_3_593DE1CE3945E160*)Il2CppClass::FromTypeDefinitionIndex(Class_1_907978ED3DCB5F85_TypeDefinitionIndex)->GetStaticField(0xE860);
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4(::Enum_3_593DE1CE3945E160 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_593DE1CE3945E160))((::PBYTE)hIl2Cpp + CLASS_1_907978ED3DCB5F85_METHOD_1_C1C5AB73E443B1B4_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_907978ED3DCB5F85_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_031AB54FBBADF26A(::Enum_3_593DE1CE3945E160 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Enum_3_593DE1CE3945E160, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_907978ED3DCB5F85_METHOD_1_031AB54FBBADF26A_OFFSET))(a1, a2);
	}
};
