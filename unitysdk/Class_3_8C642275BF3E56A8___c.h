#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B188CF501047173E;
class Class_3_C93CC3D2C2AC4067;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_8C642275BF3E56A8___C_METHOD_1_2066B693D3D0F431_OFFSET UNITYSDK_OFFSET(0x10F8C820)
#define CLASS_3_8C642275BF3E56A8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F8C7D0)
#define CLASS_3_8C642275BF3E56A8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F8C810)

inline static constexpr unsigned int Class_3_8C642275BF3E56A8___c_TypeDefinitionIndex = 54960;

class Class_3_8C642275BF3E56A8___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_C93CC3D2C2AC4067*, ::Class_3_B188CF501047173E*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_3_C93CC3D2C2AC4067*, ::Class_3_B188CF501047173E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C642275BF3E56A8___c_TypeDefinitionIndex)->GetStaticField(0x3C5F0);
	}
	static ::Class_3_8C642275BF3E56A8___c** StaticGet___9()
	{
		return (::Class_3_8C642275BF3E56A8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C642275BF3E56A8___c_TypeDefinitionIndex)->GetStaticField(0x3C5F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8C642275BF3E56A8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C642275BF3E56A8___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2066B693D3D0F431(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_B188CF501047173E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_B188CF501047173E*))((::PBYTE)hIl2Cpp + CLASS_3_8C642275BF3E56A8___C_METHOD_1_2066B693D3D0F431_OFFSET))(this, a1, a2);
	}
};
