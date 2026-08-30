#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F;

#define CLASS_1_28D410CCE235575F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FE250)
#define CLASS_1_28D410CCE235575F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FE280)
#define CLASS_1_28D410CCE235575F___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2FE290)

inline static constexpr unsigned int Class_1_28D410CCE235575F___c_TypeDefinitionIndex = 25286;

class Class_1_28D410CCE235575F___c : public ::System::Object
{
public:
	static ::Class_1_28D410CCE235575F___c** StaticGet___9()
	{
		return (::Class_1_28D410CCE235575F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28D410CCE235575F___c_TypeDefinitionIndex)->GetStaticField(0x1FC30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F___C__CTOR_OFFSET))(this);
	}

	::Class_1_28D410CCE235575F* __cctor_b__33_0()
	{
		return ((::Class_1_28D410CCE235575F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F___C___CCTOR_B__33_0_OFFSET))(this);
	}
};
