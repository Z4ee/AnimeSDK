#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_8;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_954A4DE9C9E1313C_METHOD_1_0E21294D95729FAF_OFFSET UNITYSDK_OFFSET(0x1CF38020)
#define CLASS_1_954A4DE9C9E1313C_METHOD_1_4E2607B533A8296F_OFFSET UNITYSDK_OFFSET(0x1CF380A0)
#define CLASS_1_954A4DE9C9E1313C_METHOD_1_A6A58AAD4AE9F90E_OFFSET UNITYSDK_OFFSET(0x1CF37FF0)

inline static constexpr unsigned int Class_1_954A4DE9C9E1313C_TypeDefinitionIndex = 10794;

class Class_1_954A4DE9C9E1313C : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_8** StaticGet_CEOMOMFGGNF()
	{
		return (::Class_0_16E4307DCC419505_8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_954A4DE9C9E1313C_TypeDefinitionIndex)->GetStaticField(0x1A130);
	}

	static ::System::String* Method_1_A6A58AAD4AE9F90E()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_954A4DE9C9E1313C_METHOD_1_A6A58AAD4AE9F90E_OFFSET))();
	}

	static ::System::String* Method_1_0E21294D95729FAF(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_954A4DE9C9E1313C_METHOD_1_0E21294D95729FAF_OFFSET))(a1);
	}

	static ::Class_1_7A22A3DBEEDD1F80* Method_1_4E2607B533A8296F(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
	{
		return ((::Class_1_7A22A3DBEEDD1F80*(*)(::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_954A4DE9C9E1313C_METHOD_1_4E2607B533A8296F_OFFSET))(a1, a2, a3);
	}
};
