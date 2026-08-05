#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_125;
class Class_0_16E4307DCC419505_128;

#define CLASS_1_AF6785594583B63E_METHOD_1_24591D497EE23262_OFFSET UNITYSDK_OFFSET(0x1E3A4750)
#define CLASS_1_AF6785594583B63E_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x1E3B5A90)
#define CLASS_1_AF6785594583B63E_METHOD_1_B39750ADC1D200E3_OFFSET UNITYSDK_OFFSET(0x1E3B5DA0)
#define CLASS_1_AF6785594583B63E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B5A20)

inline static constexpr unsigned int Class_1_AF6785594583B63E_TypeDefinitionIndex = 34575;

class Class_1_AF6785594583B63E : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_128*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_128*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AF6785594583B63E_TypeDefinitionIndex)->GetStaticField(0x28ED0);
	}
	static ::Il2CppArray<::Class_0_16E4307DCC419505_125*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_125*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AF6785594583B63E_TypeDefinitionIndex)->GetStaticField(0x28ED8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AF6785594583B63E__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_3574512695A597AB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AF6785594583B63E_METHOD_1_3574512695A597AB_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_128* Method_1_24591D497EE23262(::Enum_3_63CAB6C405C6C7B1_2 a1)
	{
		return ((::Class_0_16E4307DCC419505_128*(*)(::Enum_3_63CAB6C405C6C7B1_2))((::PBYTE)hIl2Cpp + CLASS_1_AF6785594583B63E_METHOD_1_24591D497EE23262_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_128* Method_1_B39750ADC1D200E3(::Enum_3_63CAB6C405C6C7B1_2 a1)
	{
		return ((::Class_0_16E4307DCC419505_128*(*)(::Enum_3_63CAB6C405C6C7B1_2))((::PBYTE)hIl2Cpp + CLASS_1_AF6785594583B63E_METHOD_1_B39750ADC1D200E3_OFFSET))(a1);
	}
};
