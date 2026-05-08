#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_4;
class Class_1_8DB0BC4CF3861904;

#define CLASS_1_BDBB728B3AE6C1DE_METHOD_1_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x1C2490C0)
#define CLASS_1_BDBB728B3AE6C1DE_METHOD_1_E0605E6F5A574306_OFFSET UNITYSDK_OFFSET(0x1C249170)
#define CLASS_1_BDBB728B3AE6C1DE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C249050)

inline static constexpr unsigned int Class_1_BDBB728B3AE6C1DE_TypeDefinitionIndex = 9419;

class Class_1_BDBB728B3AE6C1DE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BDBB728B3AE6C1DE_TypeDefinitionIndex)->GetStaticField(0x8670);
	}
	static ::Class_1_8DB0BC4CF3861904** StaticGet_Field_1_0()
	{
		return (::Class_1_8DB0BC4CF3861904**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BDBB728B3AE6C1DE_TypeDefinitionIndex)->GetStaticField(0x8678);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BDBB728B3AE6C1DE_TypeDefinitionIndex)->GetStaticField(0x8680);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BDBB728B3AE6C1DE__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_4* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_4*))((::PBYTE)hIl2Cpp + CLASS_1_BDBB728B3AE6C1DE_METHOD_1_0EF345F8F1CF4181_OFFSET))(a1);
	}

	static ::System::Void Method_1_E0605E6F5A574306(::Class_0_16E4307DCC419505_4* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_4*))((::PBYTE)hIl2Cpp + CLASS_1_BDBB728B3AE6C1DE_METHOD_1_E0605E6F5A574306_OFFSET))(a1);
	}
};
