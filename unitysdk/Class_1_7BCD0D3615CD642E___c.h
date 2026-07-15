#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BCD0D3615CD642E;

#define CLASS_1_7BCD0D3615CD642E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAE0100)
#define CLASS_1_7BCD0D3615CD642E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE0140)
#define CLASS_1_7BCD0D3615CD642E___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1CAE0150)

inline static constexpr unsigned int Class_1_7BCD0D3615CD642E___c_TypeDefinitionIndex = 27329;

class Class_1_7BCD0D3615CD642E___c : public ::System::Object
{
public:
	static ::Class_1_7BCD0D3615CD642E___c** StaticGet___9()
	{
		return (::Class_1_7BCD0D3615CD642E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7BCD0D3615CD642E___c_TypeDefinitionIndex)->GetStaticField(0x599B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7BCD0D3615CD642E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BCD0D3615CD642E___C__CTOR_OFFSET))(this);
	}

	::Class_1_7BCD0D3615CD642E* __cctor_b__43_0()
	{
		return ((::Class_1_7BCD0D3615CD642E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BCD0D3615CD642E___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
