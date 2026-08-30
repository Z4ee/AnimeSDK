#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8D935F7EA456803F;

#define CLASS_1_8D935F7EA456803F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB786C0)
#define CLASS_1_8D935F7EA456803F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB786F0)
#define CLASS_1_8D935F7EA456803F___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1EB78700)

inline static constexpr unsigned int Class_1_8D935F7EA456803F___c_TypeDefinitionIndex = 25111;

class Class_1_8D935F7EA456803F___c : public ::System::Object
{
public:
	static ::Class_1_8D935F7EA456803F___c** StaticGet___9()
	{
		return (::Class_1_8D935F7EA456803F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D935F7EA456803F___c_TypeDefinitionIndex)->GetStaticField(0x32F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D935F7EA456803F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D935F7EA456803F___C__CTOR_OFFSET))(this);
	}

	::Class_1_8D935F7EA456803F* __cctor_b__53_0()
	{
		return ((::Class_1_8D935F7EA456803F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D935F7EA456803F___C___CCTOR_B__53_0_OFFSET))(this);
	}
};
