#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A280D225275881D.h"
#include "unitysdk/System/Object.h"

class Class_3_DD4E81D56D779236;

#define CLASS_1_F802D26B0E4E234E__CCTOR_OFFSET UNITYSDK_OFFSET(0x154A4D90)

inline static constexpr unsigned int Class_1_F802D26B0E4E234E_TypeDefinitionIndex = 54340;

class Class_1_F802D26B0E4E234E : public ::System::Object
{
public:
	static ::Class_3_DD4E81D56D779236** StaticGet_Field_1_1()
	{
		return (::Class_3_DD4E81D56D779236**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F802D26B0E4E234E_TypeDefinitionIndex)->GetStaticField(0x3DA60);
	}
	static ::Il2CppArray<::Enum_3_3A280D225275881D>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Enum_3_3A280D225275881D>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F802D26B0E4E234E_TypeDefinitionIndex)->GetStaticField(0x3DA68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F802D26B0E4E234E__CCTOR_OFFSET))();
	}
};
