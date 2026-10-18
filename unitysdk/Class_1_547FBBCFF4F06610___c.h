#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6F4C4ABEDB8B5E9;

#define CLASS_1_547FBBCFF4F06610___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB287750)
#define CLASS_1_547FBBCFF4F06610___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB287780)
#define CLASS_1_547FBBCFF4F06610___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xB287790)
#define CLASS_1_547FBBCFF4F06610___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0xB287990)

inline static constexpr unsigned int Class_1_547FBBCFF4F06610___c_TypeDefinitionIndex = 49771;

class Class_1_547FBBCFF4F06610___c : public ::System::Object
{
public:
	static ::Class_1_547FBBCFF4F06610___c** StaticGet___9()
	{
		return (::Class_1_547FBBCFF4F06610___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_547FBBCFF4F06610___c_TypeDefinitionIndex)->GetStaticField(0x23970);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__2_0(::Class_1_C6F4C4ABEDB8B5E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6F4C4ABEDB8B5E9*))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610___C___CCTOR_B__2_0_OFFSET))(this, a1);
	}

	::System::Void __cctor_b__2_1(::Class_1_C6F4C4ABEDB8B5E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6F4C4ABEDB8B5E9*))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610___C___CCTOR_B__2_1_OFFSET))(this, a1);
	}
};
