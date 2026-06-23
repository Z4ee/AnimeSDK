#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_156__CCTOR_OFFSET UNITYSDK_OFFSET(0xF5C3A90)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_156_TypeDefinitionIndex = 81974;

class Class_1_6DA5C0BE4156432D_156 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_156_TypeDefinitionIndex)->GetStaticField(0x36A80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_156__CCTOR_OFFSET))();
	}
};
