#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_24__CCTOR_OFFSET UNITYSDK_OFFSET(0x194E43B0)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_24_TypeDefinitionIndex = 48150;

class Class_1_6DA5C0BE4156432D_24 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_24_TypeDefinitionIndex)->GetStaticField(0x4F250);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_24__CCTOR_OFFSET))();
	}
};
