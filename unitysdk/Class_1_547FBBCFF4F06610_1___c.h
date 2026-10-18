#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6F4C4ABEDB8B5E9;

#define CLASS_1_547FBBCFF4F06610_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11FF8700)
#define CLASS_1_547FBBCFF4F06610_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11FF8730)
#define CLASS_1_547FBBCFF4F06610_1___C___CCTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x11FF8740)

inline static constexpr unsigned int Class_1_547FBBCFF4F06610_1___c_TypeDefinitionIndex = 49773;

class Class_1_547FBBCFF4F06610_1___c : public ::System::Object
{
public:
	static ::Class_1_547FBBCFF4F06610_1___c** StaticGet___9()
	{
		return (::Class_1_547FBBCFF4F06610_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_547FBBCFF4F06610_1___c_TypeDefinitionIndex)->GetStaticField(0x6FA30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_1___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__3_0(::Class_1_C6F4C4ABEDB8B5E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6F4C4ABEDB8B5E9*))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_1___C___CCTOR_B__3_0_OFFSET))(this, a1);
	}
};
