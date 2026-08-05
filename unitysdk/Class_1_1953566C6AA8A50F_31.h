#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1953566C6AA8A50F_31__CCTOR_OFFSET UNITYSDK_OFFSET(0x1126EFF0)

inline static constexpr unsigned int Class_1_1953566C6AA8A50F_31_TypeDefinitionIndex = 59432;

class Class_1_1953566C6AA8A50F_31 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1953566C6AA8A50F_31_TypeDefinitionIndex)->GetStaticField(0x50120);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1953566C6AA8A50F_31__CCTOR_OFFSET))();
	}
};
