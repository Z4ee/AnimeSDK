#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_954A4DE9C9E1313C_METHOD_1_4E2607B533A8296F_OFFSET UNITYSDK_OFFSET(0x191959D0)
#define CLASS_1_954A4DE9C9E1313C_METHOD_1_58E6E704E22424D4_OFFSET UNITYSDK_OFFSET(0x19195950)
#define CLASS_1_954A4DE9C9E1313C_METHOD_1_A6A58AAD4AE9F90E_OFFSET UNITYSDK_OFFSET(0x19195920)

inline static constexpr unsigned int Class_1_954A4DE9C9E1313C_TypeDefinitionIndex = 10403;

class Class_1_954A4DE9C9E1313C : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_7** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_954A4DE9C9E1313C_TypeDefinitionIndex)->GetStaticField(0x271A0);
	}

	static ::System::String* Method_1_A6A58AAD4AE9F90E()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_954A4DE9C9E1313C_METHOD_1_A6A58AAD4AE9F90E_OFFSET))();
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
