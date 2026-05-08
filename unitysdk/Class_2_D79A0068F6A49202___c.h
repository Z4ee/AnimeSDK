#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define CLASS_2_D79A0068F6A49202___C_METHOD_1_4C81D6FB33195411_OFFSET UNITYSDK_OFFSET(0x12472790)
#define CLASS_2_D79A0068F6A49202___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12472740)
#define CLASS_2_D79A0068F6A49202___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12472780)

inline static constexpr unsigned int Class_2_D79A0068F6A49202___c_TypeDefinitionIndex = 43650;

class Class_2_D79A0068F6A49202___c : public ::System::Object
{
public:
	static ::Class_2_D79A0068F6A49202___c** StaticGet___9()
	{
		return (::Class_2_D79A0068F6A49202___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D79A0068F6A49202___c_TypeDefinitionIndex)->GetStaticField(0x3E0C0);
	}
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__9_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D79A0068F6A49202___c_TypeDefinitionIndex)->GetStaticField(0x3E0C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D79A0068F6A49202___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D79A0068F6A49202___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4C81D6FB33195411(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_D79A0068F6A49202___C_METHOD_1_4C81D6FB33195411_OFFSET))(this, a1);
	}
};
