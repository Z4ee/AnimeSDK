#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9E417278351157F;

#define CLASS_1_C9E417278351157F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC0270)
#define CLASS_1_C9E417278351157F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC02A0)
#define CLASS_1_C9E417278351157F___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DEC02B0)

inline static constexpr unsigned int Class_1_C9E417278351157F___c_TypeDefinitionIndex = 24975;

class Class_1_C9E417278351157F___c : public ::System::Object
{
public:
	static ::Class_1_C9E417278351157F___c** StaticGet___9()
	{
		return (::Class_1_C9E417278351157F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9E417278351157F___c_TypeDefinitionIndex)->GetStaticField(0x3AF00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F___C__CTOR_OFFSET))(this);
	}

	::Class_1_C9E417278351157F* __cctor_b__38_0()
	{
		return ((::Class_1_C9E417278351157F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
