#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_63BD26701645323A;

#define CLASS_1_63BD26701645323A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6CAA0)
#define CLASS_1_63BD26701645323A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6CAD0)
#define CLASS_1_63BD26701645323A___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EA6CAE0)

inline static constexpr unsigned int Class_1_63BD26701645323A___c_TypeDefinitionIndex = 33634;

class Class_1_63BD26701645323A___c : public ::System::Object
{
public:
	static ::Class_1_63BD26701645323A___c** StaticGet___9()
	{
		return (::Class_1_63BD26701645323A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_63BD26701645323A___c_TypeDefinitionIndex)->GetStaticField(0x5B3C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_63BD26701645323A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63BD26701645323A___C__CTOR_OFFSET))(this);
	}

	::Class_1_63BD26701645323A* __cctor_b__43_0()
	{
		return ((::Class_1_63BD26701645323A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63BD26701645323A___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
