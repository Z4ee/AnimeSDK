#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_58B8517CA6259838_METHOD_1_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0x123D6E30)
#define CLASS_1_58B8517CA6259838_METHOD_1_3AA2881C6A163F67_OFFSET UNITYSDK_OFFSET(0x123D70F0)
#define CLASS_1_58B8517CA6259838_METHOD_1_EDECA392423D500E_OFFSET UNITYSDK_OFFSET(0x123D6ED0)
#define CLASS_1_58B8517CA6259838__CCTOR_OFFSET UNITYSDK_OFFSET(0x123D6D80)

inline static constexpr unsigned int Class_1_58B8517CA6259838_TypeDefinitionIndex = 52160;

class Class_1_58B8517CA6259838 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58B8517CA6259838_TypeDefinitionIndex)->GetStaticField(0x39530);
	}
	// static const ::System::Int32 Field_1_0 = 0x65; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x7FFFFFC3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58B8517CA6259838__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_1A425C083DDF2BB1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_58B8517CA6259838_METHOD_1_1A425C083DDF2BB1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_EDECA392423D500E(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_58B8517CA6259838_METHOD_1_EDECA392423D500E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3AA2881C6A163F67(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_58B8517CA6259838_METHOD_1_3AA2881C6A163F67_OFFSET))(a1);
	}
};
