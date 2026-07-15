#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_329;

#define CLASS_1_32CC8A47E29FCF34__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2BF350)

inline static constexpr unsigned int Class_1_32CC8A47E29FCF34_TypeDefinitionIndex = 42381;

class Class_1_32CC8A47E29FCF34 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_329** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_329**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32CC8A47E29FCF34_TypeDefinitionIndex)->GetStaticField(0x1280);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32CC8A47E29FCF34__CCTOR_OFFSET))();
	}
};
