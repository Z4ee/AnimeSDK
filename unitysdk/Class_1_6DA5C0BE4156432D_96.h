#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_96__CCTOR_OFFSET UNITYSDK_OFFSET(0x13306060)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_96_TypeDefinitionIndex = 66141;

class Class_1_6DA5C0BE4156432D_96 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_96_TypeDefinitionIndex)->GetStaticField(0x472B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_96__CCTOR_OFFSET))();
	}
};
