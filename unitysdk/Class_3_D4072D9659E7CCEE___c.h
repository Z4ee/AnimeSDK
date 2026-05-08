#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_14AE4CFCAF24E59E;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D4072D9659E7CCEE___C_METHOD_1_CF1278A1ACE8205E_OFFSET UNITYSDK_OFFSET(0xF0C5920)
#define CLASS_3_D4072D9659E7CCEE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF0C58D0)
#define CLASS_3_D4072D9659E7CCEE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF0C5910)

inline static constexpr unsigned int Class_3_D4072D9659E7CCEE___c_TypeDefinitionIndex = 56148;

class Class_3_D4072D9659E7CCEE___c : public ::System::Object
{
public:
	static ::Class_3_D4072D9659E7CCEE___c** StaticGet___9()
	{
		return (::Class_3_D4072D9659E7CCEE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D4072D9659E7CCEE___c_TypeDefinitionIndex)->GetStaticField(0x2FC80);
	}
	static ::System::Action_1<::Class_3_14AE4CFCAF24E59E*>** StaticGet___9__26_0()
	{
		return (::System::Action_1<::Class_3_14AE4CFCAF24E59E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D4072D9659E7CCEE___c_TypeDefinitionIndex)->GetStaticField(0x2FC88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D4072D9659E7CCEE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4072D9659E7CCEE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CF1278A1ACE8205E(::Class_3_14AE4CFCAF24E59E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_14AE4CFCAF24E59E*))((::PBYTE)hIl2Cpp + CLASS_3_D4072D9659E7CCEE___C_METHOD_1_CF1278A1ACE8205E_OFFSET))(this, a1);
	}
};
