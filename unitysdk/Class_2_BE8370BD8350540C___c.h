#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_BE8370BD8350540C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143045F0)
#define CLASS_2_BE8370BD8350540C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14304630)
#define CLASS_2_BE8370BD8350540C___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x14304640)

inline static constexpr unsigned int Class_2_BE8370BD8350540C___c_TypeDefinitionIndex = 72233;

class Class_2_BE8370BD8350540C___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE8370BD8350540C___c_TypeDefinitionIndex)->GetStaticField(0x2C070);
	}
	static ::Class_2_BE8370BD8350540C___c** StaticGet___9()
	{
		return (::Class_2_BE8370BD8350540C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE8370BD8350540C___c_TypeDefinitionIndex)->GetStaticField(0x2C078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C___C__CTOR_OFFSET))(this);
	}

	::System::Single __ctor_b__0_0(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C___C___CTOR_B__0_0_OFFSET))(this, a1);
	}
};
