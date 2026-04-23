#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4AF393E7839B85AC;

#define CLASS_1_4AF393E7839B85AC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x198A0DF0)
#define CLASS_1_4AF393E7839B85AC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x198A0E30)
#define CLASS_1_4AF393E7839B85AC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x198A0E40)

inline static constexpr unsigned int Class_1_4AF393E7839B85AC___c_TypeDefinitionIndex = 25484;

class Class_1_4AF393E7839B85AC___c : public ::System::Object
{
public:
	static ::Class_1_4AF393E7839B85AC___c** StaticGet___9()
	{
		return (::Class_1_4AF393E7839B85AC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF393E7839B85AC___c_TypeDefinitionIndex)->GetStaticField(0x4EF20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AF393E7839B85AC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF393E7839B85AC___C__CTOR_OFFSET))(this);
	}

	::Class_1_4AF393E7839B85AC* __cctor_b__43_0()
	{
		return ((::Class_1_4AF393E7839B85AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF393E7839B85AC___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
