#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1953566C6AA8A50F_81__CCTOR_OFFSET UNITYSDK_OFFSET(0x158F1320)

inline static constexpr unsigned int Class_1_1953566C6AA8A50F_81_TypeDefinitionIndex = 89220;

class Class_1_1953566C6AA8A50F_81 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1953566C6AA8A50F_81_TypeDefinitionIndex)->GetStaticField(0x41F30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1953566C6AA8A50F_81__CCTOR_OFFSET))();
	}
};
