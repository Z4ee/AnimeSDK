#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DF2C726EEEEC912D;
class Class_3_06F526E9A8E279F3;

#define CLASS_1_B9E2BF526B2D3C5C_METHOD_1_6CFAEAA9B715F18D_OFFSET UNITYSDK_OFFSET(0x167FEE80)
#define CLASS_1_B9E2BF526B2D3C5C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167FEE60)

inline static constexpr unsigned int Class_1_B9E2BF526B2D3C5C_TypeDefinitionIndex = 86260;

class Class_1_B9E2BF526B2D3C5C : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9E2BF526B2D3C5C_TypeDefinitionIndex)->GetStaticField(0x105A0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9E2BF526B2D3C5C_TypeDefinitionIndex)->GetStaticField(0x105A4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9E2BF526B2D3C5C__CCTOR_OFFSET))();
	}

	static ::Class_3_06F526E9A8E279F3* Method_1_6CFAEAA9B715F18D(::Class_2_DF2C726EEEEC912D* a1)
	{
		return ((::Class_3_06F526E9A8E279F3*(*)(::Class_2_DF2C726EEEEC912D*))((::PBYTE)hIl2Cpp + CLASS_1_B9E2BF526B2D3C5C_METHOD_1_6CFAEAA9B715F18D_OFFSET))(a1);
	}
};
