#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_480;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_081D7CD985F83E6F___C_METHOD_1_D9778B51CD7ACF2D_OFFSET UNITYSDK_OFFSET(0x14C85B90)
#define CLASS_1_081D7CD985F83E6F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C85B40)
#define CLASS_1_081D7CD985F83E6F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C85B80)

inline static constexpr unsigned int Class_1_081D7CD985F83E6F___c_TypeDefinitionIndex = 68686;

class Class_1_081D7CD985F83E6F___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_0_16E4307DCC419505_480*>** StaticGet___9__5_0()
	{
		return (::System::Predicate_1<::Class_0_16E4307DCC419505_480*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_081D7CD985F83E6F___c_TypeDefinitionIndex)->GetStaticField(0x3EF80);
	}
	static ::Class_1_081D7CD985F83E6F___c** StaticGet___9()
	{
		return (::Class_1_081D7CD985F83E6F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_081D7CD985F83E6F___c_TypeDefinitionIndex)->GetStaticField(0x3EF88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_081D7CD985F83E6F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_081D7CD985F83E6F___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D9778B51CD7ACF2D(::Class_0_16E4307DCC419505_480* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_480*))((::PBYTE)hIl2Cpp + CLASS_1_081D7CD985F83E6F___C_METHOD_1_D9778B51CD7ACF2D_OFFSET))(this, a1);
	}
};
