#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4AF717D30078CC7E;

#define CLASS_1_4AF717D30078CC7E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C975CD0)
#define CLASS_1_4AF717D30078CC7E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C975D00)
#define CLASS_1_4AF717D30078CC7E___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1C975D10)

inline static constexpr unsigned int Class_1_4AF717D30078CC7E___c_TypeDefinitionIndex = 32239;

class Class_1_4AF717D30078CC7E___c : public ::System::Object
{
public:
	static ::Class_1_4AF717D30078CC7E___c** StaticGet___9()
	{
		return (::Class_1_4AF717D30078CC7E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF717D30078CC7E___c_TypeDefinitionIndex)->GetStaticField(0x2D3E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E___C__CTOR_OFFSET))(this);
	}

	::Class_1_4AF717D30078CC7E* __cctor_b__58_0()
	{
		return ((::Class_1_4AF717D30078CC7E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E___C___CCTOR_B__58_0_OFFSET))(this);
	}
};
