#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AFFD5657038E04AA;

#define CLASS_1_AFFD5657038E04AA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1955C000)
#define CLASS_1_AFFD5657038E04AA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1955C040)
#define CLASS_1_AFFD5657038E04AA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1955C050)

inline static constexpr unsigned int Class_1_AFFD5657038E04AA___c_TypeDefinitionIndex = 32909;

class Class_1_AFFD5657038E04AA___c : public ::System::Object
{
public:
	static ::Class_1_AFFD5657038E04AA___c** StaticGet___9()
	{
		return (::Class_1_AFFD5657038E04AA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFFD5657038E04AA___c_TypeDefinitionIndex)->GetStaticField(0x4C870);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA___C__CTOR_OFFSET))(this);
	}

	::Class_1_AFFD5657038E04AA* __cctor_b__38_0()
	{
		return ((::Class_1_AFFD5657038E04AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
