#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_22__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C36910)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_22_TypeDefinitionIndex = 46790;

class Class_1_6DA5C0BE4156432D_22 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_22_TypeDefinitionIndex)->GetStaticField(0x4A050);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_22__CCTOR_OFFSET))();
	}
};
