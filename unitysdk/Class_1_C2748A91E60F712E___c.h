#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C2748A91E60F712E;

#define CLASS_1_C2748A91E60F712E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0CE980)
#define CLASS_1_C2748A91E60F712E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CE9C0)
#define CLASS_1_C2748A91E60F712E___C___CCTOR_B__60_0_OFFSET UNITYSDK_OFFSET(0x1A0CE9D0)

inline static constexpr unsigned int Class_1_C2748A91E60F712E___c_TypeDefinitionIndex = 33024;

class Class_1_C2748A91E60F712E___c : public ::System::Object
{
public:
	static ::Class_1_C2748A91E60F712E___c** StaticGet___9()
	{
		return (::Class_1_C2748A91E60F712E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2748A91E60F712E___c_TypeDefinitionIndex)->GetStaticField(0x3E580);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2748A91E60F712E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2748A91E60F712E___C__CTOR_OFFSET))(this);
	}

	::Class_1_C2748A91E60F712E* __cctor_b__60_0()
	{
		return ((::Class_1_C2748A91E60F712E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2748A91E60F712E___C___CCTOR_B__60_0_OFFSET))(this);
	}
};
