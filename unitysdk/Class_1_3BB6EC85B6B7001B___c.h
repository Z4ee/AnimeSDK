#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3BB6EC85B6B7001B;

#define CLASS_1_3BB6EC85B6B7001B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C48B600)
#define CLASS_1_3BB6EC85B6B7001B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C48B640)
#define CLASS_1_3BB6EC85B6B7001B___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1C48B650)

inline static constexpr unsigned int Class_1_3BB6EC85B6B7001B___c_TypeDefinitionIndex = 27100;

class Class_1_3BB6EC85B6B7001B___c : public ::System::Object
{
public:
	static ::Class_1_3BB6EC85B6B7001B___c** StaticGet___9()
	{
		return (::Class_1_3BB6EC85B6B7001B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BB6EC85B6B7001B___c_TypeDefinitionIndex)->GetStaticField(0x46970);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BB6EC85B6B7001B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BB6EC85B6B7001B___C__CTOR_OFFSET))(this);
	}

	::Class_1_3BB6EC85B6B7001B* __cctor_b__108_0()
	{
		return ((::Class_1_3BB6EC85B6B7001B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BB6EC85B6B7001B___C___CCTOR_B__108_0_OFFSET))(this);
	}
};
