#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_98__CCTOR_OFFSET UNITYSDK_OFFSET(0xF6364A0)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_98_TypeDefinitionIndex = 66437;

class Class_1_6DA5C0BE4156432D_98 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_98_TypeDefinitionIndex)->GetStaticField(0x3D9A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_98__CCTOR_OFFSET))();
	}
};
