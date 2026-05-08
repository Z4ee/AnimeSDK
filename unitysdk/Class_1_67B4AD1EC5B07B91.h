#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A250D2252735266.h"
#include "unitysdk/System/Object.h"

class Class_3_DD4E81D56D779236;

#define CLASS_1_67B4AD1EC5B07B91__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A60370)

inline static constexpr unsigned int Class_1_67B4AD1EC5B07B91_TypeDefinitionIndex = 42818;

class Class_1_67B4AD1EC5B07B91 : public ::System::Object
{
public:
	static ::Class_3_DD4E81D56D779236** StaticGet_Field_1_1()
	{
		return (::Class_3_DD4E81D56D779236**)Il2CppClass::FromTypeDefinitionIndex(Class_1_67B4AD1EC5B07B91_TypeDefinitionIndex)->GetStaticField(0x3E330);
	}
	static ::Il2CppArray<::Enum_3_3A250D2252735266>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Enum_3_3A250D2252735266>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_67B4AD1EC5B07B91_TypeDefinitionIndex)->GetStaticField(0x3E338);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_67B4AD1EC5B07B91__CCTOR_OFFSET))();
	}
};
