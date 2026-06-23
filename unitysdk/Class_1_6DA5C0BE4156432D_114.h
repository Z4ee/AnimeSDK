#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_114__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9952D0)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_114_TypeDefinitionIndex = 70256;

class Class_1_6DA5C0BE4156432D_114 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_114_TypeDefinitionIndex)->GetStaticField(0x4A1E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_114__CCTOR_OFFSET))();
	}
};
