#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DD9540)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_1_TypeDefinitionIndex = 38409;

class Class_1_6DA5C0BE4156432D_1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_1_TypeDefinitionIndex)->GetStaticField(0x317E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_1__CCTOR_OFFSET))();
	}
};
