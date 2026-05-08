#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1953566C6AA8A50F_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x161B0C10)

inline static constexpr unsigned int Class_1_1953566C6AA8A50F_6_TypeDefinitionIndex = 40130;

class Class_1_1953566C6AA8A50F_6 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1953566C6AA8A50F_6_TypeDefinitionIndex)->GetStaticField(0x36C70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1953566C6AA8A50F_6__CCTOR_OFFSET))();
	}
};
