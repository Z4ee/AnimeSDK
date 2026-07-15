#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_82DA885B15E1F653;

#define CLASS_1_82DA885B15E1F653___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFF0450)
#define CLASS_1_82DA885B15E1F653___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFF0480)
#define CLASS_1_82DA885B15E1F653___C___CCTOR_B__188_0_OFFSET UNITYSDK_OFFSET(0x1BFF0490)

inline static constexpr unsigned int Class_1_82DA885B15E1F653___c_TypeDefinitionIndex = 31657;

class Class_1_82DA885B15E1F653___c : public ::System::Object
{
public:
	static ::Class_1_82DA885B15E1F653___c** StaticGet___9()
	{
		return (::Class_1_82DA885B15E1F653___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_82DA885B15E1F653___c_TypeDefinitionIndex)->GetStaticField(0x36A80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_82DA885B15E1F653___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82DA885B15E1F653___C__CTOR_OFFSET))(this);
	}

	::Class_1_82DA885B15E1F653* __cctor_b__188_0()
	{
		return ((::Class_1_82DA885B15E1F653*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82DA885B15E1F653___C___CCTOR_B__188_0_OFFSET))(this);
	}
};
