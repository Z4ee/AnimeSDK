#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_46__CCTOR_OFFSET UNITYSDK_OFFSET(0xF934EB0)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_46_TypeDefinitionIndex = 51611;

class Class_1_6DA5C0BE4156432D_46 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_46_TypeDefinitionIndex)->GetStaticField(0x464D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_46__CCTOR_OFFSET))();
	}
};
