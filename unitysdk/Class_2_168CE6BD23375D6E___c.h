#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6D1045A276B3030B;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_168CE6BD23375D6E___C_METHOD_1_8325A0AF3510E851_OFFSET UNITYSDK_OFFSET(0x1412B120)
#define CLASS_2_168CE6BD23375D6E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1412B0D0)
#define CLASS_2_168CE6BD23375D6E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1412B110)

inline static constexpr unsigned int Class_2_168CE6BD23375D6E___c_TypeDefinitionIndex = 75294;

class Class_2_168CE6BD23375D6E___c : public ::System::Object
{
public:
	static ::Class_2_168CE6BD23375D6E___c** StaticGet___9()
	{
		return (::Class_2_168CE6BD23375D6E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_168CE6BD23375D6E___c_TypeDefinitionIndex)->GetStaticField(0x2FEA0);
	}
	static ::System::Action_1<::Class_1_6D1045A276B3030B*>** StaticGet___9__25_0()
	{
		return (::System::Action_1<::Class_1_6D1045A276B3030B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_168CE6BD23375D6E___c_TypeDefinitionIndex)->GetStaticField(0x2FEA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_168CE6BD23375D6E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_168CE6BD23375D6E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8325A0AF3510E851(::Class_1_6D1045A276B3030B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D1045A276B3030B*))((::PBYTE)hIl2Cpp + CLASS_2_168CE6BD23375D6E___C_METHOD_1_8325A0AF3510E851_OFFSET))(this, a1);
	}
};
