#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;

#define CLASS_1_547FBBCFF4F06610_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC7FC90)
#define CLASS_1_547FBBCFF4F06610_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBC7FCC0)
#define CLASS_1_547FBBCFF4F06610_2___C___CCTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0xBC7FCD0)

inline static constexpr unsigned int Class_1_547FBBCFF4F06610_2___c_TypeDefinitionIndex = 50147;

class Class_1_547FBBCFF4F06610_2___c : public ::System::Object
{
public:
	static ::Class_1_547FBBCFF4F06610_2___c** StaticGet___9()
	{
		return (::Class_1_547FBBCFF4F06610_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_547FBBCFF4F06610_2___c_TypeDefinitionIndex)->GetStaticField(0x5E800);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_2___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__3_0(::Class_1_7B4E9156998275BE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_2___C___CCTOR_B__3_0_OFFSET))(this, a1);
	}
};
