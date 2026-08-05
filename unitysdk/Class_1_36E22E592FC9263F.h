#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A280D225275881D.h"
#include "unitysdk/System/Object.h"

class Class_3_DD4E81D56D779236;

#define CLASS_1_36E22E592FC9263F__CCTOR_OFFSET UNITYSDK_OFFSET(0x133ED040)

inline static constexpr unsigned int Class_1_36E22E592FC9263F_TypeDefinitionIndex = 44361;

class Class_1_36E22E592FC9263F : public ::System::Object
{
public:
	static ::Il2CppArray<::Enum_3_3A280D225275881D>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Enum_3_3A280D225275881D>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36E22E592FC9263F_TypeDefinitionIndex)->GetStaticField(0x482D0);
	}
	static ::Class_3_DD4E81D56D779236** StaticGet_Field_1_0()
	{
		return (::Class_3_DD4E81D56D779236**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36E22E592FC9263F_TypeDefinitionIndex)->GetStaticField(0x482D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36E22E592FC9263F__CCTOR_OFFSET))();
	}
};
