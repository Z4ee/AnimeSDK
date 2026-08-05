#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_178__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E50D80)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_178_TypeDefinitionIndex = 90708;

class Class_1_6DA5C0BE4156432D_178 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_178_TypeDefinitionIndex)->GetStaticField(0x44680);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_178__CCTOR_OFFSET))();
	}
};
