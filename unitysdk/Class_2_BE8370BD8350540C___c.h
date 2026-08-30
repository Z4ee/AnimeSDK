#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_BE8370BD8350540C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18558DE0)
#define CLASS_2_BE8370BD8350540C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18558E20)
#define CLASS_2_BE8370BD8350540C___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x18558E30)

inline static constexpr unsigned int Class_2_BE8370BD8350540C___c_TypeDefinitionIndex = 77242;

class Class_2_BE8370BD8350540C___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE8370BD8350540C___c_TypeDefinitionIndex)->GetStaticField(0x5C420);
	}
	static ::Class_2_BE8370BD8350540C___c** StaticGet___9()
	{
		return (::Class_2_BE8370BD8350540C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE8370BD8350540C___c_TypeDefinitionIndex)->GetStaticField(0x5C428);
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
