#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A734B6279A7AB66E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D34020)
#define CLASS_1_A734B6279A7AB66E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D34050)
#define CLASS_1_A734B6279A7AB66E___C___CCTOR_B__20_0_OFFSET UNITYSDK_OFFSET(0x17D34060)
#define CLASS_1_A734B6279A7AB66E___C___CCTOR_B__20_1_OFFSET UNITYSDK_OFFSET(0x17D34070)

inline static constexpr unsigned int Class_1_A734B6279A7AB66E___c_TypeDefinitionIndex = 25667;

class Class_1_A734B6279A7AB66E___c : public ::System::Object
{
public:
	static ::Class_1_A734B6279A7AB66E___c** StaticGet___9()
	{
		return (::Class_1_A734B6279A7AB66E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A734B6279A7AB66E___c_TypeDefinitionIndex)->GetStaticField(0x11D10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__20_0(::Enum_3_F80BFD5B986D5503_3 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E___C___CCTOR_B__20_0_OFFSET))(this, x);
	}

	::Enum_3_F80BFD5B986D5503_3 __cctor_b__20_1(::System::Int32 x)
	{
		return ((::Enum_3_F80BFD5B986D5503_3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A734B6279A7AB66E___C___CCTOR_B__20_1_OFFSET))(this, x);
	}
};
