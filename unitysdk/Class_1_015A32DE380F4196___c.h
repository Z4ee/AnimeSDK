#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_015A32DE380F4196;

#define CLASS_1_015A32DE380F4196___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19726F70)
#define CLASS_1_015A32DE380F4196___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19726FA0)
#define CLASS_1_015A32DE380F4196___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x19726FB0)

inline static constexpr unsigned int Class_1_015A32DE380F4196___c_TypeDefinitionIndex = 32396;

class Class_1_015A32DE380F4196___c : public ::System::Object
{
public:
	static ::Class_1_015A32DE380F4196___c** StaticGet___9()
	{
		return (::Class_1_015A32DE380F4196___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_015A32DE380F4196___c_TypeDefinitionIndex)->GetStaticField(0x531A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_015A32DE380F4196___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_015A32DE380F4196___C__CTOR_OFFSET))(this);
	}

	::Class_1_015A32DE380F4196* __cctor_b__43_0()
	{
		return ((::Class_1_015A32DE380F4196*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_015A32DE380F4196___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
