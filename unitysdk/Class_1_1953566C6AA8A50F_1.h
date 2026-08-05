#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1953566C6AA8A50F_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F68CD0)

inline static constexpr unsigned int Class_1_1953566C6AA8A50F_1_TypeDefinitionIndex = 40841;

class Class_1_1953566C6AA8A50F_1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1953566C6AA8A50F_1_TypeDefinitionIndex)->GetStaticField(0x3C460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1953566C6AA8A50F_1__CCTOR_OFFSET))();
	}
};
