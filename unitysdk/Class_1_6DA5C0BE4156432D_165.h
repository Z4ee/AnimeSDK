#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_165__CCTOR_OFFSET UNITYSDK_OFFSET(0x1681A310)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_165_TypeDefinitionIndex = 84227;

class Class_1_6DA5C0BE4156432D_165 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_165_TypeDefinitionIndex)->GetStaticField(0x4A480);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_165__CCTOR_OFFSET))();
	}
};
