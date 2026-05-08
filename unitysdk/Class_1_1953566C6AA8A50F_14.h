#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1953566C6AA8A50F_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F50C50)

inline static constexpr unsigned int Class_1_1953566C6AA8A50F_14_TypeDefinitionIndex = 42291;

class Class_1_1953566C6AA8A50F_14 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1953566C6AA8A50F_14_TypeDefinitionIndex)->GetStaticField(0x42BD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1953566C6AA8A50F_14__CCTOR_OFFSET))();
	}
};
