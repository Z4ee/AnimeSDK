#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_01F45D0A231990CD;

#define CLASS_1_01F45D0A231990CD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB87B60)
#define CLASS_1_01F45D0A231990CD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB87BA0)
#define CLASS_1_01F45D0A231990CD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1CB87BB0)

inline static constexpr unsigned int Class_1_01F45D0A231990CD___c_TypeDefinitionIndex = 27790;

class Class_1_01F45D0A231990CD___c : public ::System::Object
{
public:
	static ::Class_1_01F45D0A231990CD___c** StaticGet___9()
	{
		return (::Class_1_01F45D0A231990CD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01F45D0A231990CD___c_TypeDefinitionIndex)->GetStaticField(0x310D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_01F45D0A231990CD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01F45D0A231990CD___C__CTOR_OFFSET))(this);
	}

	::Class_1_01F45D0A231990CD* __cctor_b__28_0()
	{
		return ((::Class_1_01F45D0A231990CD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01F45D0A231990CD___C___CCTOR_B__28_0_OFFSET))(this);
	}
};
