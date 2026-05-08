#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_105__CCTOR_OFFSET UNITYSDK_OFFSET(0x119F5600)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_105_TypeDefinitionIndex = 65978;

class Class_1_6DA5C0BE4156432D_105 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_105_TypeDefinitionIndex)->GetStaticField(0x3F600);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_105__CCTOR_OFFSET))();
	}
};
