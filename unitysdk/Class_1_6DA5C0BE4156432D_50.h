#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_50__CCTOR_OFFSET UNITYSDK_OFFSET(0x137714E0)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_50_TypeDefinitionIndex = 52728;

class Class_1_6DA5C0BE4156432D_50 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_50_TypeDefinitionIndex)->GetStaticField(0x424E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_50__CCTOR_OFFSET))();
	}
};
