#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DA5C0BE4156432D_41__CCTOR_OFFSET UNITYSDK_OFFSET(0x12DA45F0)

inline static constexpr unsigned int Class_1_6DA5C0BE4156432D_41_TypeDefinitionIndex = 49080;

class Class_1_6DA5C0BE4156432D_41 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA5C0BE4156432D_41_TypeDefinitionIndex)->GetStaticField(0x39D40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA5C0BE4156432D_41__CCTOR_OFFSET))();
	}
};
