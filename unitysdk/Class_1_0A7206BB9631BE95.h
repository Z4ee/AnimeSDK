#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_127;
class Class_0_16E4307DCC419505_130;

#define CLASS_1_0A7206BB9631BE95_METHOD_1_24591D497EE23262_OFFSET UNITYSDK_OFFSET(0x1CF7F4B0)
#define CLASS_1_0A7206BB9631BE95_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x1CF853E0)
#define CLASS_1_0A7206BB9631BE95_METHOD_1_B39750ADC1D200E3_OFFSET UNITYSDK_OFFSET(0x1CF856E0)
#define CLASS_1_0A7206BB9631BE95__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF85370)

inline static constexpr unsigned int Class_1_0A7206BB9631BE95_TypeDefinitionIndex = 33931;

class Class_1_0A7206BB9631BE95 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_130*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_130*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A7206BB9631BE95_TypeDefinitionIndex)->GetStaticField(0x27680);
	}
	static ::Il2CppArray<::Class_0_16E4307DCC419505_127*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_127*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A7206BB9631BE95_TypeDefinitionIndex)->GetStaticField(0x27688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A7206BB9631BE95__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_130* Method_1_24591D497EE23262(::Enum_3_63CAB6C405C6C7B1_1 a1)
	{
		return ((::Class_0_16E4307DCC419505_130*(*)(::Enum_3_63CAB6C405C6C7B1_1))((::PBYTE)hIl2Cpp + CLASS_1_0A7206BB9631BE95_METHOD_1_24591D497EE23262_OFFSET))(a1);
	}

	static ::System::Void Method_1_3574512695A597AB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A7206BB9631BE95_METHOD_1_3574512695A597AB_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_130* Method_1_B39750ADC1D200E3(::Enum_3_63CAB6C405C6C7B1_1 a1)
	{
		return ((::Class_0_16E4307DCC419505_130*(*)(::Enum_3_63CAB6C405C6C7B1_1))((::PBYTE)hIl2Cpp + CLASS_1_0A7206BB9631BE95_METHOD_1_B39750ADC1D200E3_OFFSET))(a1);
	}
};
