#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_93;
class Class_0_16E4307DCC419505_94;

#define CLASS_1_9F4BDFB218D37F11_METHOD_1_24591D497EE23262_OFFSET UNITYSDK_OFFSET(0x1ABBAB60)
#define CLASS_1_9F4BDFB218D37F11_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x1ABBA860)
#define CLASS_1_9F4BDFB218D37F11_METHOD_1_B39750ADC1D200E3_OFFSET UNITYSDK_OFFSET(0x1ABBAF00)
#define CLASS_1_9F4BDFB218D37F11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABBA7F0)

inline static constexpr unsigned int Class_1_9F4BDFB218D37F11_TypeDefinitionIndex = 32385;

class Class_1_9F4BDFB218D37F11 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_94*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_94*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F4BDFB218D37F11_TypeDefinitionIndex)->GetStaticField(0x25BA0);
	}
	static ::Il2CppArray<::Class_0_16E4307DCC419505_93*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_93*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F4BDFB218D37F11_TypeDefinitionIndex)->GetStaticField(0x25BA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F4BDFB218D37F11__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_93* Method_1_24591D497EE23262(::Enum_3_63CAB6C405C6C7B1_2 a1)
	{
		return ((::Class_0_16E4307DCC419505_93*(*)(::Enum_3_63CAB6C405C6C7B1_2))((::PBYTE)hIl2Cpp + CLASS_1_9F4BDFB218D37F11_METHOD_1_24591D497EE23262_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_93* Method_1_B39750ADC1D200E3(::Enum_3_63CAB6C405C6C7B1_2 a1)
	{
		return ((::Class_0_16E4307DCC419505_93*(*)(::Enum_3_63CAB6C405C6C7B1_2))((::PBYTE)hIl2Cpp + CLASS_1_9F4BDFB218D37F11_METHOD_1_B39750ADC1D200E3_OFFSET))(a1);
	}

	static ::System::Void Method_1_3574512695A597AB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F4BDFB218D37F11_METHOD_1_3574512695A597AB_OFFSET))();
	}
};
