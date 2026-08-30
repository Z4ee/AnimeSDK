#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2125243148F133F0;

#define CLASS_1_2125243148F133F0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00A750)
#define CLASS_1_2125243148F133F0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E00A790)
#define CLASS_1_2125243148F133F0___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E00A7A0)

inline static constexpr unsigned int Class_1_2125243148F133F0___c_TypeDefinitionIndex = 30131;

class Class_1_2125243148F133F0___c : public ::System::Object
{
public:
	static ::Class_1_2125243148F133F0___c** StaticGet___9()
	{
		return (::Class_1_2125243148F133F0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2125243148F133F0___c_TypeDefinitionIndex)->GetStaticField(0x5F820);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2125243148F133F0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2125243148F133F0___C__CTOR_OFFSET))(this);
	}

	::Class_1_2125243148F133F0* __cctor_b__43_0()
	{
		return ((::Class_1_2125243148F133F0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2125243148F133F0___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
