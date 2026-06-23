#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_143__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAACE90)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_143_TypeDefinitionIndex = 79127;

class Class_1_6DA5C0BE4156432D_143 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_143_TypeDefinitionIndex)->GetStaticField(0x41CE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_143__CCTOR_OFFSET))();
	}
};
