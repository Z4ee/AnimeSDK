#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_100__CCTOR_OFFSET UNITYSDK_OFFSET(0xDADA230)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_100_TypeDefinitionIndex = 64245;

class Class_1_6DA5C0BE4156432D_100 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_100_TypeDefinitionIndex)->GetStaticField(0x490A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_100__CCTOR_OFFSET))();
	}
};
