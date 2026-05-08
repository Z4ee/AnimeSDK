#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_104__CCTOR_OFFSET UNITYSDK_OFFSET(0x11462C30)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_104_TypeDefinitionIndex = 65833;

class Class_1_6DA5C0BE4156432D_104 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_104_TypeDefinitionIndex)->GetStaticField(0x43F50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_104__CCTOR_OFFSET))();
	}
};
