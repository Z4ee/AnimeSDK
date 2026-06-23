#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_150__CCTOR_OFFSET UNITYSDK_OFFSET(0x126787C0)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_150_TypeDefinitionIndex = 80339;

class Class_1_6DA5C0BE4156432D_150 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_150_TypeDefinitionIndex)->GetStaticField(0x42220);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_150__CCTOR_OFFSET))();
	}
};
