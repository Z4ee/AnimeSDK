#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0119785E582EFC4A;

#define CLASS_1_0119785E582EFC4A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199A4820)
#define CLASS_1_0119785E582EFC4A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x199A4850)
#define CLASS_1_0119785E582EFC4A___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0x199A4860)

inline static constexpr unsigned int Class_1_0119785E582EFC4A___c_TypeDefinitionIndex = 30017;

class Class_1_0119785E582EFC4A___c : public ::System::Object
{
public:
	static ::Class_1_0119785E582EFC4A___c** StaticGet___9()
	{
		return (::Class_1_0119785E582EFC4A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0119785E582EFC4A___c_TypeDefinitionIndex)->GetStaticField(0x64DF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0119785E582EFC4A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0119785E582EFC4A___C__CTOR_OFFSET))(this);
	}

	::Class_1_0119785E582EFC4A* __cctor_b__98_0()
	{
		return ((::Class_1_0119785E582EFC4A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0119785E582EFC4A___C___CCTOR_B__98_0_OFFSET))(this);
	}
};
