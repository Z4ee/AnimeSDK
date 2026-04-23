#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_23;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_954A4DE9C9E1313C_METHOD_1_235AFB949BB83110_OFFSET UNITYSDK_OFFSET(0x187ADA20)
#define CLASS_1_954A4DE9C9E1313C_METHOD_1_4E2607B533A8296F_OFFSET UNITYSDK_OFFSET(0x187A14D0)
#define CLASS_1_954A4DE9C9E1313C_METHOD_1_58E6E704E22424D4_OFFSET UNITYSDK_OFFSET(0x187ADA50)

inline static constexpr unsigned int Class_1_954A4DE9C9E1313C_TypeDefinitionIndex = 23658;

class Class_1_954A4DE9C9E1313C : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_23** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_23**)Il2CppClass::FromTypeDefinitionIndex(Class_1_954A4DE9C9E1313C_TypeDefinitionIndex)->GetStaticField(0x11070);
	}

	static ::System::String* Method_1_235AFB949BB83110()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_954A4DE9C9E1313C_METHOD_1_235AFB949BB83110_OFFSET))();
	}

	static ::System::String* Method_1_58E6E704E22424D4(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_954A4DE9C9E1313C_METHOD_1_58E6E704E22424D4_OFFSET))(a1);
	}

	static ::Class_1_7A22A3DBEEDD1F80* Method_1_4E2607B533A8296F(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
	{
		return ((::Class_1_7A22A3DBEEDD1F80*(*)(::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_954A4DE9C9E1313C_METHOD_1_4E2607B533A8296F_OFFSET))(a1, a2, a3);
	}
};
